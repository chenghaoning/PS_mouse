#ifndef _OLED_DISTANCE_
#define _OLED_DISTANCE_
#include "u8g2.h"

void oled_init(I2C_HandleTypeDef *oledi2c);
void oled_display();
extern u8g2_t u8g2;
#endif