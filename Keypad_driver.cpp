#include "Keypad_driver.h"
#include <Keypad.h>
Keypad customKeypad = Keypad(makeKeymap(Keypad_map), Row_Pin, Column_Pin, Keyboard_Row, Keyboard_Column);
/**
 * 本函数主要用于初始化矩阵键盘
*/
void Keypad_Init(void)
{
}
/**
 * 本函数主要用于扫描矩阵键盘键盘,并返回按下的健值
*/
char Keypad_Scan(void)
{
    return (customKeypad.getKey());
}