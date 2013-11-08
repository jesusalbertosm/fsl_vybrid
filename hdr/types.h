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


#ifndef __TYPES_HDR__
#define __TYPES_HDR__

typedef unsigned char  uint8;
typedef signed char    sint8;

typedef unsigned short uint16;
typedef signed short   sint16;

typedef unsigned int   uint32;
typedef signed int     sint32;

typedef unsigned char  uint8_t;
typedef signed char    sint8_t;

typedef unsigned short uint16_t;
typedef signed short   sint16_t;

typedef unsigned int   uint32_t;
typedef signed int     sint32_t;

#define NULL (0)

#define TRUE  1
#define FALSE 0

#define SUCCESS 0
#define FAIL    1

#define REG_WRITE(addr, value) *(volatile unsigned int *)(addr) = value
#define REG_READ(addr) (*(volatile unsigned int *)(addr))
#ifdef __cplusplus
          #define   __I     volatile             /*!< Defines 'read only' permissions                 */
        #else
          #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
        #endif
        #define     __O     volatile             /*!< Defines 'write only' permissions                */

#define     __IO    volatile             /*!< Defines 'read / write' permissions              */
__IO uint32_t PTA6;
#endif
