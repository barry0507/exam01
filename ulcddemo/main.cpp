#include "mbed.h"

#include "uLCD_4DGL.h"

DigitalIn sample(D0);
uLCD_4DGL uLCD(D1, D7, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6);
Serial pc( USBTX, USBRX );
int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("\n 107061108 \n"); //Default Green on black text

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.color(RED);

    uLCD.rectangle(50,50, 100,90,0x0000FF);
    /***********************/
    PWM1.period(0.001);
    PWM1 = 0;
    while(1){
     //   pc.printf("%1.3f\r\n",sample );
        if(PWM1<1){
            PWM1=PWM1+0.1;
            wait(0.1);
        }
        else{
            PWM1=PWM1-0.1;
            wait(0.1);
        }
    }
}