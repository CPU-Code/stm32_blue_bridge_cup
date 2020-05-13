/*
 * @Author: cpu_code
 * @Date: 2020-05-13 08:48:22
 * @LastEditTime: 2020-05-13 08:57:04
 * @FilePath: \stm32_blue_bridge_cup\code\buzzer\main.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "stm32f10x.h"
#include "lcd.h"
#include "buzzer.h"

u32 TimingDelay = 0;

void Delay_Ms(u32 nTime);

int main(void)
{
    SysTick_Config(SystemCoreClock/1000);
    Delay_Ms(200);

    STM3210B_LCD_Init();
    Buzzer_Init();

    BEEP_ON();		//GPIO_ResetBits(GPIOB,GPIO_Pin_4);
    Delay_Ms(500);
    BEEP_OFF();

    while(1)
	{
			
	}
}

void Delay_Ms(u32 nTime)
{
	TimingDelay = nTime;
	while(TimingDelay != 0);
}