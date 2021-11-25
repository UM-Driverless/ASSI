/* 
 * File:   TEMPORIZATIONS.h
 * Author: 93Urbano
 *
 * Created on 25 de noviembre de 2021, 15:55
 */

#ifndef TEMPORIZATIONS_H
#define	TEMPORIZATIONS_H

#ifdef	__cplusplus
extern "C" {
#endif

//CONSTANTES
#define MINS_30 1800    
#define MINS_15 900    
#define MINS_1 60
#define SEC_30 30
    
//VARIABLES    
unsigned int uiCount30min;  
unsigned int uiCount15min;
unsigned int uiCount1min;
unsigned int uiCount30s;

//FUNCIONES
void TEMPORIZATION_10ms (void);
void TEMPORIZATION_100ms (void);
void TEMPORIZATION_1s (void);
void TEMPORIZATION_30s (void);
void TEMPORIZATION_1mins (void);
void TEMPORIZATION_15mins (void);
void TEMPORIZATION_30mins (void);


#ifdef	__cplusplus
}
#endif

#endif	/* TEMPORIZATIONS_H */

