################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/ioLibrary/Internet/DNS/subdir.mk
-include src/ioLibrary/Internet/DHCP/subdir.mk
-include src/ioLibrary/Ethernet/W5500/subdir.mk
-include src/ioLibrary/Ethernet/subdir.mk
-include src/PlatformHandler/subdir.mk
-include src/Application/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: DNS_LPC11E36_LPCXpresso.axf

# Tool invocations
DNS_LPC11E36_LPCXpresso.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\Administrator\Documents\GitHub\Loopback_LPC11E36_LPCXpresso\wiznet_evb_w5500evb_board\Debug" -L"C:\Users\Administrator\Documents\GitHub\Loopback_LPC11E36_LPCXpresso\lpc_chip_11exx\Debug" -Xlinker -Map="DNS_LPC11E36_LPCXpresso.map" -Xlinker --gc-sections -mcpu=cortex-m0 -mthumb -T "Loopback_LPC11E36_LPCXpresso_Debug.ld" -o "DNS_LPC11E36_LPCXpresso.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) DNS_LPC11E36_LPCXpresso.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "DNS_LPC11E36_LPCXpresso.axf" ; arm-none-eabi-objcopy -O ihex "DNS_LPC11E36_LPCXpresso.axf" "DNS_LPC11E36_LPCXpresso.hex" ; # arm-none-eabi-objcopy -v -O binary "DNS_LPC11E36_LPCXpresso.axf" "DNS_LPC11E36_LPCXpresso.bin" ; # checksum -p LPC11E36_501 -d "DNS_LPC11E36_LPCXpresso.bin"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
