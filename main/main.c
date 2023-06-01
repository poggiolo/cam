#include <math.h>
#include <stdio.h>
#include <string.h>

#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "gc9a01.h"
#include "sdkconfig.h"

#define STACK_SIZE 2048 * 2

void LCD(void* arg) {
  uint16_t Color;
  GC9A01_Init();
  for (;;) {
    Color = rand();
    GC9A01_FillRect(0, 0, 239, 239, Color);
    GC9A01_Update();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void app_main(void) {
  TaskHandle_t LCDHandle;

  xTaskCreate(LCD, "Test LCD", STACK_SIZE, NULL, tskIDLE_PRIORITY, &LCDHandle);
  configASSERT(LCDHandle);
}