#ifndef __GPIO_
#define __GPIO_

#include "types.h"



typedef struct {
  union {                                          /* offset: 0x0 */
    __IO uint32_t RGPIO[135];                        /**< Software MUX Pad Control Register 0..Software MUX Pad Control Register 134, array offset: 0x0, array step: 0x4 */
    struct {                                         /* offset: 0x0 */
      __IO uint32_t PTA6;                              /**< Software MUX Pad Control Register 0, offset: 0x0 */
      __IO uint32_t PTA8;                              /**< Software MUX Pad Control Register 1, offset: 0x4 */
      __IO uint32_t PTA9;                              /**< Software MUX Pad Control Register 2, offset: 0x8 */
      __IO uint32_t PTA10;                             /**< Software MUX Pad Control Register 3, offset: 0xC */
      __IO uint32_t PTA11;                             /**< Software MUX Pad Control Register 4, offset: 0x10 */
      __IO uint32_t PTA12;                             /**< Software MUX Pad Control Register 5, offset: 0x14 */
      __IO uint32_t PTA16;                             /**< Software MUX Pad Control Register 6, offset: 0x18 */
      __IO uint32_t PTA17;                             /**< Software MUX Pad Control Register 7, offset: 0x1C */
      __IO uint32_t PTA18;                             /**< Software MUX Pad Control Register 8, offset: 0x20 */
      __IO uint32_t PTA19;                             /**< Software MUX Pad Control Register 9, offset: 0x24 */
      __IO uint32_t PTA20;                             /**< Software MUX Pad Control Register 10, offset: 0x28 */
      __IO uint32_t PTA21;                             /**< Software MUX Pad Control Register 11, offset: 0x2C */
      __IO uint32_t PTA22;                             /**< Software MUX Pad Control Register 12, offset: 0x30 */
      __IO uint32_t PTA23;                             /**< Software MUX Pad Control Register 13, offset: 0x34 */
      __IO uint32_t PTA24;                             /**< Software MUX Pad Control Register 14, offset: 0x38 */
      __IO uint32_t PTA25;                             /**< Software MUX Pad Control Register 15, offset: 0x3C */
      __IO uint32_t PTA26;                             /**< Software MUX Pad Control Register 16, offset: 0x40 */
      __IO uint32_t PTA27;                             /**< Software MUX Pad Control Register 17, offset: 0x44 */
      __IO uint32_t PTA28;                             /**< Software MUX Pad Control Register 18, offset: 0x48 */
      __IO uint32_t PTA29;                             /**< Software MUX Pad Control Register 19, offset: 0x4C */
      __IO uint32_t PTA30;                             /**< Software MUX Pad Control Register 20, offset: 0x50 */
      __IO uint32_t PTA31;                             /**< Software MUX Pad Control Register 21, offset: 0x54 */
      __IO uint32_t PTB0;                              /**< Software MUX Pad Control Register 22, offset: 0x58 */
      __IO uint32_t PTB1;                              /**< Software MUX Pad Control Register 23, offset: 0x5C */
      __IO uint32_t PTB2;                              /**< Software MUX Pad Control Register 24, offset: 0x60 */
      __IO uint32_t PTB3;                              /**< Software MUX Pad Control Register 25, offset: 0x64 */
      __IO uint32_t PTB4;                              /**< Software MUX Pad Control Register 26, offset: 0x68 */
      __IO uint32_t PTB5;                              /**< Software MUX Pad Control Register 27, offset: 0x6C */
      __IO uint32_t PTB6;                              /**< Software MUX Pad Control Register 28, offset: 0x70 */
      __IO uint32_t PTB7;                              /**< Software MUX Pad Control Register 29, offset: 0x74 */
      __IO uint32_t PTB8;                              /**< Software MUX Pad Control Register 30, offset: 0x78 */
      __IO uint32_t PTB9;                              /**< Software MUX Pad Control Register 31, offset: 0x7C */
      __IO uint32_t PTB10;                             /**< Software MUX Pad Control Register 32, offset: 0x80 */
      __IO uint32_t PTB11;                             /**< Software MUX Pad Control Register 33, offset: 0x84 */
      __IO uint32_t PTB12;                             /**< Software MUX Pad Control Register 34, offset: 0x88 */
      __IO uint32_t PTB13;                             /**< Software MUX Pad Control Register 35, offset: 0x8C */
      __IO uint32_t PTB14;                             /**< Software MUX Pad Control Register 36, offset: 0x90 */
      __IO uint32_t PTB15;                             /**< Software MUX Pad Control Register 37, offset: 0x94 */
      __IO uint32_t PTB16;                             /**< Software MUX Pad Control Register 38, offset: 0x98 */
      __IO uint32_t PTB17;                             /**< Software MUX Pad Control Register 39, offset: 0x9C */
      __IO uint32_t PTB18;                             /**< Software MUX Pad Control Register 40, offset: 0xA0 */
      __IO uint32_t PTB19;                             /**< Software MUX Pad Control Register 41, offset: 0xA4 */
      __IO uint32_t PTB20;                             /**< Software MUX Pad Control Register 42, offset: 0xA8 */
      __IO uint32_t PTB21;                             /**< Software MUX Pad Control Register 43, offset: 0xAC */
      __IO uint32_t PTB22;                             /**< Software MUX Pad Control Register 44, offset: 0xB0 */
      __IO uint32_t PTC0;                              /**< Software MUX Pad Control Register 45, offset: 0xB4 */
      __IO uint32_t PTC1;                              /**< Software MUX Pad Control Register 46, offset: 0xB8 */
      __IO uint32_t PTC2;                              /**< Software MUX Pad Control Register 47, offset: 0xBC */
      __IO uint32_t PTC3;                              /**< Software MUX Pad Control Register 48, offset: 0xC0 */
      __IO uint32_t PTC4;                              /**< Software MUX Pad Control Register 49, offset: 0xC4 */
      __IO uint32_t PTC5;                              /**< Software MUX Pad Control Register 50, offset: 0xC8 */
      __IO uint32_t PTC6;                              /**< Software MUX Pad Control Register 51, offset: 0xCC */
      __IO uint32_t PTC7;                              /**< Software MUX Pad Control Register 52, offset: 0xD0 */
      __IO uint32_t PTC8;                              /**< Software MUX Pad Control Register 53, offset: 0xD4 */
      __IO uint32_t PTC9;                              /**< Software MUX Pad Control Register 54, offset: 0xD8 */
      __IO uint32_t PTC10;                             /**< Software MUX Pad Control Register 55, offset: 0xDC */
      __IO uint32_t PTC11;                             /**< Software MUX Pad Control Register 56, offset: 0xE0 */
      __IO uint32_t PTC12;                             /**< Software MUX Pad Control Register 57, offset: 0xE4 */
      __IO uint32_t PTC13;                             /**< Software MUX Pad Control Register 58, offset: 0xE8 */
      __IO uint32_t PTC14;                             /**< Software MUX Pad Control Register 59, offset: 0xEC */
      __IO uint32_t PTC15;                             /**< Software MUX Pad Control Register 60, offset: 0xF0 */
      __IO uint32_t PTC16;                             /**< Software MUX Pad Control Register 61, offset: 0xF4 */
      __IO uint32_t PTC17;                             /**< Software MUX Pad Control Register 62, offset: 0xF8 */
      __IO uint32_t PTD31;                             /**< Software MUX Pad Control Register 63, offset: 0xFC */
      __IO uint32_t PTD30;                             /**< Software MUX Pad Control Register 64, offset: 0x100 */
      __IO uint32_t PTD29;                             /**< Software MUX Pad Control Register 65, offset: 0x104 */
      __IO uint32_t PTD28;                             /**< Software MUX Pad Control Register 66, offset: 0x108 */
      __IO uint32_t PTD27;                             /**< Software MUX Pad Control Register 67, offset: 0x10C */
      __IO uint32_t PTD26;                             /**< Software MUX Pad Control Register 68, offset: 0x110 */
      __IO uint32_t PTD25;                             /**< Software MUX Pad Control Register 69, offset: 0x114 */
      __IO uint32_t PTD24;                             /**< Software MUX Pad Control Register 70, offset: 0x118 */
      __IO uint32_t PTD23;                             /**< Software MUX Pad Control Register 71, offset: 0x11C */
      __IO uint32_t PTD22;                             /**< Software MUX Pad Control Register 72, offset: 0x120 */
      __IO uint32_t PTD21;                             /**< Software MUX Pad Control Register 73, offset: 0x124 */
      __IO uint32_t PTD20;                             /**< Software MUX Pad Control Register 74, offset: 0x128 */
      __IO uint32_t PTD19;                             /**< Software MUX Pad Control Register 75, offset: 0x12C */
      __IO uint32_t PTD18;                             /**< Software MUX Pad Control Register 76, offset: 0x130 */
      __IO uint32_t PTD17;                             /**< Software MUX Pad Control Register 77, offset: 0x134 */
      __IO uint32_t PTD16;                             /**< Software MUX Pad Control Register 78, offset: 0x138 */
      __IO uint32_t PTD0;                              /**< Software MUX Pad Control Register 79, offset: 0x13C */
      __IO uint32_t PTD1;                              /**< Software MUX Pad Control Register 80, offset: 0x140 */
      __IO uint32_t PTD2;                              /**< Software MUX Pad Control Register 81, offset: 0x144 */
      __IO uint32_t PTD3;                              /**< Software MUX Pad Control Register 82, offset: 0x148 */
      __IO uint32_t PTD4;                              /**< Software MUX Pad Control Register 83, offset: 0x14C */
      __IO uint32_t PTD5;                              /**< Software MUX Pad Control Register 84, offset: 0x150 */
      __IO uint32_t PTD6;                              /**< Software MUX Pad Control Register 85, offset: 0x154 */
      __IO uint32_t PTD7;                              /**< Software MUX Pad Control Register 86, offset: 0x158 */
      __IO uint32_t PTD8;                              /**< Software MUX Pad Control Register 87, offset: 0x15C */
      __IO uint32_t PTD9;                              /**< Software MUX Pad Control Register 88, offset: 0x160 */
      __IO uint32_t PTD10;                             /**< Software MUX Pad Control Register 89, offset: 0x164 */
      __IO uint32_t PTD11;                             /**< Software MUX Pad Control Register 90, offset: 0x168 */
      __IO uint32_t PTD12;                             /**< Software MUX Pad Control Register 91, offset: 0x16C */
      __IO uint32_t PTD13;                             /**< Software MUX Pad Control Register 92, offset: 0x170 */
      __IO uint32_t PTB23;                             /**< Software MUX Pad Control Register 93, offset: 0x174 */
      __IO uint32_t PTB24;                             /**< Software MUX Pad Control Register 94, offset: 0x178 */
      __IO uint32_t PTB25;                             /**< Software MUX Pad Control Register 95, offset: 0x17C */
      __IO uint32_t PTB26;                             /**< Software MUX Pad Control Register 96, offset: 0x180 */
      __IO uint32_t PTB27;                             /**< Software MUX Pad Control Register 97, offset: 0x184 */
      __IO uint32_t PTB28;                             /**< Software MUX Pad Control Register 98, offset: 0x188 */
      __IO uint32_t PTC26;                             /**< Software MUX Pad Control Register 99, offset: 0x18C */
      __IO uint32_t PTC27;                             /**< Software MUX Pad Control Register 100, offset: 0x190 */
      __IO uint32_t PTC28;                             /**< Software MUX Pad Control Register 101, offset: 0x194 */
      __IO uint32_t PTC29;                             /**< Software MUX Pad Control Register 102, offset: 0x198 */
      __IO uint32_t PTC30;                             /**< Software MUX Pad Control Register 103, offset: 0x19C */
      __IO uint32_t PTC31;                             /**< Software MUX Pad Control Register 104, offset: 0x1A0 */
      __IO uint32_t PTE0;                              /**< Software MUX Pad Control Register 105, offset: 0x1A4 */
      __IO uint32_t PTE1;                              /**< Software MUX Pad Control Register 106, offset: 0x1A8 */
      __IO uint32_t PTE2;                              /**< Software MUX Pad Control Register 107, offset: 0x1AC */
      __IO uint32_t PTE3;                              /**< Software MUX Pad Control Register 108, offset: 0x1B0 */
      __IO uint32_t PTE4;                              /**< Software MUX Pad Control Register 109, offset: 0x1B4 */
      __IO uint32_t PTE5;                              /**< Software MUX Pad Control Register 110, offset: 0x1B8 */
      __IO uint32_t PTE6;                              /**< Software MUX Pad Control Register 111, offset: 0x1BC */
      __IO uint32_t PTE7;                              /**< Software MUX Pad Control Register 112, offset: 0x1C0 */
      __IO uint32_t PTE8;                              /**< Software MUX Pad Control Register 113, offset: 0x1C4 */
      __IO uint32_t PTE9;                              /**< Software MUX Pad Control Register 114, offset: 0x1C8 */
      __IO uint32_t PTE10;                             /**< Software MUX Pad Control Register 115, offset: 0x1CC */
      __IO uint32_t PTE11;                             /**< Software MUX Pad Control Register 116, offset: 0x1D0 */
      __IO uint32_t PTE12;                             /**< Software MUX Pad Control Register 117, offset: 0x1D4 */
      __IO uint32_t PTE13;                             /**< Software MUX Pad Control Register 118, offset: 0x1D8 */
      __IO uint32_t PTE14;                             /**< Software MUX Pad Control Register 119, offset: 0x1DC */
      __IO uint32_t PTE15;                             /**< Software MUX Pad Control Register 120, offset: 0x1E0 */
      __IO uint32_t PTE16;                             /**< Software MUX Pad Control Register 121, offset: 0x1E4 */
      __IO uint32_t PTE17;                             /**< Software MUX Pad Control Register 122, offset: 0x1E8 */
      __IO uint32_t PTE18;                             /**< Software MUX Pad Control Register 123, offset: 0x1EC */
      __IO uint32_t PTE19;                             /**< Software MUX Pad Control Register 124, offset: 0x1F0 */
      __IO uint32_t PTE20;                             /**< Software MUX Pad Control Register 125, offset: 0x1F4 */
      __IO uint32_t PTE21;                             /**< Software MUX Pad Control Register 126, offset: 0x1F8 */
      __IO uint32_t PTE22;                             /**< Software MUX Pad Control Register 127, offset: 0x1FC */
      __IO uint32_t PTE23;                             /**< Software MUX Pad Control Register 128, offset: 0x200 */
      __IO uint32_t PTE24;                             /**< Software MUX Pad Control Register 129, offset: 0x204 */
      __IO uint32_t PTE25;                             /**< Software MUX Pad Control Register 130, offset: 0x208 */
      __IO uint32_t PTE26;                             /**< Software MUX Pad Control Register 131, offset: 0x20C */
      __IO uint32_t PTE27;                             /**< Software MUX Pad Control Register 132, offset: 0x210 */
      __IO uint32_t PTE28;                             /**< Software MUX Pad Control Register 133, offset: 0x214 */
      __IO uint32_t PTA7;                              /**< Software MUX Pad Control Register 134, offset: 0x218 */
    } SINGLE;
  };
  __IO uint32_t DDR_RESETB;                        /**< Software MUX DDR RESET Pad Configuration Register, offset: 0x21C */
  __IO uint32_t DDR_A_15;                          /**< Software MUX DDR A15 Pad Control Register, offset: 0x220 */
  __IO uint32_t DDR_A_14;                          /**< Software MUX DDR A14 Pad Control Register, offset: 0x224 */
  __IO uint32_t DDR_A_13;                          /**< Software MUX DDR A13 Pad Control Register, offset: 0x228 */
  __IO uint32_t DDR_A_12;                          /**< Software MUX DDR A12 Pad Control Register, offset: 0x22C */
  __IO uint32_t DDR_A_11;                          /**< Software MUX DDR A11 Pad Control Register, offset: 0x230 */
  __IO uint32_t DDR_A_10;                          /**< Software MUX DDR A10 Pad Control Register, offset: 0x234 */
  __IO uint32_t DDR_A_9;                           /**< Software MUX DDR A9 Pad Control Register, offset: 0x238 */
  __IO uint32_t DDR_A_8;                           /**< Software MUX DDR A8 Pad Control Register, offset: 0x23C */
  __IO uint32_t DDR_A_7;                           /**< Software MUX DDR A7 Pad Control Register, offset: 0x240 */
  __IO uint32_t DDR_A_6;                           /**< Software MUX DDR A6 Pad Control Register, offset: 0x244 */
  __IO uint32_t DDR_A_5;                           /**< Software MUX DDR A5 Pad Control Register, offset: 0x248 */
  __IO uint32_t DDR_A_4;                           /**< Software MUX DDR A4 Pad Control Register, offset: 0x24C */
  __IO uint32_t DDR_A_3;                           /**< Software MUX DDR Pad A3 Control Register, offset: 0x250 */
  __IO uint32_t DDR_A_2;                           /**< Software MUX DDR A2 Pad Control Register, offset: 0x254 */
  __IO uint32_t DDR_A_1;                           /**< Software MUX DDR A1 Pad Control Register, offset: 0x258 */
  __IO uint32_t DDR_A_0;                           /**< Software MUX DDR A0 Pad Control Register, offset: 0x25C */
  __IO uint32_t DDR_BA_2;                          /**< Software MUX DDR BA2 Pad Control Register, offset: 0x260 */
  __IO uint32_t DDR_BA_1;                          /**< Software MUX DDR BA1 Pad Control Register, offset: 0x264 */
  __IO uint32_t DDR_BA_0;                          /**< Software MUX DDR BA0 Pad Control Register, offset: 0x268 */
  __IO uint32_t DDR_CAS_B;                         /**< Software MUX DDR CAS Pad Control Register, offset: 0x26C */
  __IO uint32_t DDR_CKE_0;                         /**< Software MUX DDR CKE0 Pad Control Register, offset: 0x270 */
  __IO uint32_t DDR_CLK_0;                         /**< Software MUX DDR CLK0 Pad Control Register, offset: 0x274 */
  __IO uint32_t DDR_CS_B_0;                        /**< Software MUX DDR CS B0 Pad Control Register, offset: 0x278 */
  __IO uint32_t DDR_CS_D_15;                       /**< Software MUX DDR CS D15 Pad Control Register, offset: 0x27C */
  __IO uint32_t DDR_CS_D_14;                       /**< Software MUX DDR CS D14 Pad Control Register, offset: 0x280 */
  __IO uint32_t DDR_CS_D_13;                       /**< Software MUX DDR CS D13 Pad Control Register, offset: 0x284 */
  __IO uint32_t DDR_CS_D_12;                       /**< Software MUX DDR CS D12 Pad Control Register, offset: 0x288 */
  __IO uint32_t DDR_CS_D_11;                       /**< Software MUX DDR CS D11 Pad Control Register, offset: 0x28C */
  __IO uint32_t DDR_CS_D_10;                       /**< Software MUX DDR CS D10 Pad Control Register, offset: 0x290 */
  __IO uint32_t DDR_CS_D_9;                        /**< Software MUX DDR CS D9 Pad Control Register, offset: 0x294 */
  __IO uint32_t DDR_CS_D_8;                        /**< Software MUX DDR CS D8 Pad Control Register, offset: 0x298 */
  __IO uint32_t DDR_CS_D_7;                        /**< Software MUX DDR CS D7 Pad Control Register, offset: 0x29C */
  __IO uint32_t DDR_CS_D_6;                        /**< Software MUX DDR CS D6 Pad Control Register, offset: 0x2A0 */
  __IO uint32_t DDR_CS_D_5;                        /**< Software MUX DDR CS D5 Pad Control Register, offset: 0x2A4 */
  __IO uint32_t DDR_CS_D_4;                        /**< Software MUX DDR CS D4 Pad Control Register, offset: 0x2A8 */
  __IO uint32_t DDR_CS_D_3;                        /**< Software MUX DDR CS D3 Pad Control Register, offset: 0x2AC */
  __IO uint32_t DDR_CS_D_2;                        /**< Software MUX DDR CS D2 Pad Control Register, offset: 0x2B0 */
  __IO uint32_t DDR_CS_D_1;                        /**< Software MUX DDR CS D1 Pad Control Register, offset: 0x2B4 */
  __IO uint32_t DDR_CS_D_0;                        /**< Software MUX DDR CS D0 Pad Control Register, offset: 0x2B8 */
  __IO uint32_t DDR_DQM_1;                         /**< Software MUX DDR DQM1 Pad Control Register, offset: 0x2BC */
  __IO uint32_t DDR_DQM_0;                         /**< Software MUX DDR DQM0 Pad Control Register 0, offset: 0x2C0 */
  __IO uint32_t DDR_DQS_1;                         /**< Software MUX DDR DQS1 Pad Control Register 1, offset: 0x2C4 */
  __IO uint32_t DDR_DQS_0;                         /**< Software MUX DDR DQS0 Pad Control Register 0, offset: 0x2C8 */
  __IO uint32_t DDR_RAS_B;                         /**< Software MUX DDR RAS Pad Control Register, offset: 0x2CC */
  __IO uint32_t DDR_WE_B;                          /**< Software MUX DDR WE Pad Control Register, offset: 0x2D0 */
  __IO uint32_t DDR_ODT_0;                         /**< Software MUX DDR ODT0 Pad Control Register, offset: 0x2D4 */
  __IO uint32_t DDR_ODT_1;                         /**< Software MUX DDR ODT1 Pad Control Register, offset: 0x2D8 */
  __IO uint32_t DUMMY_DDRBYTE1;                    /**< Software MUX Dummy DDRBYTE1 Pad Control Register, offset: 0x2DC */
  __IO uint32_t DUMMY_DDRBYTE2;                    /**< Software MUX Dummy DDRBYTE2 Pad Control Register, offset: 0x2E0 */
  __IO uint32_t DUMMY_QUADSPI0;                    /**< Software MUX Dummy QUADSPI0 Pad Control Register, offset: 0x2E4 */
  __IO uint32_t DUMMY_QUADSPI1;                    /**< Software MUX Dummy QUADSPI1 Pad Control Register, offset: 0x2E8 */
  __IO uint32_t CCM_AUD_EXT_CLK_SELECT_INPUT;      /**< CCM Audio External Clock Input Select Register, offset: 0x2EC */
  __IO uint32_t CCM_ENET_EXT_CLK_SELECT_INPUT;     /**< CCM Ethernet External Clock Input Select Register, offset: 0x2F0 */
  __IO uint32_t CCM_ENET_TS_CLK_SELECT_INPUT;      /**< CCM Ethernet TS Clock Input Select Register, offset: 0x2F4 */
  __IO uint32_t DSPI1_IPP_IND_SCK_SELECT_INPUT;    /**< DSPI1 SCK Input Select Register, offset: 0x2F8 */
  __IO uint32_t DSPI1_IPP_IND_SIN_SELECT_INPUT;    /**< DSPI1 SIN Input Select Register, offset: 0x2FC */
  __IO uint32_t DSPI1_IPP_IND_SS_B_SELECT_INPUT;   /**< DSPI1 SS Input Select Register, offset: 0x300 */
  __IO uint32_t ENET_SWIAHB_IPP_IND_MAC0_TIMER_0_SELECT_INPUT; /**< Ethernet MAC0 TIMER0 Input Select Register, offset: 0x304 */
  __IO uint32_t ENET_SWIAHB_IPP_IND_MAC0_TIMER_1_SELECT_INPUT; /**< Ethernet MAC0 TIMER1 Input Select Register, offset: 0x308 */
  __IO uint32_t ESAI_IPP_IND_FST_SELECT_INPUT;     /**< ESAI FST Input Select Register, offset: 0x30C */
  __IO uint32_t ESAI_IPP_IND_SCKT_SELECT_INPUT;    /**< ESAI SCKT Input Select Register, offset: 0x310 */
  __IO uint32_t ESAI_IPP_IND_SDO0_SELECT_INPUT;    /**< ESAI SDO0 Input Select Register, offset: 0x314 */
  __IO uint32_t ESAI_IPP_IND_SDO1_SELECT_INPUT;    /**< ESAI SDO1 Input Select Register, offset: 0x318 */
  __IO uint32_t ESAI_IPP_IND_SDO2_SDI3_SELECT_INPUT; /**< ESAI SDO2 Input Select Register, offset: 0x31C */
  __IO uint32_t ESAI_IPP_IND_SDO3_SDI2_SELECT_INPUT; /**< ESAI SDO3 Input Select Register, offset: 0x320 */
  __IO uint32_t ESAI_IPP_IND_SDO4_SDI1_SELECT_INPUT; /**< ESAI SDO4 Input Select Register, offset: 0x324 */
  __IO uint32_t ESAI_IPP_IND_SDO5_SDI0_SELECT_INPUT; /**< ESAI SDO5 Input Select Register, offset: 0x328 */
  __IO uint32_t FLEXTIMER1_IPP_IND_FTM_CH_0_SELECT_INPUT; /**< FlexTimer1 CH0 Input Select Register, offset: 0x32C */
  __IO uint32_t FLEXTIMER1_IPP_IND_FTM_CH_1_SELECT_INPUT; /**< FlexTimer1 CH1 Input Select Register, offset: 0x330 */
  __IO uint32_t FLEXTIMER1_IPP_IND_FTM_PHA_SELECT_INPUT; /**< FlexTimer1 PHA Input Select Register, offset: 0x334 */
  __IO uint32_t FLEXTIMER1_IPP_IND_FTM_PHB_SELECT_INPUT; /**< FlexTimer1 PHB Input Select Register, offset: 0x338 */
  __IO uint32_t I2C0_IPP_SCL_IND_SELECT_INPUT;     /**< I2C0 SCL Input Select Register, offset: 0x33C */
  __IO uint32_t I2C0_IPP_SDA_IND_SELECT_INPUT;     /**< I2C0 SDA Input Select Register, offset: 0x340 */
  __IO uint32_t I2C1_IPP_SCL_IND_SELECT_INPUT;     /**< I2C1 SCL Input Select Register, offset: 0x344 */
  __IO uint32_t I2C1_IPP_SDA_IND_SELECT_INPUT;     /**< I2C1 SDA Input Select Register, offset: 0x348 */
  __IO uint32_t I2C2_IPP_SCL_IND_SELECT_INPUT;     /**< I2C2 SCL Input Select Register, offset: 0x34C */
  __IO uint32_t I2C2_IPP_SDA_IND_SELECT_INPUT;     /**< I2C2 SDA Input Select Register, offset: 0x350 */
  __IO uint32_t MLB_TOP_MLBCLK_IN_SELECT_INPUT;    /**< MediaLB Clock Input Select Register, offset: 0x354 */
  __IO uint32_t MLB_TOP_MLBDAT_IN_SELECT_INPUT;    /**< MediaLB Data Input Select Register, offset: 0x358 */
  __IO uint32_t MLB_TOP_MLBSIG_IN_SELECT_INPUT;    /**< MediaLB Signal Input Select Register, offset: 0x35C */
  __IO uint32_t SAI1_IPP_IND_SAI_TXSYNC_SELECT_INPUT; /**< SAI1 TXSYNC Input Select Register, offset: 0x360 */
  __IO uint32_t SAI2_IPP_IND_SAI_RXBCLK_SELECT_INPUT; /**< SAI2 RXBCLK Input Select Register, offset: 0x364 */
  __IO uint32_t SAI2_IPP_IND_SAI_RXDATA_0_SELECT_INPUT; /**< SAI2 RXDATA0 Input Select Register, offset: 0x368 */
  __IO uint32_t SAI2_IPP_IND_SAI_RXSYNC_SELECT_INPUT; /**< SAI2 RXSYNC Input Select Register, offset: 0x36C */
  __IO uint32_t SAI2_IPP_IND_SAI_TXBCLK_SELECT_INPUT; /**< SAI2 TXBLCK Input Select Register, offset: 0x370 */
  __IO uint32_t SAI2_IPP_IND_SAI_TXSYNC_SELECT_INPUT; /**< SAI2 TXSYNC Input Select Register, offset: 0x374 */
  __IO uint32_t SCI_FLX1_IPP_IND_CTS_B_SELECT_INPUT; /**< UART FLX1 CTS Input Select Register, offset: 0x378 */
  __IO uint32_t SCI_FLX1_IPP_IND_SCI_RX_SELECT_INPUT; /**< UART FLX1 RX Input Select Register, offset: 0x37C */
  __IO uint32_t SCI_FLX1_IPP_IND_SCI_TX_SELECT_INPUT; /**< UART FLX1 TX Input Select Register, offset: 0x380 */
  __IO uint32_t SCI_FLX2_IPP_IND_CTS_B_SELECT_INPUT; /**< UART FLX2 CTS Input Select Register, offset: 0x384 */
  __IO uint32_t SCI_FLX2_IPP_IND_SCI_RX_SELECT_INPUT; /**< UART FLX2 RX Input Select Register, offset: 0x388 */
  __IO uint32_t SCI_FLX2_IPP_IND_SCI_TX_SELECT_INPUT; /**< UART FLX2 TX Input Select Register, offset: 0x38C */
  __IO uint32_t SCI_FLX3_IPP_IND_SCI_RX_SELECT_INPUT; /**< UART FLX3 RX Input Select Register, offset: 0x390 */
  __IO uint32_t SCI_FLX3_IPP_IND_SCI_TX_SELECT_INPUT; /**< UART FLX3 TX Input Select Register, offset: 0x394 */
  __IO uint32_t SRC_IPP_BOOT_CFG_18_SELECT_INPUT;  /**< BOOTCFG18 Input Select Register, offset: 0x398 */
  __IO uint32_t SRC_IPP_BOOT_CFG_19_SELECT_INPUT;  /**< BOOTCFG19 Input Select Register, offset: 0x39C */
  __IO uint32_t SRC_IPP_BOOT_CFG_20_SELECT_INPUT;  /**< BOOTCFG20 Input Select Register, offset: 0x3A0 */
  __IO uint32_t VIDEO_IN0_IPP_IND_DE_SELECT_INPUT; /**< Video Decoder Input Select Register, offset: 0x3A4 */
  __IO uint32_t VIDEO_IN0_IPP_IND_FID_SELECT_INPUT; /**< Video IN0 Input Select Register, offset: 0x3A8 */
  __IO uint32_t VIDEO_IN0_IPP_IND_PIX_CLK_SELECT_INPUT; /**< Video PIXCLK Input Select Register, offset: 0x3AC */
} IOMUXC_Type;



/******Configuration IOMUX*/
#define IOMUXC_BASE                              (0x40048000u)
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
