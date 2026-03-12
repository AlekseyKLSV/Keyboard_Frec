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
extern tImage LOGO;
extern tImage beer_60x100_16;


extern LCD_DrawPropTypeDef DrawProp;

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

void ili9488_FillRect(uint16_t Xpos, uint16_t Ypos, uint16_t Xsize, uint16_t Ysize, uint16_t RGBCode);





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

//	 BSP_LCD_Clear(LCD_COLOR_GREEN);
	 BSP_LCD_SetBackColor(LCD_COLOR_GREEN);
	 ili9488_FillRect(0, 0, 480, 320,LCD_COLOR_GREEN);

 	 BSP_LCD_DrawBitmap(210, 120,&LOGO.data);

	 HAL_Delay(10000);

	 ili9488_FillRect(20, 20, 440, 280, LCD_COLOR_YELLOW);
	//  LCD_IO_WriteCmd8DataFill16(0x2C, LCD_COLOR_YELLOW, 440 * 280);
	 HAL_Delay(500);

//	 BSP_LCD_SetFont(&Font_BIG_MY);
	 BSP_LCD_SetFont_MY(&Font);
	 BSP_LCD_SetTextColor(LCD_COLOR_RED);
	 BSP_LCD_SetBackColor(LCD_COLOR_YELLOW);
//	 BSP_LCD_DisplayStringAt_MY(0, 50, (uint8_t*)"Analog,- Dew!!! 32.568", CENTER_MODE );
	// BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
	// BSP_LCD_DisplayStringAt_MY(0, 50, (uint8_t*)"Analog,- Dew!!! 32.568", CENTER_MODE );

	 //BSP_LCD_ClearStringLine(LCD_COLOR_YELLOW);


	 BSP_LCD_DsplStr_My(20, 20, (uint8_t*)"ДАBЛЕНИЕ PRESSURE 0.3");
	 BSP_LCD_DsplStr_My(20, 90, (uint8_t*)"ПРОЦЕСС - \"Разгрузка\"" );
	 BSP_LCD_DsplStr_My(20, 150, (uint8_t*)"123,78&  456.78%" );



//	 BSP_LCD_DrawRGB16Image(100, 50, 290, 100, &LOGO);

// LCD_DrawBitmap_WhiteTransparent(190, 50,&LOGO.data, 84, 87);



	// BSP_LCD_DisplayStringAt(20, 20, (uint8_t*)"ДАBЛЕНИЕ PRESSURE 0.3", CENTER_MODE );


 // mainApp();

	while (1) {



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










