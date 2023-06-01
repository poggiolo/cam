#ifndef _GC9A01_H
#define _GC9A01_H

#include <stdint.h>

#define CONFIG_GC9A01_Width 240
#define CONFIG_GC9A01_Height 240
#define CONFIG_USE_SPI1_HOST 0
#define CONFIG_USE_SPI2_HOST 0
#define CONFIG_USE_SPI3_HOST 1
#define CONFIG_USE_SPI4_HOST 0
#define CONFIG_GC9A01_SPI_HOST 2
#define CONFIG_GC9A01_PIN_NUM_SCK 18
#define CONFIG_GC9A01_PIN_NUM_MOSI 23
#define CONFIG_GC9A01_PIN_NUM_CS 05
#define CONFIG_GC9A01_PIN_NUM_DC 22
#define CONFIG_GC9A01_SPI_SCK_FREQ_M 50
#define CONFIG_GC9A01_CONTROL_BACK_LIGHT_USED 1
#define CONFIG_GC9A01_PIN_NUM_BCKL 19
#define CONFIG_GC9A01_BACK_LIGHT_MODE_On_OFF 0
#define CONFIG_GC9A01_BACK_LIGHT_MODE_PWM 1
#define CONFIG_GC9A01_CONTROL_BACK_LIGHT_MODE 1
#define CONFIG_GC9A01_RESET_USED 1
#define CONFIG_GC9A01_PIN_NUM_RST 21
#define CONFIG_GC9A01_BUFFER_MODE 1
#define CONFIG_GC9A01_BUFFER_SCREEN_FAST_MODE 1

#define GC9A01_Width CONFIG_GC9A01_Width
#define GC9A01_Height CONFIG_GC9A01_Height

uint16_t GC9A01_GetWidth();
uint16_t GC9A01_GetHeight();

void GC9A01_Init();
void GC9A01_SleepMode(uint8_t Mode);
void GC9A01_DisplayPower(uint8_t On);
void GC9A01_DrawPixel(int16_t x, int16_t y, uint16_t color);
void GC9A01_FillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                     uint16_t color);
void GC9A01_Update();
void GC9A01_SetBL(uint8_t Value);
uint16_t GC9A01_GetPixel(int16_t x, int16_t y);

void GC9A01_Screen_Shot(uint16_t x, uint16_t y, uint16_t width, uint16_t height,
                        uint16_t* Buffer);
void GC9A01_Screen_Load(uint16_t x, uint16_t y, uint16_t width, uint16_t height,
                        uint16_t* Buffer);

#endif