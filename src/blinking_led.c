/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "common.h"
#include "gpio_iomux.h"


void blinking_led_one(void){
        /*enable GPIO output for PTB0 */
        reg32_write(IOMUXC_SW_MUX_CTL_PAD_PAD_22,IOMUXC_PTB0_DSE(0x1)| IOMUXC_PTB0_OBE_MASK);
        /*enable GPI3 output for PTB3 */
        reg32_write(IOMUXC_SW_MUX_CTL_PAD_PAD_25,IOMUXC_PTB3_DSE(0x1)| IOMUXC_PTB3_OBE_MASK);
        while(1){
                 GPIO0->PDOR&=~PIN(22);
                 GPIO0->PDOR&=~(PIN(25)); /*corresponds with PTB3 */
                int a;
                int b;
                int counter=1000;
                for(a=0;a<counter;a++){
                   for(b=0;b<counter;b++){
                       }

                }
                GPIO0->PDOR|=PIN(22);
                GPIO0->PDOR|=PIN(25);
                for(a=0;a<counter;a++){
                   for(b=0;b<counter;b++){
                       }

                }

        }
}

