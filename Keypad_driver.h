/**
 * 本库主要用于矩阵键盘的驱动
 */
#ifndef Keypad_driver__H__
#define Keypad_driver__H__
#include "Config.h"

#ifdef __cplusplus
extern "C"
{
#endif
    void Keypad_Init(void); //初始化矩阵键盘
    char Keypad_Scan(void); //扫描一次矩阵键盘键盘,并返回按下的健值
#ifdef __cplusplus
}
#endif
#endif