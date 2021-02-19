/**
 * 程序这么写是为了方便 C51 Arduino MSP430 STM32 等方便移植使用
 */ 
#include "Screen_driver.h"
#include "Keypad_driver.h"
#include "Store_driver.h"
void setup()
{
    Serial.begin(9600);
    Store_Init();
    Screen_Init();
    Keypad_Init();
       
}
void loop()
{
  
}