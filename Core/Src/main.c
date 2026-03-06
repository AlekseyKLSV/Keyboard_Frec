/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include <stdio.h>
#include "stm32_adafruit_lcd.h"
#include "lcd.h"
#include "ili9488.h"
#include "fonts.h"

#define DEBOUNCE_TIME_MS 50


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

// Структура для хранения состояния кнопок
typedef struct {
    uint8_t current_state;
    uint8_t previous_state;
    uint32_t last_debounce_time;
    uint8_t stable_state;
} ButtonState;

ButtonState buttons[8]; // Для PA0-PA7
volatile uint8_t exti_triggered = 0;
volatile uint8_t exti_port_value = 0;


//extern LCD_DrawPropTypeDef_MY DrawProp;


/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */




/*
typedef struct {
    const uint8_t *data;
    uint16_t width;
    uint16_t height;
    uint8_t dataSize;
    } tImage;
typedef struct {
    long int code;
    const tImage *image;
    } tChar;
typedef struct {
    int length;
    const tChar *chars;
    } tFont;
typedef struct  {
  uint32_t TextColor;
  uint32_t BackColor;
  tFont    *pfont;
}FULL_FONT;
*/
extern tFont Font;


extern LCD_DrawPropTypeDef DrawProp;

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */







/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

void BSP_LCD_SetTextColor_MY(uint16_t Color);





void mainApp(void);






/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

	//FullFont->pfont->chars->image->height;
	Font.chars->image->height;

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM4_Init();
  /* USER CODE BEGIN 2 */

  HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_4);

  ili9488_Init();
  ili9488_Init();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */



 // LCD_MY DRW_WRP;

//LCD_DrawPropTypeDef DrwPr;


//  void BSP_LCD_SetFont_MY(DRW_WRP *pFonts)
//  {
//	  drw_wpr.pfont = pFonts;
//  }


	ili9488_FillRect(20, 20, 440, 280, LCD_COLOR_YELLOW);
	 HAL_Delay(500);
//	 BSP_LCD_Clear(LCD_COLOR_YELLOW);

//	 BSP_LCD_SetFont(&Font_BIG_MY);
	 BSP_LCD_SetFont_MY(&Font);
	 BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
	 BSP_LCD_SetBackColor(LCD_COLOR_RED);
	// BSP_LCD_DsplStr_My(20, 50, (uint8_t*)"Analog,- Dew!!! 32.568", CENTER_MODE );
	 BSP_LCD_DsplStr_My(20, 20, (uint8_t*)"ДАBЛЕНИЕ PRESSURE 0.3", CENTER_MODE );
	 BSP_LCD_DsplStr_My(20, 90, (uint8_t*)"ПРОЦЕСС - \"Разгрузка\"", CENTER_MODE );
	 BSP_LCD_DsplStr_My(20, 150, (uint8_t*)"123,78&  456.78%", CENTER_MODE );


	//   const  tChar *found;


    //    findChar(&Font, 'A');
	    uint16_t  WIDTH = Font.chars->image->width;
	 //   uint16_t  HEIGHT = found->image->height;
//	    uint16_t  CODE = found->code;
//	    uint8_t *charData = found->image->data;
//
//	    BSP_LCD_SetTextColor_MY(LCD_COLOR_RED);
//	    DrawChar_MY(10, 10,&Font, &drw_wpr,'A');
//
//     //   DrawChar_MY(10, 10, charData);
//апеоакено
//	    __NOP();
//
//	 //   BSP_LCD_DrawBitmap(Xpos, Ypos, bitmap);



 // mainApp();

	while (1) {

	//	ili9488_SetDisplayWindow(20, 20, 480-20, 320-20);

//		__NOP();
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

//	  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
//	  HAL_Delay(500);
//	  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
//	  HAL_Delay(500);

	//  TIM4->CCR4 = 30;	  HAL_Delay(500);	  TIM4->CCR4 = 70;  HAL_Delay(500);

/*
	  for (int duty = 0; duty <= 99; duty += 10)
	     {
	       __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, duty);  // TIM1->CCR1 = duty;
	       HAL_Delay(500);  // Wait 500ms before changing duty cycle

	     }
	     	     */


  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
// Инициализация прерываний по внешним линиям
void EXTI_InitConfig(void) {
    EXTI_InitTypeDef EXTI_InitStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

    // Включаем тактирование AFIO
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);

    // Настройка PA0-PA7 для прерываний по фронту (нажатие кнопки - низкий уровень)
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource0);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource1);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource2);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource3);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource4);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource5);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource6);
    GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource7);

    // Настройка EXTI линий
    EXTI_InitStructure.EXTI_Line = EXTI_Line0 | EXTI_Line1 | EXTI_Line2 | EXTI_Line3 |
                                   EXTI_Line4 | EXTI_Line5 | EXTI_Line6 | EXTI_Line7;
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
    EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; // Прерывание по спаду
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;
    EXTI_Init(&EXTI_InitStructure);

    // Настройка NVIC для EXTI0
    NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x0F;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x0F;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    // Настройка NVIC для EXTI1
    NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;
    NVIC_Init(&NVIC_InitStructure);

    // Настройка NVIC для EXTI2
    NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;
    NVIC_Init(&NVIC_InitStructure);

    // Настройка NVIC для EXTI3
    NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;
    NVIC_Init(&NVIC_InitStructure);

    // Настройка NVIC для EXTI4
    NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;
    NVIC_Init(&NVIC_InitStructure);

    // Настройка NVIC для EXTI9_5 (PA5-PA7)
    NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;
    NVIC_Init(&NVIC_InitStructure);
}
*/


void TIM1_PWM_Init(void) {
    // Включаем тактирование TIM1
    RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;

    // Настройка частоты: 1 кГц при системной частоте 72 МГц
    // Prescaler = 0 (деление на 1)
    TIM1->PSC = 0;

    // ARR определяет период
    // Для 72 МГц и частоты 1 кГц: ARR = 72000 - 1
    TIM1->ARR = 72000 - 1;

    // Начальная скважность 50% (CCR = ARR/2)
    TIM1->CCR2 = 36000;

    // Настройка канала 2
    // OC2M = 110 (PWM mode 1)
    // OC2PE = 1 (preload enable)
    TIM1->CCMR1 &= ~TIM_CCMR1_OC2M;
    TIM1->CCMR1 |= (6 << 12); // PWM mode 1
    TIM1->CCMR1 |= TIM_CCMR1_OC2PE;

    // Включаем выход канала 2 (активный высокий уровень)
    TIM1->CCER |= TIM_CCER_CC2E;
    TIM1->CCER &= ~TIM_CCER_CC2P; // активный высокий уровень

    // Включаем предзагрузку ARR
    TIM1->CR1 |= TIM_CR1_ARPE;

    // Включаем основной выход
    TIM1->BDTR |= TIM_BDTR_MOE;

    // Запускаем таймер
    TIM1->CR1 |= TIM_CR1_CEN;
}


void Set_PWM_DutyCycle(uint16_t duty_percent) {
    // Проверка диапазона
    if (duty_percent > 100) duty_percent = 100;

    // Для TIM4:
    // duty = (ARR * duty_percent) / 100
 //   uint32_t duty_value = (TIM4->ARR * duty_percent) / 100;
  //  TIM4->CCR1 = duty_value;

    // Или для TIM1:
     TIM1->CCR2 = (TIM1->ARR * duty_percent) / 100;
}


void GPIO_Init_PB12(void) {
    // Включаем тактирование порта B
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;

    // PB12: альтернативная функция push-pull, максимальная скорость
    GPIOB->CRH &= ~(GPIO_CRH_MODE12 | GPIO_CRH_CNF12);
    GPIOB->CRH |= GPIO_CRH_MODE12_1 | GPIO_CRH_MODE12_0; // 50 MHz
    GPIOB->CRH |= GPIO_CRH_CNF12_1; // Alternate function output push-pull
}

void button_debounced(uint16_t i){
    while( i > 0)
      {i--;}
}


uint8_t read_button_debounced(uint16_t pin) {
    static uint32_t last_time = 0;
    static uint8_t last_state = 1;
    uint8_t current_state;

     current_state = (GPIOA->IDR & pin)? 1 : 0;

 //   current_state = (GPIOA->IDR & GPIO_IDR_IDR0) ? 1 : 0;

    // Если состояние изменилось
    if(current_state != last_state) {
        uint32_t current_time = HAL_GetTick(); // или ваш системный таймер

        // Проверяем, прошло ли достаточно времени
        if((current_time - last_time) > DEBOUNCE_DELAY) {
            last_state = current_state;
            last_time = current_time;
            return current_state;
        }
    }

    return last_state;
}




/*

void BSP_LCD_SetTextColor_MY(uint16_t Color)
{
    drw_wpr.TextColor=Color;
}












void DrawChar_MY(uint16_t Xpos, uint16_t Ypos, const tFont *font, DRW_WRP *DrwPrp, const uint8_t *pChar){
	  uint32_t counterh = 0, counterw = 0, index = 0;
	  uint16_t height = 0,  width = 0;
	  uint8_t offset = 0;
	  uint8_t *pchar = NULL;
	  uint64_t line = 0;
	  uint8_t OFFSET_BITMAP = 54;

	  height = font->chars->image->height;
      width = font->chars->image->width;

	  uint16_t size = (height*width*2)+OFFSET_BITMAP;
	  uint8_t bitmap[size];




        *(uint16_t *) (bitmap + 2) = (uint16_t)(height*width*2+OFFSET_BITMAP);
        *(uint16_t *) (bitmap + 4) = (uint16_t)((height*width*2+OFFSET_BITMAP)>>16);
        *(uint16_t *) (bitmap + 10) = OFFSET_BITMAP;
        *(uint16_t *) (bitmap + 18) = (uint16_t)(width);
        *(uint16_t *) (bitmap + 20) = (uint16_t)((width)>>16);
        *(uint16_t *) (bitmap + 22) = (uint16_t)(height);
        *(uint16_t *) (bitmap + 24) = (uint16_t)((height)>>16);



          offset =  8 *((width + 7)/8) - width ;

          for(counterh = 0; counterh < height; counterh++)
          {
            pchar = ((uint8_t *)pChar + (width + 7)/8 * counterh);

            if(((width + 7)/8) == 6)
                {
                  line =  (pchar[0]<< 40) | (pchar[1]<< 32) | pchar[2]<< 24| pchar[3]<<16| pchar[4]<<8|pchar[5];
                }

            if(((width + 7)/8) == 5)
                {
                  line =  (pchar[0]<< 32) | (pchar[1]<< 24) | pchar[2]<< 16| pchar[3]<<8| pchar[4];
                }

            if(((width + 7)/8) == 4)
            {
              line =  (pchar[0]<< 24) | (pchar[1]<< 16) | pchar[2]<< 8| pchar[3];
            }


            if(((width + 7)/8) == 3)
            {
              line =  (pchar[0]<< 16) | (pchar[1]<< 8) | pchar[2];
            }

            if(((width + 7)/8) == 2)
            {
              line =  (pchar[0]<< 8) | pchar[1];
            }

            if(((width + 7)/8) == 1)
            {
              line =  pchar[0];
            }

            for (counterw = 0; counterw < width; counterw++)
               {

                 index = (((height-counterh-1)*width)+(counterw))*2+OFFSET_BITMAP;
                 if(line & (1 << (width- counterw + offset- 1)))
                 {
                   bitmap[index] = (uint8_t)DrwPrp->TextColor;
                   bitmap[index+1] = (uint8_t)(DrwPrp->TextColor >> 8);
                 }
                 else
                 {
                   bitmap[index] = (uint8_t)DrwPrp->BackColor;
                   bitmap[index+1] = (uint8_t)(DrwPrp->BackColor >> 8);
                 }
               }


          }

          BSP_LCD_DrawBitmap(Xpos, Ypos, bitmap);
}


*/

/*
 void BSP_LCD_SetFont(sFONT *pFonts)
{
  DrawProp.pFont = pFonts;
}

 */




void BSP_LCD_SetFont_MY(tFont *pFonts)
{
	DrawProp.pFont = pFonts;
}



//static void DrawChar_MY(uint16_t Xpos, uint16_t Ypos, const uint8_t *pChar)
//{
//  uint32_t counterh = 0, counterw = 0, index = 0;
//  uint16_t height = 0, width = 0;
//  uint8_t offset = 0;
//  uint8_t *pchar = NULL;
//  uint64_t line = 0;
//
//  height = font->;
//  width  = DrawProp.pFont->Width;
//
//  /* Fill bitmap header*/
//  *(uint16_t *) (bitmap + 2) = (uint16_t)(height*width*2+OFFSET_BITMAP);
//  *(uint16_t *) (bitmap + 4) = (uint16_t)((height*width*2+OFFSET_BITMAP)>>16);
//  *(uint16_t *) (bitmap + 10) = OFFSET_BITMAP;
//  *(uint16_t *) (bitmap + 18) = (uint16_t)(width);
//  *(uint16_t *) (bitmap + 20) = (uint16_t)((width)>>16);
//  *(uint16_t *) (bitmap + 22) = (uint16_t)(height);
//  *(uint16_t *) (bitmap + 24) = (uint16_t)((height)>>16);
//
//
//  offset =  8 *((width + 7)/8) - width ;
//
//  for(counterh = 0; counterh < height; counterh++)
//  {
//    pchar = ((uint8_t *)pChar + (width + 7)/8 * counterh);
//
//    if(((width + 7)/8) == 6)
//        {
//          line =  (pchar[0]<< 40) | (pchar[1]<< 32) | pchar[2]<< 24| pchar[3]<<16| pchar[4]<<8|pchar[5];
//        }
//
//    if(((width + 7)/8) == 5)
//        {
//          line =  (pchar[0]<< 32) | (pchar[1]<< 24) | pchar[2]<< 16| pchar[3]<<8| pchar[4];
//        }
//
//    if(((width + 7)/8) == 4)
//    {
//      line =  (pchar[0]<< 24) | (pchar[1]<< 16) | pchar[2]<< 8| pchar[3];
//    }
//
//
//    if(((width + 7)/8) == 3)
//    {
//      line =  (pchar[0]<< 16) | (pchar[1]<< 8) | pchar[2];
//    }
//
//    if(((width + 7)/8) == 2)
//    {
//      line =  (pchar[0]<< 8) | pchar[1];
//    }
//
//    if(((width + 7)/8) == 1)
//    {
//      line =  pchar[0];
//    }
//
//    for (counterw = 0; counterw < width; counterw++)
//    {
//      /* Image in the bitmap is written from the bottom to the top */
//      /* Need to invert image in the bitmap */
//      index = (((height-counterh-1)*width)+(counterw))*2+OFFSET_BITMAP;
//      if(line & (1 << (width- counterw + offset- 1)))
//      {
//        bitmap[index] = (uint8_t)DrawProp.TextColor;
//        bitmap[index+1] = (uint8_t)(DrawProp.TextColor >> 8);
//      }
//      else
//      {
//        bitmap[index] = (uint8_t)DrawProp.BackColor;
//        bitmap[index+1] = (uint8_t)(DrawProp.BackColor >> 8);
//      }
//    }
//  }
//  BSP_LCD_DrawBitmap(Xpos, Ypos, bitmap);
//}

//___________________________________________________________________________________
//
//void BSP_LCD_DrawBitmap(uint16_t Xpos, uint16_t Ypos, uint8_t *pBmp)
//{
//  uint32_t height = 0;
//  uint32_t width  = 0;
//
//  /* Read bitmap width */
//  width = pBmp[18] + (pBmp[19] << 8) + (pBmp[20] << 16)  + (pBmp[21] << 24);
//
//  /* Read bitmap height */
//  height = pBmp[22] + (pBmp[23] << 8) + (pBmp[24] << 16)  + (pBmp[25] << 24);
//
//  SetDisplayWindow(Xpos, Ypos, width, height);
//
//  if(lcd_drv->DrawBitmap != NULL)
//  {
//    lcd_drv->DrawBitmap(Xpos, Ypos, pBmp);
//  }
//  SetDisplayWindow(0, 0, BSP_LCD_GetXSize(), BSP_LCD_GetYSize());
//}




















/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */










