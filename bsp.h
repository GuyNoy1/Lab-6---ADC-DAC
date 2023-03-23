#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx
// #include  <msp430xG46x.h>  // MSP430x4xx

#define DataSegStart          0x200
#define CodeSegStart          0xC000
#define StackTosStart         0x0400
#define DataSampleStart       0x260


#define debounceVal           250
#define delay62_5ms           0xFFFF
#define delay5ms              0x639C
#define delay10ms             0xC738
#define delay200mas           0x03FC


// PushButtons abstraction
#define PBsArrPort            &P1IN 
#define PBsArrIntPend         &P1IFG 
#define PBsArrIntEn           &P1IE
#define PBsArrIntEdgeSel      &P1IES
#define PBsArrPortSel         &P1SEL 
#define PBsArrPortDir         &P1DIR 
#define PB0                   0x01
#define PB1                   0x02
#define PB2                   0x04
#define PB3                   0x08


// LCD Abstraction
#define LCD_ConfigPort        &P1OUT
#define LCD_DataDir           &P2DIR
#define LCD_DataOut           &P2OUT
#define LCD_DataSel           &P2SEL
#define PIN_RW                0x80
#define PIN_RS                0x40
#define PIN_E                 0x20
#define PIN_PWM               0x10


#define OFFSET                3800
#define tarHalfSec            62500       
#define MAXCOUNT              10000

#define NSAMPLES              2200
#define NSAMPLES_4            1100
#define ADC10DN               1
#define POINTN                31
#define POINTSSEG             0x250
#define MPOINTSSEG            0x290



#define EPWM                  1200
#define ESINE                 1550
#define ETRI                  1750

#define VOLTAGEDIVISOR        282


// Timers
#define TIV0                  &TA0IV
#define TIV1                  &TA1IV
#define T1COUNT               &TA1CCR1
#endif



