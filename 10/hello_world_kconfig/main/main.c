#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "distance.h"

#define I CONFIG_VALUE_OF_I

void app_main(void)
{
    int i = I;
    while (1) {
        printf("[%d] Hello world!\n", i);
        i++;
        printf("distance from origin: %d\n", distance(1,i));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
