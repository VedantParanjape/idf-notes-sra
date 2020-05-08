#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "distance.h"

void app_main(void)
{
    int i = 0;
    while (1) {
        printf("[%d] Hello world!\n", i);
        i++;
        printf("distance from origin: %d\n", distance(1,i));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
