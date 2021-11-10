/* 
 * File:   MESSAGE.c
 * Author: 93Urbano
 *
 * Created on September 20, 2021, 10:50 AM
 */

 

#ifndef MESSAGE_H
#define    MESSAGE_H

 

#ifdef    __cplusplus
extern "C" {
#endif
    
//INCLUDES
#include "mcc_generated_files/mcc.h"
    
    
//DEFINICION DE CONSTANTES    
#define CAN_TX_BUFF  "BUFFERCAN"
 
CAN_MSG_OBJ msgTransmit;
CAN_MSG_OBJ msgReceipt;
uint8_t CANDATAdata[8];

#define data_lenght0 0
#define data_lenght1 1
#define data_lenght2 2
#define data_lenght3 3
#define data_lenght4 4
#define data_lenght5 5
#define data_lenght6 6
#define data_lenght7 7
#define data_lenght8 8


//ID CAN
#define ID_IMUSENFL     0x300
#define ID_SIGSENFL     0x301
#define ID_ERRORSENFL   0x302
#define ID_IMUSENFR     0x303
#define ID_SIGSENFR     0x304
#define ID_ERRORSENFR   0x305
#define ID_IMUSENRL     0x306
#define ID_SIGSENRL     0x307
#define ID_ERRORSENRL   0x308
#define ID_IMUSENRR     0x309
#define ID_SIGSENRR     0x30A
#define ID_ERRORSENRR   0x30B

#define ID_ASSIS_C   0x350
#define ID_ASSIS_R   0x351
#define ID_ASSIS_L   0x352

//CAN MESSAGES
#define DV_SYSTEM_STATUS            0x500
#define DV_DRIVING_DYNAMICS_1       0x501
#define DV_DRIVING_DYNAMICS_2       0x502
#define TRAJECTORY_ACT              0x320
#define ASB_ANALOG                  0x360
#define ASB_SIGNALS                 0x361
#define ASB_STATE                   0x362
    
//DEFINICION DE FUNCIONES    
void CANWriteMessage(unsigned long id, unsigned char dataLength, unsigned char data1, unsigned char data2, unsigned char data3, unsigned char data4, unsigned char data5, unsigned char data6, unsigned char data7, unsigned char data8);
void CANReadMessage(void);
    

 


#ifdef    __cplusplus
}
#endif

 

#endif    /* MESSAGE_H */