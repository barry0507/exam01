#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("\n 107061108 \n"); //Default Green on black text

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.color(RED);

    uLCD.rectangle(50,50, 100,90,0x0000FF);
}