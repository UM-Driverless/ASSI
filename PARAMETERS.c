/* 
 * File:   PARAMETERS.c
 * Author: Usuario
 *
 * Created on 02 October 2021, 16:55
 */

#include "PARAMETERS.h"


//VARIABLES
unsigned char ucASState;
unsigned char ucASState_prev;
unsigned char ucASSIName;


void PARAMETERS_Init(void)
{
    ucASSIName = ASSI_CENTER;
}