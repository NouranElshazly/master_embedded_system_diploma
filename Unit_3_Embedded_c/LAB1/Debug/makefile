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
LAB1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
LAB1.list \

OBJCOPY_HEX += \
LAB1.hex \

OBJCOPY_BIN += \
LAB1.bin \

OBJCOPY_VERILOG += \
LAB1.verilog \

OBJCOPY_SREC += \
LAB1.srec \

OBJCOPY_SYMBOLSREC += \
LAB1.symbolsrec \


# All Target
all: LAB1.elf secondary-outputs

# Tool invocations
LAB1.elf: $(OBJS) $(USER_OBJS) D:\embeded\ system\ kerloes\embedded_C\LAB1\STM32F101C8TX_FLASH.ld
	arm-none-eabi-gcc -o "LAB1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\embeded system kerloes\embedded_C\LAB1\STM32F101C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LAB1.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

LAB1.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LAB1.list"
	@echo 'Finished building: $@'
	@echo ' '

LAB1.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "LAB1.hex"
	@echo 'Finished building: $@'
	@echo ' '

LAB1.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "LAB1.bin"
	@echo 'Finished building: $@'
	@echo ' '

LAB1.verilog: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O verilog $(EXECUTABLES) "LAB1.verilog"
	@echo 'Finished building: $@'
	@echo ' '

LAB1.srec: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O srec $(EXECUTABLES) "LAB1.srec"
	@echo 'Finished building: $@'
	@echo ' '

LAB1.symbolsrec: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O symbolsrec $(EXECUTABLES) "LAB1.symbolsrec"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN) $(OBJCOPY_VERILOG) $(OBJCOPY_SREC) $(OBJCOPY_SYMBOLSREC)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
