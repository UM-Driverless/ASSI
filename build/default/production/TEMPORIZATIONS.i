# 1 "TEMPORIZATIONS.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/panze/.mchp_packs/Microchip/PIC18F-Q_DFP/1.11.185/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "TEMPORIZATIONS.c" 2








# 1 "./TEMPORIZATIONS.h" 1
# 22 "./TEMPORIZATIONS.h"
unsigned int uiCount30min;
unsigned int uiCount15min;
unsigned int uiCount1min;
unsigned int uiCount30s;


void TEMPORIZATION_10ms (void);
void TEMPORIZATION_100ms (void);
void TEMPORIZATION_1s (void);
void TEMPORIZATION_30s (void);
void TEMPORIZATION_1mins (void);
void TEMPORIZATION_15mins (void);
void TEMPORIZATION_30mins (void);
# 9 "TEMPORIZATIONS.c" 2




unsigned int uiCount30min;
unsigned int uiCount15min;
unsigned int uiCount1min;
unsigned int uiCount30s;



void TEMPORIZATION_1s (void)
{
    if (uiCount30min++ > 1800)
    {
        TEMPORIZATION_30mins();
        uiCount30min = 0;
    }
    else if (uiCount15min++ > 900)
    {
        TEMPORIZATION_15mins();
        uiCount15min = 0;
    }
    else if (uiCount1min++ > 60)
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
