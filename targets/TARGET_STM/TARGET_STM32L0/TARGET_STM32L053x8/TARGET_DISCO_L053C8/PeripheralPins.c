/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#include "PeripheralPins.h"
#include "mbed_toolchain.h"

//==============================================================================
// Notes
//
// - The pins mentioned Px_y_ALTz are alternative possibilities which use other
//   HW peripheral instances. You can use them the same way as any other "normal"
//   pin (i.e. PwmOut pwm(PA_7_ALT0);). These pins are not displayed on the board
//   pinout image on mbed.org.
//
// - The pins which are connected to other components present on the board have
//   the comment "Connected to xxx". The pin function may not work properly in this
//   case. These pins may not be displayed on the board pinout image on mbed.org.
//   Please read the board reference manual and schematic for more information.
//
// - Warning: pins connected to the default STDIO_UART_TX and STDIO_UART_RX pins are commented
//   See https://os.mbed.com/teams/ST/wiki/STDIO for more information.
//
//==============================================================================


//*** ADC ***

MBED_WEAK const PinMap PinMap_ADC[] = {
    {PA_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0 // Connected to B1 [Blue PushButton]
    {PA_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1 // Connected to MFX_WAKEUP
    {PA_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2 // Connected to TSC_G1_IO3
    {PA_3,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3 // Connected to TSC_G1_IO4
    {PA_4,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
    {PA_5,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5 // Connected to LD_R [LD4 Red Led]
    {PA_6,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6 // Connected to TSC_G2_IO3
    {PA_7,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7 // Connected to TSC_G2_IO4
    {PB_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC_IN8 // Connected to TSC_G3_IO2
    {PB_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9 // Connected to TSC_G3_IO3
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_ADC_Internal[] = {
    {ADC_TEMP,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {ADC_VREF,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
    {ADC_VLCD,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)},
    {NC, NC, 0}
};

//*** DAC ***

MBED_WEAK const PinMap PinMap_DAC[] = {
    {PA_4,       DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1
    {NC, NC, 0}
};

//*** I2C ***

MBED_WEAK const PinMap PinMap_I2C_SDA[] = {
    {PB_7,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_9,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // Connected to MFX_I2C_SDA
    {PB_11,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C2)}, // Connected to ePD1_D/C [ePaper_D/C\#]
    {PB_14,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)}, // Connected to NFC_MISO
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_I2C_SCL[] = {
    {PB_6,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_8,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // Connected to MFX_I2C_SCL
    {PB_10,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C2)}, // Connected to ePD1_PWR_ENn [ePaper_PowerOn]
    {PB_13,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)}, // Connected to NFC_SCK
    {NC, NC, 0}
};

//*** PWM ***

// TIM21 cannot be used because already used by the us_ticker
MBED_WEAK const PinMap PinMap_PWM[] = {
    {PA_0,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1 // Connected to B1 [Blue PushButton]
    {PA_1,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2 // Connected to MFX_WAKEUP
    {PA_2,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3 // Connected to TSC_G1_IO3
//  {PA_2,       PWM_21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 1, 0)}, // TIM21_CH1 // Connected to TSC_G1_IO3
    {PA_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4 // Connected to TSC_G1_IO4
//  {PA_3,       PWM_21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 2, 0)}, // TIM21_CH2 // Connected to TSC_G1_IO4
    {PA_5,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 1, 0)}, // TIM2_CH1 // Connected to LD_R [LD4 Red Led]
    {PA_6,       PWM_22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM22, 1, 0)}, // TIM22_CH1 // Connected to TSC_G2_IO3
    {PA_7,       PWM_22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM22, 2, 0)}, // TIM22_CH2 // Connected to TSC_G2_IO4
    {PA_15,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 1, 0)}, // TIM2_CH1 // Connected to ePD1_CS [ePaper_CS\#]
    {PB_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2 // Connected to ePD1_SCK [ePaper_SCK]
    {PB_4,       PWM_22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 1, 0)}, // TIM22_CH1 // Connected to LD_G [LD3 Green Led]
    {PB_5,       PWM_22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 2, 0)}, // TIM22_CH2 // Connected to ePD1_MOSI [ePaper_MOSI]
    {PB_10,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3 // Connected to ePD1_PWR_ENn [ePaper_PowerOn]
    {PB_11,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4 // Connected to ePD1_D/C [ePaper_D/C\#]
//  {PB_13,      PWM_21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM21, 1, 0)}, // TIM21_CH1 // Connected to NFC_SCK
//  {PB_14,      PWM_21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM21, 2, 0)}, // TIM21_CH2 // Connected to NFC_MISO
    {NC, NC, 0}
};

//*** SERIAL ***

MBED_WEAK const PinMap PinMap_UART_TX[] = {
    {PA_2,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to TSC_G1_IO3
    {PA_9,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)}, // Connected to STDIO_UART_TX
    {PA_14,      UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to SWCLK
    {PB_6,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB_10,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to ePD1_PWR_ENn [ePaper_PowerOn]
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RX[] = {
    {PA_3,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to TSC_G1_IO4
    {PA_10,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)}, // Connected to STDIO_UART_RX
    {PA_15,      UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to ePD1_CS [ePaper_CS\#]
    {PB_7,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB_11,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to ePD1_D/C [ePaper_D/C\#]
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RTS[] = {
    {PA_1,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to MFX_WAKEUP
    {PA_12,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)}, // Connected to USB1_DP
    {PB_1,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to TSC_G3_IO3
    {PB_12,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_LPUART1)}, // Connected to NFC_NSS
    {PB_14,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to NFC_MISO
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_CTS[] = {
    {PA_0,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Connected to B1 [Blue PushButton]
    {PA_6,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to TSC_G2_IO3
    {PA_11,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)}, // Connected to USB1_DM
    {PB_13,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)}, // Connected to NFC_SCK
    {NC, NC, 0}
};

//*** SPI ***

MBED_WEAK const PinMap PinMap_SPI_MOSI[] = {
    {PA_7,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to TSC_G2_IO4
    {PA_12,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to USB1_DP
    {PB_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to ePD1_MOSI [ePaper_MOSI]
    {PB_15,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)}, // Connected to NFC_MOSI
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_MISO[] = {
    {PA_6,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to TSC_G2_IO3
    {PA_11,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to USB1_DM
    {PB_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to LD_G [LD3 Green Led]
    {PB_14,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)}, // Connected to NFC_MISO
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SCLK[] = {
    {PA_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to LD_R [LD4 Red Led]
    {PB_3,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to ePD1_SCK [ePaper_SCK]
    {PB_10,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)}, // Connected to ePD1_PWR_ENn [ePaper_PowerOn]
    {PB_13,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)}, // Connected to NFC_SCK
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SSEL[] = {
    {PA_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PA_15,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)}, // Connected to ePD1_CS [ePaper_CS\#]
    {PB_9,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)}, // Connected to MFX_I2C_SDA
    {PB_12,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)}, // Connected to NFC_NSS
    {NC, NC, 0}
};
