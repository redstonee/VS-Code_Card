/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_ll_rcc.h"
#include "stm32g0xx_ll_bus.h"
#include "stm32g0xx_ll_system.h"
#include "stm32g0xx_ll_exti.h"
#include "stm32g0xx_ll_cortex.h"
#include "stm32g0xx_ll_utils.h"
#include "stm32g0xx_ll_pwr.h"
#include "stm32g0xx_ll_dma.h"
#include "stm32g0xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void setup(void);
void loop(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED18_Pin LL_GPIO_PIN_11
#define LED18_GPIO_Port GPIOB
#define LED17_Pin LL_GPIO_PIN_12
#define LED17_GPIO_Port GPIOB
#define LED8_Pin LL_GPIO_PIN_13
#define LED8_GPIO_Port GPIOB
#define LED7_Pin LL_GPIO_PIN_14
#define LED7_GPIO_Port GPIOB
#define LED6_Pin LL_GPIO_PIN_15
#define LED6_GPIO_Port GPIOB
#define LED5_Pin LL_GPIO_PIN_8
#define LED5_GPIO_Port GPIOA
#define LED4_Pin LL_GPIO_PIN_9
#define LED4_GPIO_Port GPIOA
#define LED3_Pin LL_GPIO_PIN_10
#define LED3_GPIO_Port GPIOA
#define LED2_Pin LL_GPIO_PIN_11
#define LED2_GPIO_Port GPIOA
#define LED1_Pin LL_GPIO_PIN_12
#define LED1_GPIO_Port GPIOA
#define LED13_Pin LL_GPIO_PIN_0
#define LED13_GPIO_Port GPIOD
#define LED14_Pin LL_GPIO_PIN_1
#define LED14_GPIO_Port GPIOD
#define LED15_Pin LL_GPIO_PIN_2
#define LED15_GPIO_Port GPIOD
#define LED16_Pin LL_GPIO_PIN_3
#define LED16_GPIO_Port GPIOD
#define LED12_Pin LL_GPIO_PIN_6
#define LED12_GPIO_Port GPIOB
#define LED11_Pin LL_GPIO_PIN_7
#define LED11_GPIO_Port GPIOB
#define LED10_Pin LL_GPIO_PIN_8
#define LED10_GPIO_Port GPIOB
#define LED9_Pin LL_GPIO_PIN_9
#define LED9_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
