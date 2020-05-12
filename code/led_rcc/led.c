/*
 * @Author: cpu_code
 * @Date: 2020-05-12 18:38:43
 * @LastEditTime: 2020-05-12 20:38:09
 * @FilePath: \stm32_blue_bridge_cup\code\led_rcc\led.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "stm32f10x.h"
#include "led.h"

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd( LE_GPIO_CLK | LED1_GPIO_CLK , ENABLE);

    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Pin = LED1_GPIO_PIN | LED2_GPIO_PIN	| \
                                  LED3_GPIO_PIN	| LED4_GPIO_PIN	| \
                                  LED5_GPIO_PIN | LED6_GPIO_PIN | \
								  LED7_GPIO_PIN | LED8_GPIO_PIN;
    GPIO_Init(LED1_GPIO_PORT , &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = LE_GPIO_PIN;
    GPIO_Init(LE_GPIO_PORT , &GPIO_InitStructure);

    GPIO_SetBits( LE_GPIO_PORT , LE_GPIO_PIN );
    GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN | LED2_GPIO_PIN | \
                                 LED3_GPIO_PIN | LED4_GPIO_PIN | \
                                 LED5_GPIO_PIN | LED6_GPIO_PIN | \
								 LED7_GPIO_PIN | LED8_GPIO_PIN );
    //	GPIO_ResetBits( LE_GPIO_PORT , LE_GPIO_PIN );
}