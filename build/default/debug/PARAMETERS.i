# 1 "PARAMETERS.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/panze/.mchp_packs/Microchip/PIC18F-Q_DFP/1.11.185/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "PARAMETERS.c" 2







# 1 "./PARAMETERS.h" 1
# 32 "./PARAMETERS.h"
extern unsigned char ucASState;
extern unsigned char ucASState_prev;
extern unsigned char ucASSIName;


void PARAMETERS_Init(void);
# 8 "PARAMETERS.c" 2




unsigned char ucASState;
unsigned char ucASState_prev;
unsigned char ucASSIName;


void PARAMETERS_Init(void)
{
    ucASSIName = 0;
}
