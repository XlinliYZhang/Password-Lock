#include "Config.h"
#include <EEPROM.h>
void Store_Init(void)
{
    if (EEPROM.read(EEPROMFlag_Address) == 99)
        return false;
    else
        return true;
}
uint8_t Store_Read(char *mydata)
{
    if (EEPROM.read(EEPROMFlag_Address) != 99)
        return 0;
    for (int i = EEPROMPassword_Address; i < EEPROM.length(); i++)
    {
        mydata[i - EEPROMPassword_Address] = EEPROM.read(i);
        if (mydata[i - EEPROMPassword_Address] == 0)
            break;
    }
    return strlen(mydata);
}
uint8_t Store_Write(char *mydata)
{
    for (int i = 0; i < strlen(mydata); i++)
        EEPROM.write(EEPROMPassword_Address + i, mydata[i]);
    EEPROM.write(strlen(mydata) + EEPROMPassword_Address, 0);
    EEPROM.write(EEPROMFlag_Address, 99);
    return strlen(mydata);
}
