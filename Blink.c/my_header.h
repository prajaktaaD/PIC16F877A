#include"my_header.h"
#define LED RA1
#define LED_CONFIG TRISA1
void main(void)
{
    ADCON1=0x07;
    LED_CONFIG=0;
    while(1)
    {
        LED=0;
        __delay_ms(200);
        LED=1;
        __delay_ms(200);
    }
}
