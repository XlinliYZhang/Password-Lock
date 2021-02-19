/**
 * 本库主要用于屏幕的驱动,可通过简单修改适配需要的屏幕
 */
#ifndef Screen_driver__H__
#define Screen_driver__H__
#include "Config.h"


#ifdef __cplusplus
extern "C"
{
#endif
    void Screen_Init(void);                                          //初始化屏幕
    void Sceeen_Clear(void);                                         //清除屏幕显示内容
    void Sceeen_Displaychar(const int x, const int y, const char s); //显示一个字符x,y显示坐标 单位:1字符 s要显示的字符
    void Sceeen_Displaystr(const int x, const int y, const char *s); //显示一个字符串x,y显示坐标 单位:1字符 s要显示的字符串指针
#ifdef __cplusplus
}
#endif
#endif
