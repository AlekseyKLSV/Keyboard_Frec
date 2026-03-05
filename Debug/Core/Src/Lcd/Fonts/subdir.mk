################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Lcd/Fonts/Font+BIG.c \
../Core/Src/Lcd/Fonts/Font_FUll.c \
../Core/Src/Lcd/Fonts/Font_PROB.c \
../Core/Src/Lcd/Fonts/MY_FONT.c \
../Core/Src/Lcd/Fonts/font12.c \
../Core/Src/Lcd/Fonts/font12_MY.c \
../Core/Src/Lcd/Fonts/font16.c \
../Core/Src/Lcd/Fonts/font20.c \
../Core/Src/Lcd/Fonts/font24.c \
../Core/Src/Lcd/Fonts/font8.c \
../Core/Src/Lcd/Fonts/font_MY.c \
../Core/Src/Lcd/Fonts/font_MY_BIG.c 

OBJS += \
./Core/Src/Lcd/Fonts/Font+BIG.o \
./Core/Src/Lcd/Fonts/Font_FUll.o \
./Core/Src/Lcd/Fonts/Font_PROB.o \
./Core/Src/Lcd/Fonts/MY_FONT.o \
./Core/Src/Lcd/Fonts/font12.o \
./Core/Src/Lcd/Fonts/font12_MY.o \
./Core/Src/Lcd/Fonts/font16.o \
./Core/Src/Lcd/Fonts/font20.o \
./Core/Src/Lcd/Fonts/font24.o \
./Core/Src/Lcd/Fonts/font8.o \
./Core/Src/Lcd/Fonts/font_MY.o \
./Core/Src/Lcd/Fonts/font_MY_BIG.o 

C_DEPS += \
./Core/Src/Lcd/Fonts/Font+BIG.d \
./Core/Src/Lcd/Fonts/Font_FUll.d \
./Core/Src/Lcd/Fonts/Font_PROB.d \
./Core/Src/Lcd/Fonts/MY_FONT.d \
./Core/Src/Lcd/Fonts/font12.d \
./Core/Src/Lcd/Fonts/font12_MY.d \
./Core/Src/Lcd/Fonts/font16.d \
./Core/Src/Lcd/Fonts/font20.d \
./Core/Src/Lcd/Fonts/font24.d \
./Core/Src/Lcd/Fonts/font8.d \
./Core/Src/Lcd/Fonts/font_MY.d \
./Core/Src/Lcd/Fonts/font_MY_BIG.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/Lcd/Fonts/%.o Core/Src/Lcd/Fonts/%.su Core/Src/Lcd/Fonts/%.cyclo: ../Core/Src/Lcd/Fonts/%.c Core/Src/Lcd/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32F103xB -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Core/Src/Components/TFT_eSPI-master -I"../Core/Src/Lcd/Fonts" -I"../Core/Src/Lcd" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-Lcd-2f-Fonts

clean-Core-2f-Src-2f-Lcd-2f-Fonts:
	-$(RM) ./Core/Src/Lcd/Fonts/Font+BIG.cyclo ./Core/Src/Lcd/Fonts/Font+BIG.d ./Core/Src/Lcd/Fonts/Font+BIG.o ./Core/Src/Lcd/Fonts/Font+BIG.su ./Core/Src/Lcd/Fonts/Font_FUll.cyclo ./Core/Src/Lcd/Fonts/Font_FUll.d ./Core/Src/Lcd/Fonts/Font_FUll.o ./Core/Src/Lcd/Fonts/Font_FUll.su ./Core/Src/Lcd/Fonts/Font_PROB.cyclo ./Core/Src/Lcd/Fonts/Font_PROB.d ./Core/Src/Lcd/Fonts/Font_PROB.o ./Core/Src/Lcd/Fonts/Font_PROB.su ./Core/Src/Lcd/Fonts/MY_FONT.cyclo ./Core/Src/Lcd/Fonts/MY_FONT.d ./Core/Src/Lcd/Fonts/MY_FONT.o ./Core/Src/Lcd/Fonts/MY_FONT.su ./Core/Src/Lcd/Fonts/font12.cyclo ./Core/Src/Lcd/Fonts/font12.d ./Core/Src/Lcd/Fonts/font12.o ./Core/Src/Lcd/Fonts/font12.su ./Core/Src/Lcd/Fonts/font12_MY.cyclo ./Core/Src/Lcd/Fonts/font12_MY.d ./Core/Src/Lcd/Fonts/font12_MY.o ./Core/Src/Lcd/Fonts/font12_MY.su ./Core/Src/Lcd/Fonts/font16.cyclo ./Core/Src/Lcd/Fonts/font16.d ./Core/Src/Lcd/Fonts/font16.o ./Core/Src/Lcd/Fonts/font16.su ./Core/Src/Lcd/Fonts/font20.cyclo ./Core/Src/Lcd/Fonts/font20.d ./Core/Src/Lcd/Fonts/font20.o ./Core/Src/Lcd/Fonts/font20.su ./Core/Src/Lcd/Fonts/font24.cyclo ./Core/Src/Lcd/Fonts/font24.d ./Core/Src/Lcd/Fonts/font24.o ./Core/Src/Lcd/Fonts/font24.su ./Core/Src/Lcd/Fonts/font8.cyclo ./Core/Src/Lcd/Fonts/font8.d ./Core/Src/Lcd/Fonts/font8.o ./Core/Src/Lcd/Fonts/font8.su ./Core/Src/Lcd/Fonts/font_MY.cyclo ./Core/Src/Lcd/Fonts/font_MY.d ./Core/Src/Lcd/Fonts/font_MY.o ./Core/Src/Lcd/Fonts/font_MY.su ./Core/Src/Lcd/Fonts/font_MY_BIG.cyclo ./Core/Src/Lcd/Fonts/font_MY_BIG.d ./Core/Src/Lcd/Fonts/font_MY_BIG.o ./Core/Src/Lcd/Fonts/font_MY_BIG.su

.PHONY: clean-Core-2f-Src-2f-Lcd-2f-Fonts

