/*
 * @Author: cpu_code
 * @Date: 2020-05-13 14:32:32
 * @LastEditTime: 2020-05-13 14:33:59
 * @FilePath: \stm32_blue_bridge_cup\code\timer_system\buzzer.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "buzzer.h"

/**
 * @function: 蜂鸣器初始化
 * @parameter: 
 * @return: 
 *     success: 
 *     error:
 * @note: 
 */
void Buzzer_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);//开启复用时钟

    GPIO_PinRemapConfig(GPIO_Remap_SWJ_NoJTRST, ENABLE); //禁用NoJTRST，可以使用PB4作普通io

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;

    GPIO_Init(GPIOB, &GPIO_InitStructure);
}