#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
//hello
void main(void) {
    //To use USB
    stdio_init_all();

    //To use GPIO 25pin
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    //Loop
    while (true)
    {
        //Output "Hello World!" via USB
        printf("Hello World!\r\n");

        //Blink green LED
        gpio_put(25, 1);
        sleep_ms(250);
        gpio_put(25, 0);
        sleep_ms(250);
    }
}
