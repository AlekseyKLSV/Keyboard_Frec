################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Lcd/ili9488.c \
../Core/Src/Lcd/lcd_io_spi.c \
../Core/Src/Lcd/stm32_adafruit_lcd.c 

OBJS += \
./Core/Src/Lcd/ili9488.o \
./Core/Src/Lcd/lcd_io_spi.o \
./Core/Src/Lcd/stm32_adafruit_lcd.o 

C_DEPS += \
./Core/Src/Lcd/ili9488.d \
./Core/Src/Lcd/lcd_io_spi.d \
./Core/Src/Lcd/stm32_adafruit_lcd.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Lcd/%.o Core/Src/Lcd/%.su Core/Src/Lcd/%.cyclo: ../Core/Src/Lcd/%.c Core/Src/Lcd/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Core/Src/Components/TFT_eSPI-master -I"../Core/Src/Lcd/Fonts" -I"../Core/Src/Lcd" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Lcd

clean-Core-2f-Src-2f-Lcd:
	-$(RM) ./Core/Src/Lcd/ili9488.cyclo ./Core/Src/Lcd/ili9488.d ./Core/Src/Lcd/ili9488.o ./Core/Src/Lcd/ili9488.su ./Core/Src/Lcd/lcd_io_spi.cyclo ./Core/Src/Lcd/lcd_io_spi.d ./Core/Src/Lcd/lcd_io_spi.o ./Core/Src/Lcd/lcd_io_spi.su ./Core/Src/Lcd/stm32_adafruit_lcd.cyclo ./Core/Src/Lcd/stm32_adafruit_lcd.d ./Core/Src/Lcd/stm32_adafruit_lcd.o ./Core/Src/Lcd/stm32_adafruit_lcd.su

.PHONY: clean-Core-2f-Src-2f-Lcd

