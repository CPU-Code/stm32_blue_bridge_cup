/*
 * @Author: cpu_code
 * @Date: 2020-05-12 18:38:49
 * @LastEditTime: 2020-05-12 20:27:11
 * @FilePath: \stm32_blue_bridge_cup\code\led_rcc\led.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#ifndef __LED_H
#define __LED_H

#include "stm32f10x.h"

#define LED1_GPIO_PORT	    GPIOC
#define LED1_GPIO_CLK		RCC_APB2Periph_GPIOC
#define LED1_GPIO_PIN		GPIO_Pin_8

#define LED2_GPIO_PORT	    GPIOC
#define LED2_GPIO_CLK		RCC_APB2Periph_GPIOC
#define LED2_GPIO_PIN		GPIO_Pin_9

#define LED3_GPIO_PORT   	GPIOC
#define LED3_GPIO_CLK   	RCC_APB2Periph_GPIOC
#define LED3_GPIO_PIN   	GPIO_Pin_10

#define LED4_GPIO_PORT  	GPIOC
#define LED4_GPIO_CLK	    RCC_APB2Periph_GPIOC
#define LED4_GPIO_PIN		GPIO_Pin_11

#define LED5_GPIO_PORT  	GPIOC
#define LED5_GPIO_CLK   	RCC_APB2Periph_GPIOC
#define LED5_GPIO_PIN 	    GPIO_Pin_12

#define LED6_GPIO_PORT  	GPIOC
#define LED6_GPIO_CLK   	RCC_APB2Periph_GPIOC
#define LED6_GPIO_PIN 	    GPIO_Pin_13

#define LED7_GPIO_PORT 	    GPIOC
#define LED7_GPIO_CLK   	RCC_APB2Periph_GPIOC
#define LED7_GPIO_PIN		GPIO_Pin_14

#define LED8_GPIO_PORT  	GPIOC
#define LED8_GPIO_CLK       RCC_APB2Periph_GPIOC
#define LED8_GPIO_PIN		GPIO_Pin_15

#define LE_GPIO_PORT    	GPIOD
#define LE_GPIO_CLK		    RCC_APB2Periph_GPIOD
#define LE_GPIO_PIN	    	GPIO_Pin_2

#define LED1_NO				GPIO_SetBits(  LED1_GPIO_PORT, LED1_GPIO_PIN);
#define LED1_OFF			GPIO_ResetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);

#define LED2_NO				GPIO_SetBits(  LED2_GPIO_PORT, LED2_GPIO_PIN);
#define LED2_OFF			GPIO_ResetBits(LED2_GPIO_PORT, LED2_GPIO_PIN);

#define LED3_NO				GPIO_SetBits(  LED3_GPIO_PORT, LED3_GPIO_PIN);
#define LED3_OFF			GPIO_ResetBits(LED3_GPIO_PORT, LED3_GPIO_PIN);

#define LED4_NO				GPIO_SetBits(  LED4_GPIO_PORT, LED4_GPIO_PIN);
#define LED4_OFF			GPIO_ResetBits(LED4_GPIO_PORT, LED4_GPIO_PIN);

#define LED5_NO				GPIO_SetBits(  LED5_GPIO_PORT, LED5_GPIO_PIN);
#define LED5_OFF			GPIO_ResetBits(LED5_GPIO_PORT, LED5_GPIO_PIN);

#define LED6_NO				GPIO_SetBits(  LED6_GPIO_PORT, LED6_GPIO_PIN);
#define LED6_OFF			GPIO_ResetBits(LED6_GPIO_PORT, LED6_GPIO_PIN);

#define LED7_NO				GPIO_SetBits(  LED7_GPIO_PORT, LED7_GPIO_PIN);
#define LED7_OFF			GPIO_ResetBits(LED7_GPIO_PORT, LED7_GPIO_PIN);

#define LED8_NO				GPIO_SetBits(  LED8_GPIO_PORT, LED8_GPIO_PIN);
#define LED8_OFF			GPIO_ResetBits(LED8_GPIO_PORT, LED8_GPIO_PIN);

#define ALL_LED_NO	    	GPIO_SetBits(  LE_GPIO_PORT , LE_GPIO_PIN );
#define ALL_LED_EN	    	GPIO_ResetBits(LE_GPIO_PORT , LE_GPIO_PIN );

void LED_Init(void);

#endif	//LED_H