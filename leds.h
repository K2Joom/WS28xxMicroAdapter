#ifndef __leds_h__
#define __leds_h__


#include <Arduino.h>
#include "constants.h"

#ifdef USE_WS2812
#include <Adafruit_NeoPixel.h>
#endif

#ifdef USE_EEPROM
#include <EEPROM.h>
#endif


void setupLeds();
void prepareLeds(uint8_t brightnessParam);
void showLeds();

void setUndimmedLedColor	(uint16_t index, uint32_t color);
void setLedColor					(uint16_t index, uint32_t color);
uint32_t getLedColor			(uint16_t index);

uint32_t dim8				(uint32_t color, uint8_t levels);
uint32_t dim256			(uint32_t color, uint8_t levels);
uint32_t brighten8	(uint32_t color, uint8_t levels);

uint32_t getPaletteColorAtIndex(uint8_t index);


#endif