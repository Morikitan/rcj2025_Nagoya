#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

//Main Moter pin
#define MMpin1_1 9
#define MMpin1_2 10
#define MMpin2_1 11
#define MMpin2_2 12
#define MMpin3_1 13
#define MMpin3_2 14
#define MMpin4_1 15
#define MMpin4_2 16

//Dribbler Motor pin
#define DMpin1 16
#define DMpin2 17

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
