/* 
 * File:   LEDS.c
 * Author: Usuario
 *
 * Created on October 2, 2021, 1:10 PM
 */

#include "LEDS.h"
#include "PARAMETERS.h"
#include "mcc_generated_files/pin_manager.h"

void LEDS(void)
{
    switch (ucASState)
        {
            //off
            case AS_OFF:
                Y_SIGNAL_SetLow();
                B_SIGNAL_SetLow();
                break;
            //ready
            case AS_READY:
                B_SIGNAL_SetLow();
                Y_SIGNAL_SetHigh();
                break;
            //driving
            case AS_DRIVING:
                B_SIGNAL_SetLow();
                Y_SIGNAL_Toggle();
                break;
            //Emergency
            case AS_EMERGENCY:
                Y_SIGNAL_SetLow();
                B_SIGNAL_Toggle();
                break;
            //Finished
            case AS_FINISHED:
                Y_SIGNAL_SetLow();
                B_SIGNAL_SetHigh();
                break;
        }
}

void LEDTIMER(void)
{
    if (ucASState == AS_DRIVING || ucASState == AS_EMERGENCY)
    {
        LEDS();
    }
}