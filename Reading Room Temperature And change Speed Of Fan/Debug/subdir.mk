################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_source.c \
../App.c \
../LCD_source.c \
../initerrupt_external.c \
../source.c 

OBJS += \
./ADC_source.o \
./App.o \
./LCD_source.o \
./initerrupt_external.o \
./source.o 

C_DEPS += \
./ADC_source.d \
./App.d \
./LCD_source.d \
./initerrupt_external.d \
./source.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


