################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Modules/ssd_numbers.c 

OBJS += \
./Drivers/Modules/ssd_numbers.o 

C_DEPS += \
./Drivers/Modules/ssd_numbers.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Modules/%.o Drivers/Modules/%.su Drivers/Modules/%.cyclo: ../Drivers/Modules/%.c Drivers/Modules/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F100xB -c -I../Core/Inc -I"D:/Embedded System/workspace/stm32vldiscovery/ssd_countUD/Debug/Drivers/Modules" -I"D:/Embedded System/workspace/stm32vldiscovery/ssd_countUD/Drivers/Modules" -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-Modules

clean-Drivers-2f-Modules:
	-$(RM) ./Drivers/Modules/ssd_numbers.cyclo ./Drivers/Modules/ssd_numbers.d ./Drivers/Modules/ssd_numbers.o ./Drivers/Modules/ssd_numbers.su

.PHONY: clean-Drivers-2f-Modules

