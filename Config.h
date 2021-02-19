#ifndef Config__H__
#define Config__H__
#include <Arduino.h>
/**
 * 此处为屏幕的配置
 */
#define USE_LCD1602                                                                              //使用LCD1602 四线驱动
#define USE_LCD2004                                                                              //使用LCD2004 四线驱动
#define USE_LCD1602_I2C                                                                          //使用LCD1602 I2C驱动
#define USE_LCD2004_I2C                                                                          //使用LCD2004 I2C驱动
const uint8_t Screen_I2CAddress = 0x27;                                                          //I2C驱动时屏幕I2C地址
const uint8_t Screen_Pin[] = {/*RS*/ A0, /*EN*/ A1, /*D4*/ A2, /*D5*/ A3, /*D6*/ A4, /*D7*/ A5}; //仅使用4线驱动的情况下会使用这些引脚
/**
 * 此处为矩阵键盘的配置
 */
#define Keyboard_Row 4                                    //矩阵键盘行大小
#define Keyboard_Column 4                                 //矩阵键盘列大小
const uint8_t Row_Pin[Keyboard_Row] = {2, 3, 4, 5};       //矩阵键盘行引脚定义
const uint8_t Column_Pin[Keyboard_Column] = {2, 3, 4, 5}; //矩阵键盘列引脚定义
const char Keypad_map[Keyboard_Column][Keyboard_Column] = /*矩阵键盘映射*/
    {{'1', '2', '3', 'A'},
     {'4', '5', '6', 'B'},
     {'7', '8', '9', 'C'},
     {'E', '0', 'F', 'D'}};
/**
 * 此处为EEPROM储存地址配置
 */
#define EEPROMFlag_Address 0     //密码正常标志位地址
#define EEPROMPassword_Address 1 //密码储存地址
#endif
