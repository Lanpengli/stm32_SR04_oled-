
#ifndef __SR04_H
#define __SR04_H
#include "main.h"
#include "tim.h"
#include "stdio.h"
 #include "usart.h"
#define TRIG_H  HAL_GPIO_WritePin(Trig_GPIO_Port,Trig_Pin,GPIO_PIN_SET)
#define TRIG_L  HAL_GPIO_WritePin(Trig_GPIO_Port,Trig_Pin,GPIO_PIN_RESET)

void delay_us(uint32_t us);
int SR04_GetData(void);
 
#endif