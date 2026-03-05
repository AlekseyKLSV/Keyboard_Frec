################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/App/LcdSpeedTest/appLcdSpeedTest.c \
../Core/Src/App/LcdSpeedTest/beer_60x100_16.c 

OBJS += \
./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.o \
./Core/Src/App/LcdSpeedTest/beer_60x100_16.o 

C_DEPS += \
./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.d \
./Core/Src/App/LcdSpeedTest/beer_60x100_16.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/App/LcdSpeedTest/%.o Core/Src/App/LcdSpeedTest/%.su Core/Src/App/LcdSpeedTest/%.cyclo: ../Core/Src/App/LcdSpeedTest/%.c Core/Src/App/LcdSpeedTest/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Core/Src/Components/TFT_eSPI-master -I"../Core/Src/Lcd/Fonts" -I"../Core/Src/Lcd" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-App-2f-LcdSpeedTest

clean-Core-2f-Src-2f-App-2f-LcdSpeedTest:
	-$(RM) ./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.cyclo ./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.d ./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.o ./Core/Src/App/LcdSpeedTest/appLcdSpeedTest.su ./Core/Src/App/LcdSpeedTest/beer_60x100_16.cyclo ./Core/Src/App/LcdSpeedTest/beer_60x100_16.d ./Core/Src/App/LcdSpeedTest/beer_60x100_16.o ./Core/Src/App/LcdSpeedTest/beer_60x100_16.su

.PHONY: clean-Core-2f-Src-2f-App-2f-LcdSpeedTest

