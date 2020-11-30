#include"my_header.h"
#define SWITCH RD2
#define LED1 RA1

void main(void)
{
    ADCON1=0x07;
    //LED_CONFIG=0;
    TRISD2=1;
    TRISA1=0;
 
    
    while(1)
    {
        if(SWITCH==0)
        {   
            LED1=~LED1;                  
            __delay_ms(500);          
        }
        
    }
}
