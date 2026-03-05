################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font16.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.c \
../Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.c 

OBJS += \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.o \
./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.o 

C_DEPS += \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.d \
./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Components/TFT_eSPI-master/Fonts/%.o Core/Src/Components/TFT_eSPI-master/Fonts/%.su Core/Src/Components/TFT_eSPI-master/Fonts/%.cyclo: ../Core/Src/Components/TFT_eSPI-master/Fonts/%.c Core/Src/Components/TFT_eSPI-master/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Core/Src/Lcd -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I"../Core/Src/Lcd/Fonts" -I../Core/Src/Components/TFT_eSPI-master -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Fonts

clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Fonts:
	-$(RM) ./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font16.su ./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font32rle.su ./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font64rle.su ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72rle.su ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font72x53rle.su ./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.d ./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.o ./Core/Src/Components/TFT_eSPI-master/Fonts/Font7srle.su ./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.cyclo ./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.d ./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.o ./Core/Src/Components/TFT_eSPI-master/Fonts/glcdfont.su

.PHONY: clean-Core-2f-Src-2f-Components-2f-TFT_eSPI-2d-master-2f-Fonts

