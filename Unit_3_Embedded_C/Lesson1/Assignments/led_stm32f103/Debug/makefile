################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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
EXECUTABLES += \
led_stm32f103.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
led_stm32f103.list \

OBJCOPY_HEX += \
led_stm32f103.hex \

OBJCOPY_BIN += \
led_stm32f103.bin \


# All Target
all: led_stm32f103.elf secondary-outputs

# Tool invocations
led_stm32f103.elf: $(OBJS) $(USER_OBJS) C:\Users\Lap\STM32CubeIDE\workspace_1.4.0\led_stm32f103\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "led_stm32f103.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Lap\STM32CubeIDE\workspace_1.4.0\led_stm32f103\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="led_stm32f103.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

led_stm32f103.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "led_stm32f103.list"
	@echo 'Finished building: $@'
	@echo ' '

led_stm32f103.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "led_stm32f103.hex"
	@echo 'Finished building: $@'
	@echo ' '

led_stm32f103.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "led_stm32f103.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
