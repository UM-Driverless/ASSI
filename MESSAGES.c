/* 
 * File:   MESSAGES.c
 * Author: 93Urbano
 *
 * Created on September 20, 2021, 10:50 AM
 */

 

#include "MESSAGES.h"
#include "mcc_generated_files/mcc.h"
#include "PARAMETERS.h"
#include "LEDS.h"
#include "SPEAKER.h"
 


//VARIABLES
uint8_t CANDATAdata[8];


//FUNCIONES
void CANWriteMessage( unsigned long id, unsigned char dataLength, unsigned char data1, unsigned char data2, unsigned char data3, unsigned char data4, unsigned char data5, unsigned char data6, unsigned char data7, unsigned char data8)
{
    
    CANDATAdata [0] = data1;
    CANDATAdata [1] = data2;
    CANDATAdata [2] = data3;
    CANDATAdata [3] = data4;
    CANDATAdata [4] = data5;
    CANDATAdata [5] = data6;
    CANDATAdata [6] = data7;
    CANDATAdata [7] = data8;
    
    msgTransmit.msgId = id;
    msgTransmit.field.formatType = CAN_2_0_FORMAT;  //CAN 2.0
    msgTransmit.field.brs = CAN_NON_BRS_MODE;   //NO BRS
    msgTransmit.field.frameType = CAN_FRAME_DATA;   //FRAME DATA, NO REMOTE
    msgTransmit.field.idType = CAN_FRAME_EXT;   //CAN VERSION STANDARD
    msgTransmit.field.dlc = ( dataLength & 0x0F ); //DATA LENGTH
    msgTransmit.data = CANDATAdata;
    
    if(CAN1_IsBusOff() == TRUE)
    {
        Nop();
    }
    if(CAN1_IsTxErrorPassive() == TRUE)
    {
        Nop();
    }
    if(CAN1_IsTxErrorWarning() == TRUE)
    {
        Nop();
    }
    if(CAN1_IsTxErrorActive() == TRUE)
    {
        Nop();
    }

    if(CAN_TX_FIFO_AVAILABLE == (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) & CAN_TX_FIFO_AVAILABLE))
    {        
        CAN1_Transmit(CAN1_TX_TXQ, &msgTransmit);
        Nop();
    }
}


void CANReadMessage (void)
{
    uint32_t id;
    unsigned char idType;
    unsigned char dlc;
    unsigned char data1;
    unsigned char data2;
    unsigned char data3;
    unsigned char data4;
    unsigned char data5;
    unsigned char data6;
    unsigned char data7;
    unsigned char data8;
    
    if(CAN1_ReceivedMessageCountGet() > 0) 
    {
        if(TRUE == CAN1_Receive(&msgReceipt))
        {
            Nop();
            id = msgReceipt.msgId;
            idType = msgReceipt.field.idType;
            dlc = msgReceipt.field.dlc;
            data1 = msgReceipt.data[0];
            data2 = msgReceipt.data[1];
            data3 = msgReceipt.data[2];
            data4 = msgReceipt.data[3];
            data5 = msgReceipt.data[4];
            data6 = msgReceipt.data[5];
            data7 = msgReceipt.data[6];
            data8 = msgReceipt.data[7];
            
            switch (id)
            {
                case DV_SYSTEM_STATUS:
                    ucASState_prev = ucASState;
                    ucASState = ( data1 & 0x03 );
                    if (ucASState_prev != ucASState)
                    {
                        LEDS();
                        SPEAKER();
                    }
                    break;
                default:
                    Nop();
                    break;
            }
        }
    }
}


