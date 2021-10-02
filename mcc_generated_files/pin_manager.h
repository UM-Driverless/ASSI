/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F26Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Y_SIGNAL aliases
#define Y_SIGNAL_TRIS                 TRISBbits.TRISB1
#define Y_SIGNAL_LAT                  LATBbits.LATB1
#define Y_SIGNAL_PORT                 PORTBbits.RB1
#define Y_SIGNAL_WPU                  WPUBbits.WPUB1
#define Y_SIGNAL_OD                   ODCONBbits.ODCB1
#define Y_SIGNAL_ANS                  ANSELBbits.ANSELB1
#define Y_SIGNAL_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Y_SIGNAL_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Y_SIGNAL_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Y_SIGNAL_GetValue()           PORTBbits.RB1
#define Y_SIGNAL_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Y_SIGNAL_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Y_SIGNAL_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Y_SIGNAL_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Y_SIGNAL_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define Y_SIGNAL_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define Y_SIGNAL_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define Y_SIGNAL_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set B_SIGNAL aliases
#define B_SIGNAL_TRIS                 TRISBbits.TRISB2
#define B_SIGNAL_LAT                  LATBbits.LATB2
#define B_SIGNAL_PORT                 PORTBbits.RB2
#define B_SIGNAL_WPU                  WPUBbits.WPUB2
#define B_SIGNAL_OD                   ODCONBbits.ODCB2
#define B_SIGNAL_ANS                  ANSELBbits.ANSELB2
#define B_SIGNAL_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define B_SIGNAL_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define B_SIGNAL_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define B_SIGNAL_GetValue()           PORTBbits.RB2
#define B_SIGNAL_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define B_SIGNAL_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define B_SIGNAL_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define B_SIGNAL_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define B_SIGNAL_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define B_SIGNAL_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define B_SIGNAL_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define B_SIGNAL_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set SPEAKER aliases
#define SPEAKER_TRIS                 TRISCbits.TRISC3
#define SPEAKER_LAT                  LATCbits.LATC3
#define SPEAKER_PORT                 PORTCbits.RC3
#define SPEAKER_WPU                  WPUCbits.WPUC3
#define SPEAKER_OD                   ODCONCbits.ODCC3
#define SPEAKER_ANS                  ANSELCbits.ANSELC3
#define SPEAKER_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SPEAKER_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SPEAKER_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SPEAKER_GetValue()           PORTCbits.RC3
#define SPEAKER_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SPEAKER_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SPEAKER_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SPEAKER_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SPEAKER_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SPEAKER_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SPEAKER_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SPEAKER_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set STBY aliases
#define STBY_TRIS                 TRISCbits.TRISC4
#define STBY_LAT                  LATCbits.LATC4
#define STBY_PORT                 PORTCbits.RC4
#define STBY_WPU                  WPUCbits.WPUC4
#define STBY_OD                   ODCONCbits.ODCC4
#define STBY_ANS                  ANSELCbits.ANSELC4
#define STBY_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define STBY_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define STBY_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define STBY_GetValue()           PORTCbits.RC4
#define STBY_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define STBY_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define STBY_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define STBY_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define STBY_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define STBY_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define STBY_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define STBY_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/