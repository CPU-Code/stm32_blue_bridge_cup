/*
 * @Author: cpu_code
 * @Date: 2020-05-13 14:15:34
 * @LastEditTime: 2020-05-13 14:19:27
 * @FilePath: \stm32_blue_bridge_cup\code\timer_system\timer.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "stm32f10x.h"

void TIM2_Init(void)
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
    NVIC_InitTypeDef NVIC_InitStructure;

    /* Enable the TIM2 global Interrupt */
    NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);

	/* Time base configuration */
    TIM_TimeBaseStructure.TIM_Period = 1000-1;	//1ms
    TIM_TimeBaseStructure.TIM_Prescaler = 71;	//72 000 000 /72 = 1 000 000 Hz = 1MHz
    TIM_TimeBaseStructure.TIM_ClockDivision = 0;
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);

    /* TIM IT enable */
	TIM_ITConfig(TIM2, TIM_IT_Update , ENABLE);

    /* TIM2 enable counter */
	TIM_Cmd(TIM2, ENABLE);
}