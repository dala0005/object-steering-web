################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
../LCB.ino 

CPP_SRCS += \
../.ino.cpp \
../LedArray.cpp \
../Motor.cpp \
../Unit.cpp 

LINK_OBJ += \
./.ino.cpp.o \
./LedArray.cpp.o \
./Motor.cpp.o \
./Unit.cpp.o 

INO_DEPS += \
./LCB.ino.d 

CPP_DEPS += \
./.ino.cpp.d \
./LedArray.cpp.d \
./Motor.cpp.d \
./Unit.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ../.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

LCB.o: ../LCB.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

LedArray.cpp.o: ../LedArray.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

Motor.cpp.o: ../Motor.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

Unit.cpp.o: ../Unit.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


