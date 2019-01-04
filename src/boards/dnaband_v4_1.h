/**************************************************************************/
/*!
    @file     dnaband_v4_1.h
    @author   hathach

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) ${year}, Adafruit Industries (adafruit.com)
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/

#ifndef _DNABAND_V4_1_H
#define _DNABAND_V4_1_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER    2
#define LED_PRIMARY_PIN          16
#define LED_SECONDARY_PIN        18
#define LED_STATE_ON   1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER 2
#define BUTTON_1       23
#define BUTTON_2       26
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* UART	
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER  12
#define TX_PIN_NUMBER  14
#define CTS_PIN_NUMBER 25
#define RTS_PIN_NUMBER 22
#define HWFC           false

// Used as model string in OTA mode
#define DIS_MANUFACTURER  "DnaNudge Limited"
#define DIS_MODEL      "DnaBand V4.1"

#define PRODUCT_NAME      "DnaNudge DnaBand V4.1"

#endif // _DNABAND_V4_1_H
