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
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __GPIO_
#define __GPIO_

#include "types.h"



/******Configuration IOMUX*/
#define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)

typedef struct {
  __IO uint32_t PDOR;                              /**< Port Data Output Register, offset: 0x0 */
  __O  uint32_t PSOR;                              /**< Port Set Output Register, offset: 0x4 */
  __O  uint32_t PCOR;                              /**< Port Clear Output Register, offset: 0x8 */
  __O  uint32_t PTOR;                              /**< Port Toggle Output Register, offset: 0xC */
  __I  uint32_t PDIR;                              /**< Port Data Input Register, offset: 0x10 */
} GPIO_Type;

/** Peripheral GPIO0 base address */
#define GPIO0_BASE                               (0x400FF000u)
/** Peripheral GPIO0 base pointer */
#define GPIO0                                    ((GPIO_Type *)GPIO0_BASE)
/*configuration PTB2*/
#define IOMUXC_PTB0_DSE_SHIFT                    6
#define IOMUXC_PTB0_DSE_MASK                     0x1C0u
#define IOMUXC_PTB0_OBE_MASK                     0x2u
#define IOMUXC_PTB0_DSE(x)                       (((uint32_t)(((uint32_t)(x))<<IOMUXC_PTB0_DSE_SHIFT))&IOMUXC_PTB0_DSE_MASK)
/************************/
/*Configuration PTB3*/
#define IOMUXC_PTB3_DSE_MASK                     0x1C0u
#define IOMUXC_PTB3_DSE_SHIFT                    6
#define IOMUXC_PTB3_DSE(x)                       (((uint32_t)(((uint32_t)(x))<<IOMUXC_PTB3_DSE_SHIFT))&IOMUXC_PTB3_DSE_MASK)
#define IOMUXC_PTB3_OBE_MASK                     0x2u
/*********************/
/****PIN configuration*/
#define PIN_MASK            0x1Fu
#define PIN(x)              (unsigned)(((1)<<(x & PIN_MASK)))
/***********************/



#endif
