/*
 * @Author: cpu_code
 * @Date: 2020-05-12 18:36:05
 * @LastEditTime: 2020-05-13 14:36:22
 * @FilePath: \stm32_blue_bridge_cup\code\timer_system\main.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "stm32f10x.h"
#include "lcd.h"
#include "buzzer.h"
#include "timer.h"

u32 TimingDelay = 0;

_Bool buzzer_flag = 0;

void Delay_Ms(u32 nTime);
void TIM2_IRQHandler(void);

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
	SysTick_Config(SystemCoreClock/1000);   //1s -> 72 000 000; 1ms->72 000

	Delay_Ms(200);

	STM3210B_LCD_Init();
	Buzzer_Init();
	TIM2_Init(); //1ms timer

	while(1)
	{
//		if(buzzer_flag == 1) // if(buzzer_flag) 好处：不会造成CPU资源浪费
//		{
//			BEEP_ON();
//		}
//		else
//		{
//			BEEP_OFF();
//		}
		
//		BEEP_ON();
//		Delay_Ms(500);	//因为CPU需要在此等地啊，造成时间浪费
//		BEEP_OFF();
//		Delay_Ms(500);
	}
}

void TIM2_IRQHandler(void)
{
	static u16 buzzer_count=0;
	if (TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)
	{
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
		buzzer_count++;

		if(buzzer_count == 500) //500ms
		{
			buzzer_count = 0;
			buzzer_flag = !buzzer_flag;
		}
	}
}

void Delay_Ms(u32 nTime)
{
	TimingDelay = nTime;
	while(TimingDelay != 0);	
}