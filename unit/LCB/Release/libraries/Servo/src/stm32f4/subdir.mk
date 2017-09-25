################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src/stm32f4/Servo.cpp 

LINK_OBJ += \
./libraries/Servo/src/stm32f4/Servo.cpp.o 

CPP_DEPS += \
./libraries/Servo/src/stm32f4/Servo.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/Servo/src/stm32f4/Servo.cpp.o: /data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src/stm32f4/Servo.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/data/sloeber//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/cores/arduino" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/variants/standard" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire" -I"/data/sloeber/arduinoPlugin/packages/arduino/hardware/avr/1.6.20/libraries/Wire/src" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2" -I"/data/sloeber/arduinoPlugin/libraries/Servo/1.1.2/src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


