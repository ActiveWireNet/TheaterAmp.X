/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define CLIP_DETECT_TRIS                 TRISAbits.TRISA0
#define CLIP_DETECT_LAT                  LATAbits.LATA0
#define CLIP_DETECT_PORT                 PORTAbits.RA0
#define CLIP_DETECT_WPU                  WPUAbits.WPUA0
#define CLIP_DETECT_OD                   ODCONAbits.ODCA0
#define CLIP_DETECT_ANS                  ANSELAbits.ANSA0
#define CLIP_DETECT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define CLIP_DETECT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define CLIP_DETECT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define CLIP_DETECT_GetValue()           PORTAbits.RA0
#define CLIP_DETECT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define CLIP_DETECT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define CLIP_DETECT_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define CLIP_DETECT_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define CLIP_DETECT_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define CLIP_DETECT_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define CLIP_DETECT_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define CLIP_DETECT_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define RESET_ALL_TRIS                 TRISAbits.TRISA1
#define RESET_ALL_LAT                  LATAbits.LATA1
#define RESET_ALL_PORT                 PORTAbits.RA1
#define RESET_ALL_WPU                  WPUAbits.WPUA1
#define RESET_ALL_OD                   ODCONAbits.ODCA1
#define RESET_ALL_ANS                  ANSELAbits.ANSA1
#define RESET_ALL_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RESET_ALL_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RESET_ALL_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RESET_ALL_GetValue()           PORTAbits.RA1
#define RESET_ALL_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RESET_ALL_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RESET_ALL_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define RESET_ALL_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define RESET_ALL_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define RESET_ALL_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define RESET_ALL_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define RESET_ALL_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define PS1_ON_48V_TRIS                 TRISAbits.TRISA2
#define PS1_ON_48V_LAT                  LATAbits.LATA2
#define PS1_ON_48V_PORT                 PORTAbits.RA2
#define PS1_ON_48V_WPU                  WPUAbits.WPUA2
#define PS1_ON_48V_OD                   ODCONAbits.ODCA2
#define PS1_ON_48V_ANS                  ANSELAbits.ANSA2
#define PS1_ON_48V_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PS1_ON_48V_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PS1_ON_48V_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PS1_ON_48V_GetValue()           PORTAbits.RA2
#define PS1_ON_48V_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PS1_ON_48V_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PS1_ON_48V_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PS1_ON_48V_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PS1_ON_48V_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PS1_ON_48V_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PS1_ON_48V_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define PS1_ON_48V_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define FAULT_DETECT_TRIS                 TRISAbits.TRISA3
#define FAULT_DETECT_LAT                  LATAbits.LATA3
#define FAULT_DETECT_PORT                 PORTAbits.RA3
#define FAULT_DETECT_WPU                  WPUAbits.WPUA3
#define FAULT_DETECT_OD                   ODCONAbits.ODCA3
#define FAULT_DETECT_ANS                  ANSELAbits.ANSA3
#define FAULT_DETECT_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define FAULT_DETECT_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define FAULT_DETECT_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define FAULT_DETECT_GetValue()           PORTAbits.RA3
#define FAULT_DETECT_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define FAULT_DETECT_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define FAULT_DETECT_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define FAULT_DETECT_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define FAULT_DETECT_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define FAULT_DETECT_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define FAULT_DETECT_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define FAULT_DETECT_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
// get/set IO_RA4 aliases
#define AMP_ON1_TRIS                 TRISAbits.TRISA4
#define AMP_ON1_LAT                  LATAbits.LATA4
#define AMP_ON1_PORT                 PORTAbits.RA4
#define AMP_ON1_WPU                  WPUAbits.WPUA4
#define AMP_ON1_OD                   ODCONAbits.ODCA4
#define AMP_ON1_ANS                  ANSELAbits.ANSA4
#define AMP_ON1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define AMP_ON1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define AMP_ON1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define AMP_ON1_GetValue()           PORTAbits.RA4
#define AMP_ON1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define AMP_ON1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define AMP_ON1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define AMP_ON1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define AMP_ON1_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define AMP_ON1_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define AMP_ON1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define AMP_ON1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RA5 aliases
#define AMP_ON2_TRIS                 TRISAbits.TRISA5
#define AMP_ON2_LAT                  LATAbits.LATA5
#define AMP_ON2_PORT                 PORTAbits.RA5
#define AMP_ON2_WPU                  WPUAbits.WPUA5
#define AMP_ON2_OD                   ODCONAbits.ODCA5
#define AMP_ON2_ANS                  ANSELAbits.ANSA5
#define AMP_ON2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define AMP_ON2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define AMP_ON2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define AMP_ON2_GetValue()           PORTAbits.RA5
#define AMP_ON2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define AMP_ON2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define AMP_ON2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define AMP_ON2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define AMP_ON2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define AMP_ON2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define AMP_ON2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define AMP_ON2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RA6 aliases
#define AMP_ON4_TRIS                 TRISAbits.TRISA6
#define AMP_ON4_LAT                  LATAbits.LATA6
#define AMP_ON4_PORT                 PORTAbits.RA6
#define AMP_ON4_WPU                  WPUAbits.WPUA6
#define AMP_ON4_OD                   ODCONAbits.ODCA6
#define AMP_ON4_ANS                  ANSELAbits.ANSA6
#define AMP_ON4_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define AMP_ON4_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define AMP_ON4_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define AMP_ON4_GetValue()           PORTAbits.RA6
#define AMP_ON4_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define AMP_ON4_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define AMP_ON4_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define AMP_ON4_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define AMP_ON4_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define AMP_ON4_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define AMP_ON4_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define AMP_ON4_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)
// get/set IO_RA7 aliases
#define AMP_ON3_TRIS                 TRISAbits.TRISA7
#define AMP_ON3_LAT                  LATAbits.LATA7
#define AMP_ON3_PORT                 PORTAbits.RA7
#define AMP_ON3_WPU                  WPUAbits.WPUA7
#define AMP_ON3_OD                   ODCONAbits.ODCA7
#define AMP_ON3_ANS                  ANSELAbits.ANSA7
#define AMP_ON3_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define AMP_ON3_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define AMP_ON3_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define AMP_ON3_GetValue()           PORTAbits.RA7
#define AMP_ON3_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define AMP_ON3_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define AMP_ON3_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define AMP_ON3_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define AMP_ON3_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define AMP_ON3_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define AMP_ON3_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define AMP_ON3_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)
// get/set IO_RB0 aliases
#define PS2_RELAY_TRIS                 TRISBbits.TRISB0
#define PS2_RELAY_LAT                  LATBbits.LATB0
#define PS2_RELAY_PORT                 PORTBbits.RB0
#define PS2_RELAY_WPU                  WPUBbits.WPUB0
#define PS2_RELAY_OD                   ODCONBbits.ODCB0
#define PS2_RELAY_ANS                  ANSELBbits.ANSB0
#define PS2_RELAY_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define PS2_RELAY_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define PS2_RELAY_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define PS2_RELAY_GetValue()           PORTBbits.RB0
#define PS2_RELAY_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define PS2_RELAY_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define PS2_RELAY_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define PS2_RELAY_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define PS2_RELAY_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define PS2_RELAY_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define PS2_RELAY_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define PS2_RELAY_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)
// get/set IO_RB1 aliases
#define LED_POWER_TRIS                 TRISBbits.TRISB1
#define LED_POWER_LAT                  LATBbits.LATB1
#define LED_POWER_PORT                 PORTBbits.RB1
#define LED_POWER_WPU                  WPUBbits.WPUB1
#define LED_POWER_OD                   ODCONBbits.ODCB1
#define LED_POWER_ANS                  ANSELBbits.ANSB1
#define LED_POWER_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_POWER_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_POWER_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_POWER_GetValue()           PORTBbits.RB1
#define LED_POWER_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_POWER_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_POWER_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_POWER_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_POWER_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED_POWER_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED_POWER_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED_POWER_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)
// get/set IO_RB2 aliases
#define LED_STANDBY_TRIS                 TRISBbits.TRISB2
#define LED_STANDBY_LAT                  LATBbits.LATB2
#define LED_STANDBY_PORT                 PORTBbits.RB2
#define LED_STANDBY_WPU                  WPUBbits.WPUB2
#define LED_STANDBY_OD                   ODCONBbits.ODCB2
#define LED_STANDBY_ANS                  ANSELBbits.ANSB2
#define LED_STANDBY_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_STANDBY_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_STANDBY_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_STANDBY_GetValue()           PORTBbits.RB2
#define LED_STANDBY_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_STANDBY_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_STANDBY_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_STANDBY_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_STANDBY_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED_STANDBY_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED_STANDBY_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED_STANDBY_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)
// get/set IO_RB3 aliases
#define LED_TEMP_TRIS                 TRISBbits.TRISB3
#define LED_TEMP_LAT                  LATBbits.LATB3
#define LED_TEMP_PORT                 PORTBbits.RB3
#define LED_TEMP_WPU                  WPUBbits.WPUB3
#define LED_TEMP_OD                   ODCONBbits.ODCB3
#define LED_TEMP_ANS                  ANSELBbits.ANSB3
#define LED_TEMP_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_TEMP_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_TEMP_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_TEMP_GetValue()           PORTBbits.RB3
#define LED_TEMP_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_TEMP_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_TEMP_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_TEMP_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_TEMP_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_TEMP_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_TEMP_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_TEMP_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)
// get/set IO_RB4 aliases
#define LED_FAULT_TRIS                 TRISBbits.TRISB4
#define LED_FAULT_LAT                  LATBbits.LATB4
#define LED_FAULT_PORT                 PORTBbits.RB4
#define LED_FAULT_WPU                  WPUBbits.WPUB4
#define LED_FAULT_OD                   ODCONBbits.ODCB4
#define LED_FAULT_ANS                  ANSELBbits.ANSB4
#define LED_FAULT_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_FAULT_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_FAULT_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_FAULT_GetValue()           PORTBbits.RB4
#define LED_FAULT_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_FAULT_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_FAULT_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_FAULT_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_FAULT_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_FAULT_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_FAULT_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_FAULT_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define LED_CLIP_TRIS                 TRISBbits.TRISB5
#define LED_CLIP_LAT                  LATBbits.LATB5
#define LED_CLIP_PORT                 PORTBbits.RB5
#define LED_CLIP_WPU                  WPUBbits.WPUB5
#define LED_CLIP_OD                   ODCONBbits.ODCB5
#define LED_CLIP_ANS                  ANSELBbits.ANSB5
#define LED_CLIP_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_CLIP_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_CLIP_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_CLIP_GetValue()           PORTBbits.RB5
#define LED_CLIP_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_CLIP_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_CLIP_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_CLIP_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_CLIP_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED_CLIP_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED_CLIP_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_CLIP_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RC0 aliases
#define AMP_ON5_TRIS                 TRISCbits.TRISC0
#define AMP_ON5_LAT                  LATCbits.LATC0
#define AMP_ON5_PORT                 PORTCbits.RC0
#define AMP_ON5_WPU                  WPUCbits.WPUC0
#define AMP_ON5_OD                   ODCONCbits.ODCC0
#define AMP_ON5_ANS                  ANSELCbits.ANSC0
#define AMP_ON5_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define AMP_ON5_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define AMP_ON5_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define AMP_ON5_GetValue()           PORTCbits.RC0
#define AMP_ON5_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define AMP_ON5_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define AMP_ON5_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define AMP_ON5_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define AMP_ON5_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define AMP_ON5_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define AMP_ON5_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define AMP_ON5_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define AMP_ON6_TRIS                 TRISCbits.TRISC1
#define AMP_ON6_LAT                  LATCbits.LATC1
#define AMP_ON6_PORT                 PORTCbits.RC1
#define AMP_ON6_WPU                  WPUCbits.WPUC1
#define AMP_ON6_OD                   ODCONCbits.ODCC1
#define AMP_ON6_ANS                  ANSELCbits.ANSC1
#define AMP_ON6_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define AMP_ON6_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define AMP_ON6_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define AMP_ON6_GetValue()           PORTCbits.RC1
#define AMP_ON6_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define AMP_ON6_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define AMP_ON6_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define AMP_ON6_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define AMP_ON6_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define AMP_ON6_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define AMP_ON6_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define AMP_ON6_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define FAN1_TRIS                 TRISCbits.TRISC2
#define FAN1_LAT                  LATCbits.LATC2
#define FAN1_PORT                 PORTCbits.RC2
#define FAN1_WPU                  WPUCbits.WPUC2
#define FAN1_OD                   ODCONCbits.ODCC2
#define FAN1_ANS                  ANSELCbits.ANSC2
#define FAN1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define FAN1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define FAN1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define FAN1_GetValue()           PORTCbits.RC2
#define FAN1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define FAN1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define FAN1_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define FAN1_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define FAN1_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define FAN1_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define FAN1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define FAN1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define FAN2_TRIS                 TRISCbits.TRISC3
#define FAN2_LAT                  LATCbits.LATC3
#define FAN2_PORT                 PORTCbits.RC3
#define FAN2_WPU                  WPUCbits.WPUC3
#define FAN2_OD                   ODCONCbits.ODCC3
#define FAN2_ANS                  ANSELCbits.ANSC3
#define FAN2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define FAN2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define FAN2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define FAN2_GetValue()           PORTCbits.RC3
#define FAN2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define FAN2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define FAN2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define FAN2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define FAN2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define FAN2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define FAN2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define FAN2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define SWITCH_POWER_TRIS                 TRISCbits.TRISC4
#define SWITCH_POWER_LAT                  LATCbits.LATC4
#define SWITCH_POWER_PORT                 PORTCbits.RC4
#define SWITCH_POWER_WPU                  WPUCbits.WPUC4
#define SWITCH_POWER_OD                   ODCONCbits.ODCC4
#define SWITCH_POWER_ANS                  ANSELCbits.ANSC4
#define SWITCH_POWER_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SWITCH_POWER_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SWITCH_POWER_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SWITCH_POWER_GetValue()           PORTCbits.RC4
#define SWITCH_POWER_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SWITCH_POWER_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SWITCH_POWER_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SWITCH_POWER_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SWITCH_POWER_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SWITCH_POWER_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SWITCH_POWER_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SWITCH_POWER_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
#define RC4_SetInterruptHandler  SWITCH_POWER_SetInterruptHandler
// get/set IO_RC5 aliases
#define PS2_ON_48V_TRIS                 TRISCbits.TRISC5
#define PS2_ON_48V_LAT                  LATCbits.LATC5
#define PS2_ON_48V_PORT                 PORTCbits.RC5
#define PS2_ON_48V_WPU                  WPUCbits.WPUC5
#define PS2_ON_48V_OD                   ODCONCbits.ODCC5
#define PS2_ON_48V_ANS                  ANSELCbits.ANSC5
#define PS2_ON_48V_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PS2_ON_48V_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PS2_ON_48V_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PS2_ON_48V_GetValue()           PORTCbits.RC5
#define PS2_ON_48V_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PS2_ON_48V_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PS2_ON_48V_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PS2_ON_48V_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PS2_ON_48V_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define PS2_ON_48V_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define PS2_ON_48V_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define PS2_ON_48V_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SWITCH_POWER pin functionality
 * @param none
 * @return none
 */
void SWITCH_POWER_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SWITCH_POWER pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SWITCH_POWER at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SWITCH_POWER_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SWITCH_POWER pin.
 *        This is a dynamic interrupt handler to be used together with the SWITCH_POWER_SetInterruptHandler() method.
 *        This handler is called every time the SWITCH_POWER ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SWITCH_POWER_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SWITCH_POWER pin. 
 *        This is a predefined interrupt handler to be used together with the SWITCH_POWER_SetInterruptHandler() method.
 *        This handler is called every time the SWITCH_POWER ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SWITCH_POWER_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/