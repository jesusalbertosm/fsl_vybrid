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
