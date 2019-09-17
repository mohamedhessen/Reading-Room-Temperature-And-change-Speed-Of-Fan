################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.lss \

FLASH_IMAGE += \
Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.elf secondary-outputs

# Tool invocations
Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Reading Room Temperature And change Speed Of Fan.map -mmcu=atmega32 -o "Reading Room Temperature And change Speed Of Fan.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.lss: Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Reading Room Temperature And change Speed Of Fan.elf  >"Reading Room Temperature And change Speed Of Fan.lss"
	@echo 'Finished building: $@'
	@echo ' '

Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.hex: Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Reading Room Temperature And change Speed Of Fan.elf  "Reading Room Temperature And change Speed Of Fan.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Reading\ Room\ Temperature\ And\ change\ Speed\ Of\ Fan.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Reading Room Temperature And change Speed Of Fan.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) "Reading Room Temperature And change Speed Of Fan.elf"
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
