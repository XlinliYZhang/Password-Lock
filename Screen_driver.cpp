#include "Screen_driver.h"
#if defined(USE_LCD1602) || defined(USE_LCD1602)
#include <LiquidCrystal.h>
LiquidCrystal lcd(Screen_Pin[0], Screen_Pin[1], Screen_Pin[2], Screen_Pin[3], Screen_Pin[4], Screen_Pin[5]);
#elif defined(USE_LCD1602_I2C)
#include <LiquidCrystal_I2C.h>
LiquidCrystal lcd(Screen_I2CAddress, 16, 2);
#elif defined(USE_LCD2004_I2C)
#include <LiquidCrystal_I2C.h>
LiquidCrystal lcd(Screen_I2CAddress, 20, 4);
#endif
/**
   本函数主要用于初始化屏幕和清屏
*/
void Screen_Init(void)
{
#if defined(USE_LCD1602)
  lcd.begin(16, 2);
  lcd.clear();
#elif defined(USE_LCD1602)
  lcd.begin(20, 4);
  lcd.clear();
#elif defined(USE_LCD1602_I2C) || defined(USE_LCD2004_I2C)
  lcd.init();
  lcd.backlight();
  lcd.clear();
#endif
}
/**
   本函数主要用于清屏清除
*/
void Sceeen_Clear(void)
{
#if defined(USE_LCD1602) || defined(USE_LCD1602) || defined(USE_LCD1602_I2C) || defined(USE_LCD2004_I2C)
  lcd.clear();
#endif
}
/**
   本函数主要用于在指定位置显示字符
*/
void Sceeen_Displaychar(const int x, const int y, const char s)
{
#if defined(USE_LCD1602) || defined(USE_LCD1602) || defined(USE_LCD1602_I2C) || defined(USE_LCD2004_I2C)
  lcd.setCursor(x, y);
  lcd.print(s);
#endif
}
/**
   本函数主要用于在指定位置显示字符串
*/
void Sceeen_Displaystr(const int x, const int y, const char *s)
{
#if defined(USE_LCD1602) || defined(USE_LCD1602) || defined(USE_LCD1602_I2C) || defined(USE_LCD2004_I2C)
  lcd.setCursor(x, y);
  lcd.print(s);
#endif
}
