################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/App/appLcdSpeedTest.c \
../Core/Src/App/beer_60x100_16.c 

OBJS += \
./Core/Src/App/appLcdSpeedTest.o \
./Core/Src/App/beer_60x100_16.o 

C_DEPS += \
./Core/Src/App/appLcdSpeedTest.d \
./Core/Src/App/beer_60x100_16.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/App/%.o Core/Src/App/%.su Core/Src/App/%.cyclo: ../Core/Src/App/%.c Core/Src/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I"D:/ALX/PROGRAMMS Cube IDE/Keyboard_Frec/Core/Src/Lcd" -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/App/beer_60x100_16.o: ../Core/Src/App/beer_60x100_16.c Core/Src/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I..Core/Src/Lcd -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-App

clean-Core-2f-Src-2f-App:
	-$(RM) ./Core/Src/App/appLcdSpeedTest.cyclo ./Core/Src/App/appLcdSpeedTest.d ./Core/Src/App/appLcdSpeedTest.o ./Core/Src/App/appLcdSpeedTest.su ./Core/Src/App/beer_60x100_16.cyclo ./Core/Src/App/beer_60x100_16.d ./Core/Src/App/beer_60x100_16.o ./Core/Src/App/beer_60x100_16.su

.PHONY: clean-Core-2f-Src-2f-App

