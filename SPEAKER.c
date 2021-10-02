/* 
 * File:   SPEAKER.c
 * Author: Usuario
 *
 * Created on October 2, 2021, 1:10 PM
 */

#include "SPEAKER.h"
#include "PARAMETERS.h"
#include "mcc_generated_files/pin_manager.h"

unsigned char ucFlagEmergencySpeaker;
unsigned char ucSpeakerCount = 0;

void SPEAKER (void)
{
    if (ucASState == AS_EMERGENCY )
    {
        SPEAKER_Toggle();
    }
}