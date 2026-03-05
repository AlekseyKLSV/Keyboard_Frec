/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f1xx_it.c
  * @brief   Interrupt Service Routines.
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
#include "stm32f1xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */
  //  static uint32_t current_time;
    static uint32_t last_time;
    uint32_t cnt=500;
	//uint32_t last_time;

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/

/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M3 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
   while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Prefetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles EXTI line0 interrupt.
  */
void EXTI0_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI0_IRQn 0 */

	button_debounced(cnt);
			if(!(GPIOA->IDR & GPIO_IDR_IDR0)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 50);

			}

			if((GPIOA->IDR & GPIO_IDR_IDR0)) {
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);

			}

  /* USER CODE END EXTI0_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
  /* USER CODE BEGIN EXTI0_IRQn 1 */

  /* USER CODE END EXTI0_IRQn 1 */
}

/**
  * @brief This function handles EXTI line1 interrupt.
  */
void EXTI1_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI1_IRQn 0 */
	button_debounced(cnt);
	if(!(GPIOA->IDR & GPIO_IDR_IDR1)) {
	    // PA5 = LOW (0V)
		__NOP();
	    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 100);

	}else{
		__NOP();
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	}


  /* USER CODE END EXTI1_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_1);
  /* USER CODE BEGIN EXTI1_IRQn 1 */

  /* USER CODE END EXTI1_IRQn 1 */
}

/**
  * @brief This function handles EXTI line2 interrupt.
  */
void EXTI2_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI2_IRQn 0 */
	button_debounced(cnt);
	if(!(GPIOA->IDR & GPIO_IDR_IDR2)) {
	    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 150);
	}else{
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	}


//	EXTI->PR = EXTI_PR_PR2;

  /* USER CODE END EXTI2_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_2);
  /* USER CODE BEGIN EXTI2_IRQn 1 */

  /* USER CODE END EXTI2_IRQn 1 */
}

/**
  * @brief This function handles EXTI line3 interrupt.
  */
void EXTI3_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI3_IRQn 0 */
	button_debounced(cnt);
	if(!(GPIOA->IDR & GPIO_IDR_IDR3)) {
		__NOP();
	    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 200);

	}else{
		__NOP();
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	}


//	EXTI->PR = EXTI_PR_PR3;

  /* USER CODE END EXTI3_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
  /* USER CODE BEGIN EXTI3_IRQn 1 */

  /* USER CODE END EXTI3_IRQn 1 */
}

/**
  * @brief This function handles EXTI line4 interrupt.
  */
void EXTI4_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI4_IRQn 0 */
	button_debounced(cnt);
	if(!(GPIOA->IDR & GPIO_IDR_IDR4)) {
		__NOP();
	    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 250);
	}else{
		__NOP();
        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	}

  /* USER CODE END EXTI4_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
  /* USER CODE BEGIN EXTI4_IRQn 1 */

  /* USER CODE END EXTI4_IRQn 1 */
}

/**
  * @brief This function handles EXTI line[9:5] interrupts.
  */
void EXTI9_5_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI9_5_IRQn 0 */
//	read_button_debounced(GPIO_IDR_IDR9);


//	uint32_t current_time = HAL_GetTick(); // или ваш системный таймер
//    // Проверяем, прошло ли достаточно времени
//	 while((HAL_GetTick() -current_time) > 100) {







if(EXTI->PR & EXTI_PR_PR5) {
    // Это PA5
button_debounced(cnt);

//	read_button_debounced(GPIO_IDR_IDR5);


			if(!(GPIOA->IDR & GPIO_IDR_IDR5)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 300);
			  //  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
			}

 last_time =HAL_GetTick();
// last_time = millis();

			if((GPIOA->IDR & GPIO_IDR_IDR5)) {
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);



		        //  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
			}
//	__NOP();
//    GPIOA->ODR ^= GPIO_ODR_ODR5;
//    EXTI->PR = EXTI_PR_PR5;
//	current_time = HAL_GetTick();

}

if(EXTI->PR & EXTI_PR_PR6) {
    // Это PA6

 button_debounced(cnt);

//	read_button_debounced(GPIO_IDR_IDR6);
	 if(!(GPIOA->IDR & GPIO_IDR_IDR6)) {
		    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 350);
		       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);
		}
	 if((GPIOA->IDR & GPIO_IDR_IDR6)){
	        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);
		}
	__NOP();
//    GPIOA->ODR ^= GPIO_ODR_ODR5;
//    EXTI->PR = EXTI_PR_PR5;
}


if(EXTI->PR & EXTI_PR_PR7) {
    // Это PA6
	button_debounced(cnt);
//	read_button_debounced(GPIO_IDR_IDR7);
	 if(!(GPIOA->IDR & GPIO_IDR_IDR7)) {
		    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 400);
		      HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_7);
		}
	 if((GPIOA->IDR & GPIO_IDR_IDR7)){
	        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_7);
		}
	//__NOP();
}

if(EXTI->PR & EXTI_PR_PR8) {
    // Это PA6
	button_debounced(cnt);
//	read_button_debounced(GPIO_IDR_IDR8);
	 if(!(GPIOA->IDR & GPIO_IDR_IDR8)) {
		    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 450);
		       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
		}
	 if((GPIOA->IDR & GPIO_IDR_IDR8)){
	        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
		}
	__NOP();
//    GPIOA->ODR ^= GPIO_ODR_ODR5;
//    EXTI->PR = EXTI_PR_PR5;
}



if(EXTI->PR & EXTI_PR_PR9) {
    // Это PA6
	button_debounced(cnt);
	//read_button_debounced(GPIO_IDR_IDR9);

	 if(!(GPIOA->IDR & GPIO_IDR_IDR9)) {
		//	read_button_debounced(GPIO_IDR_IDR9);
		    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 500);
		      HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
		}
	 if((GPIOA->IDR & GPIO_IDR_IDR9)){
		//	read_button_debounced(GPIO_IDR_IDR9);
	        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
	        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
		}
//	__NOP();
//    GPIOA->ODR ^= GPIO_ODR_ODR5;
//    EXTI->PR = EXTI_PR_PR5;
}

//	EXTI->PR = EXTI_PR_PR5;
//	EXTI->PR = EXTI_PR_PR6;
//	EXTI->PR = EXTI_PR_PR7;



  /* USER CODE END EXTI9_5_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_7);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
  /* USER CODE BEGIN EXTI9_5_IRQn 1 */

  /* USER CODE END EXTI9_5_IRQn 1 */
}

/**
  * @brief This function handles EXTI line[15:10] interrupts.
  */
void EXTI15_10_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI15_10_IRQn 0 */




	if(EXTI->PR & EXTI_PR_PR10) {
	    // Это PA10
		button_debounced(cnt);
	//	read_button_debounced(GPIO_IDR_IDR10);
		 if(!(GPIOA->IDR & GPIO_IDR_IDR10)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 550);
			       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_10);
			}
		 if((GPIOA->IDR & GPIO_IDR_IDR10)){
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
		        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_10);
			}
	//	__NOP();
	//    GPIOA->ODR ^= GPIO_ODR_ODR5;
	//    EXTI->PR = EXTI_PR_PR5;
	}

	if(EXTI->PR & EXTI_PR_PR11) {
	    // Это PA11
		button_debounced(cnt);
	//	read_button_debounced(GPIO_IDR_IDR11);
		 if(!(GPIOA->IDR & GPIO_IDR_IDR11)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 600);
			       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
			}
		 if((GPIOA->IDR & GPIO_IDR_IDR11)){
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
		        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
			}
	//	__NOP();
	//    GPIOA->ODR ^= GPIO_ODR_ODR5;
	//    EXTI->PR = EXTI_PR_PR5;
	}

	if(EXTI->PR & EXTI_PR_PR12) {
	    // Это PA11
		button_debounced(cnt);
	//	read_button_debounced(GPIO_IDR_IDR11);
		 if(!(GPIOA->IDR & GPIO_IDR_IDR12)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 650);
			       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_12);
			}
		 if((GPIOA->IDR & GPIO_IDR_IDR12)){
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
		        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_12);
			}
	//	__NOP();
	//    GPIOA->ODR ^= GPIO_ODR_ODR5;
	//    EXTI->PR = EXTI_PR_PR5;
	}

	if(EXTI->PR & EXTI_PR_PR15) {
	    // Это PA11
		button_debounced(cnt);
	//	read_button_debounced(GPIO_IDR_IDR11);
		 if(!(GPIOA->IDR & GPIO_IDR_IDR15)) {
			    __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 700);
			       HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_15);
			}
		 if((GPIOA->IDR & GPIO_IDR_IDR15)){
		        __HAL_TIM_SET_COMPARE(&htim4, TIM_CHANNEL_4, 0);
		        HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_15);
			}
		__NOP();
	//    GPIOA->ODR ^= GPIO_ODR_ODR5;
	//    EXTI->PR = EXTI_PR_PR5;
	}







  /* USER CODE END EXTI15_10_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_10);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_12);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_15);
  /* USER CODE BEGIN EXTI15_10_IRQn 1 */

  /* USER CODE END EXTI15_10_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
