/*******************************************************************************
Copyright 2016 Microchip Technology Inc. (www.microchip.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

To request to license the code under the MLA license (www.microchip.com/mla_license), 
please contact mla_licensing@microchip.com
*******************************************************************************/

#ifndef __HARDWARE_PROFILE_H_
#define __HARDWARE_PROFILE_H_


/** I N C L U D E S *************************************************/
#include "usb_config.h"

//LED definition, applicable if using ENABLE_USB_LED_BLINK_STATUS option in usb_config.h
#define mLED1       TRISCbits.TRISC6
/** SWITCH *********************************************************/
#define sw2                 PORTCbits.RC7

/** T R I S *********************************************************/
#define INPUT_PIN           1
#define OUTPUT_PIN          0


#endif //__HARDWARE_PROFILE_H_
