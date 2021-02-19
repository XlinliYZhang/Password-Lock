/**
 * 本库主要用于EEPROM的驱动
 */
#ifndef Store_driver__H__
#define Store_driver__H__
#include "Config.h"

#ifdef __cplusplus
extern "C"
{
#endif
    bool Store_Init(void);             //初始化EEPROM
    uint8_t Store_Read(char *mydata);  //读取密码到数组,返回读取密码位数
    uint8_t Store_Write(char *mydata); //读取密码到数组,返回写入密码位数
#ifdef __cplusplus
}
#endif
#endif
