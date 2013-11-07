#include "common.h"
#include "gpio_iomux.h"



void blinking_led_one(void){



	IOMUXC->SINGLE.PTB0 = IOMUXC_PTB0_DSE(0x1)| IOMUXC_PTB0_OBE_MASK; //enable GPIO output for PTB0
	IOMUXC->SINGLE.PTB3 = IOMUXC_PTB3_DSE(0x1)| IOMUXC_PTB3_OBE_MASK; //enable GPIO output for PTB3

        while(1){

                 GPIO0->PDOR&=~PIN(22);
                 GPIO0->PDOR&=~(PIN(25)); //corresponds with PTB3
                int a;
                int b;
                int counter=1000;
                for(a=0;a<counter;a++){
                        asm("nop");
                        asm("nop");
                        asm("nop");
                   for(b=0;b<counter;b++){
                        asm("nop");
                        asm("nop");
                        asm("nop");


                       }

                }


                GPIO0->PDOR|=PIN(22);
                GPIO0->PDOR|=PIN(25);

                        for(a=0;a<counter;a++){
                        asm("nop");
                        asm("nop");
                        asm("nop");
                   for(b=0;b<counter;b++){
                        asm("nop");
                        asm("nop");
                        asm("nop");


                       }

                }

        }
}

