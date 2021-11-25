/* 
 * File:   TEMPORIZATIONS.h
 * Author: 93Urbano
 *
 * Created on 25 de noviembre de 2021, 15:55
 */


#include "TEMPORIZATIONS.h"


//VARIABLES    
unsigned int uiCount30min;  
unsigned int uiCount15min;
unsigned int uiCount1min;
unsigned int uiCount30s;


//FUNCIONES
void TEMPORIZATION_1s (void)
{    
    if (uiCount30min++ > MINS_30)
    {
        TEMPORIZATION_30mins();
        uiCount30min = 0;
    }
    else if (uiCount15min++ > MINS_15)
    {
        TEMPORIZATION_15mins();
        uiCount15min = 0;
    }
    else if (uiCount1min++ > MINS_1)
    {
        TEMPORIZATION_1mins();
        uiCount1min = 0;
    }
    else if (uiCount30s++ > 1)
    {
        TEMPORIZATION_30s();
        uiCount30s = 0;
    }
    
}

void TEMPORIZATION_10ms (void)
{
    
}

void TEMPORIZATION_100ms (void)
{
    
}

void TEMPORIZATION_30mins (void)
{
    
}

void TEMPORIZATION_15mins (void)
{
  
}


void TEMPORIZATION_1mins (void)
{

}

void TEMPORIZATION_30s (void)
{
    
}
