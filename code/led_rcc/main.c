/*
 * @Author: cpu_code
 * @Date: 2020-05-12 18:35:22
 * @LastEditTime: 2020-05-12 20:42:53
 * @FilePath: \stm32_blue_bridge_cup\code\led_rcc\main.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "stm32f10x.h"
#include  "led.h"

#define SOFT_DELAY  Delay(0x0FFFFF)

void Delay(__IO uint32_t nCount);	 //简单的延时函数

int main(void)
{
    LED_Init();
    
    SOFT_DELAY;
    LED1_OFF;

    while(1)
    {
        SOFT_DELAY;
        LED1_OFF;

        SOFT_DELAY;
		LED2_OFF;

        SOFT_DELAY;
		LED1_NO;

        SOFT_DELAY;
		LED2_OFF;
    }
}
void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}
