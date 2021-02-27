#include "mbed.h"

DigitalOut myled(LED1);
DigitalOut myled2(LED3);

void Led(DigitalOut &ledpin);

int main()
{
    myled = 0;
    myled2 = 0;
    while(1) {
        Led(myled);
        Led(myled);
        Led(myled2);
        Led(myled2);
        Led(myled2);
    }
}