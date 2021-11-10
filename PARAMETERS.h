/* 
 * File:   PARAMETERS.h
 * Author: Usuario
 *
 * Created on 02 October 2021, 16:55
 */

#ifndef PARAMETERS_H
#define	PARAMETERS_H

#ifdef	__cplusplus
extern "C" {
#endif

//AS STATES
#define AS_OFF          0
#define AS_READY        1
#define AS_DRIVING      2
#define AS_EMERGENCY    3
#define AS_FINISHED     4
    
    
#define TRUE    0x01
#define FALSE   0x00
    
//VARIABLES
extern unsigned char ucASState;
extern unsigned char ucASState_prev;
#ifdef	__cplusplus
}
#endif

#endif	/* PARAMETERS_H */

