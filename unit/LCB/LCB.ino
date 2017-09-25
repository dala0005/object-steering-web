#include <Arduino.h>
#include <Wire.h>
#include "Register.h"
#include "Unit.h"

#define TRANSACTION_LEN 8       // i2c input buffer length. prevents runaway i2c reads
const char compile_date[] = __DATE__ " " __TIME__;

volatile int memIndex = 1;     // store the memory index between i2c read and write

// address to register mapping. only main should be aware of
// addresses. i2c events use them to map address->register enum
// from then on, no need to care about addresses
static register_t address_map[R_LEN] =
{
		[0x00] = R_UNDEFINED,
		[0x01] = R_MOTOR_LEFT,
		[0x02] = R_MOTOR_RIGHT,
		[0x03] = R_ARM_HORIZONTAL,
		[0x04] = R_ARM_HORIZONTAL,
};

// flags, to keep track of updated registers
int event_flags[R_LEN] = { 0 };

// main register memory
int memory[R_LEN] = { 0 };

uint16_t readRequests = 0;      // tracking read requests

void receiveEvent(int num);
void requestEvent();

void setup()
{
    Wire.begin(8);        // join i2c bus
    Wire.onReceive(receiveEvent);   // register event
    Wire.onRequest(requestEvent);   // register event

    Serial.begin(38400);           // start serial for output
    Serial.println(F("begin"));

    unitSetup();
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here

	for (int i = 0; i < R_LEN; i++) {
//		Serial.println("event:");
//		Serial.println(i);

		if (event_flags[i]) {
			unitProcessEvent((register_t) i, memory[i] );
			event_flags[i] = 0;
		}
	}

	unitTick();
	delay(50);
}

void requestEvent() {
    int content = 0xc000;   // register value

//    debugPrintln4(F("--- request event ---"));

    content = memory[memIndex];

//    debugPrint4(F("return value: "));
//    debugPrintln4(content);

    readRequests |= (1 << memIndex); // now we know this register was accessed

    Wire.write(content >> 8);
    Wire.write(content & 0xff);
}

void receiveEvent(int num) {
    byte transaction[TRANSACTION_LEN] = {0};
    byte data;

    int i = 0;
    int code;
    int value = 0;
    int reg = 0;

    while(Wire.available()) {
        data = Wire.read();
        if (i < TRANSACTION_LEN) {
            transaction[i] = data;
        } else {
//            debugPrintln4(F("buffer owerflow"));
        }

        i++;
    }

    if (i != num) {
//        debugPrintln4(F("data length mismatch"));
        // should never happen
        return;
    }

    if (num == 0) {
        return;
    }

    code = transaction[0];
    reg = address_map[code];

    if (reg >= R_LEN || reg == R_UNDEFINED) {
        return;
    }

    Serial.println("code: ");
    Serial.println((int) code);
    Serial.println("reg: ");
    Serial.println((int) reg);

    // if it's a read request. store the register and return
    // next, a requestEvent will occur, and finish the request
    memIndex = code; // always store code, in case master rtries to read data without "write"

    if (i == 1) {
        return;
    }

    if (i != 3) {
        // BORK! raise error..
        return;  //..or just ignore?
    }

    value = transaction[1] << 8;
    value |= transaction[2] & 0xff;

    Serial.println("value: ");
    Serial.println((int) value);

    // register value is unchanged. no need to set triggers. just return
    if (memory[reg] == value) {
        return;
    }

    Serial.println("update");

    memory[reg] = value;
    event_flags[reg] = 1;
}
