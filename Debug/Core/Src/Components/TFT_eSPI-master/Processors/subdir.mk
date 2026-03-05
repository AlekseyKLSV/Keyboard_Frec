################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.c \
../Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.c 

OBJS += \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.o \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.o 

C_DEPS += \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.d \
./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Components/TFT_eSPI-master/Processors/%.o Core/Src/Components/TFT_eSPI-master/Processors/%.su Core/Src/Components/TFT_eSPI-master/Processors/%.cyclo: ../Core/Src/Components/TFT_eSPI-master/Processors/%.c Core/Src/Components/TFT_eSPI-master/Processors/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Core/Src/Lcd -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I"../Core/Src/Lcd/Fonts" -I../Core/Src/Components/TFT_eSPI-master -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Processors

clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Processors:
	-$(RM) ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_C3.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP32_S3.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_ESP8266.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_Generic.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_RP2040.su ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.cyclo ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.d ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.o ./Core/Src/Components/TFT_eSPI-master/Processors/TFT_eSPI_STM32.su

.PHONY: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Processors

