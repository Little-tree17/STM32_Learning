#ifndef __STM32F10X_CONF_H
#define __STM32F10X_CONF_H

// 包含你需要的外设库
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

// 关键：定义这个宏，关闭参数检查，解决 assert_param 报错
#define assert_param(expr) ((void)0)

#endif
