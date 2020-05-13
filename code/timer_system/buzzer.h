/*
 * @Author: cpu_code
 * @Date: 2020-05-13 14:32:14
 * @LastEditTime: 2020-05-13 14:32:15
 * @FilePath: \stm32_blue_bridge_cup\code\timer_system\buzzer.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#ifndef __BUZZER_H
#define __BUZZER_H
#include "stm32f10x.h"

#define BEEP_ON()	GPIO_ResetBits(GPIOB, GPIO_Pin_4)
#define BEEP_OFF()  GPIO_SetBits(GPIOB, GPIO_Pin_4)

void Buzzer_Init(void);

#endif