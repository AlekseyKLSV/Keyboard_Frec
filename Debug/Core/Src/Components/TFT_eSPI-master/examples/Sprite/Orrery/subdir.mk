################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.c 

OBJS += \
./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.o 

C_DEPS += \
./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/%.o Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/%.su Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/%.cyclo: ../Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/%.c Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Core/Src/Lcd -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I"../Core/Src/Lcd/Fonts" -I../Core/Src/Components/TFT_eSPI-master -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-examples-2f-Sprite-2f-Orrery

clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-examples-2f-Sprite-2f-Orrery:
	-$(RM) ./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.cyclo ./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.d ./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.o ./Core/Src/Components/TFT_eSPI-master/examples/Sprite/Orrery/astronomy.su

.PHONY: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-examples-2f-Sprite-2f-Orrery

