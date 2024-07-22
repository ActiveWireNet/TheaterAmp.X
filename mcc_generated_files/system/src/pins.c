/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
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

#include "../pins.h"

void (*SWITCH_POWER_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0xF6;
    LATB = 0x3B;
    LATC = 0x23;

    /**
    TRISx registers
    */
    TRISA = 0x9;
    TRISB = 0xC0;
    TRISC = 0xD0;
    TRISE = 0x8;

    /**
    ANSELx registers
    */
    ANSELA = 0x0;
    ANSELB = 0xC0;
    ANSELC = 0xC0;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUE = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    ODCONE = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCONE = 0x0;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLE = 0x8;

    /**
    PPS registers
    */

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x10;
    IOCCN = 0x10;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    SWITCH_POWER_SetInterruptHandler(SWITCH_POWER_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin SWITCH_POWER}
    if(IOCCFbits.IOCCF4 == 1)
    {
        SWITCH_POWER_ISR();  
    }
}
   
/**
   SWITCH_POWER Interrupt Service Routine
*/
void SWITCH_POWER_ISR(void) {

    // Add custom IOCCF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(SWITCH_POWER_InterruptHandler)
    {
        SWITCH_POWER_InterruptHandler();
    }
    IOCCFbits.IOCCF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF4 at application runtime
*/
void SWITCH_POWER_SetInterruptHandler(void (* InterruptHandler)(void)){
    SWITCH_POWER_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF4
*/
void SWITCH_POWER_DefaultInterruptHandler(void){
    // add your SWITCH_POWER interrupt custom code
    // or set custom function using SWITCH_POWER_SetInterruptHandler()
}
/**
 End of File
*/