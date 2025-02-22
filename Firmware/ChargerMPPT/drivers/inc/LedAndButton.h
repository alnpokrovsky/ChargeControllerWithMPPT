/********************************************************************************
 * project     Charge controller for solar panel with MPPT algorithm            *
 *                                                                              *
 * file        LedAndButton.h                                                   *
 * author      Ila Galkin (aka Nordic Energy)                                   *
 * date        15.07.2019                                                       *
 * copyright   The MIT License (MIT). Copyright (c) 2019 Ilya Galkin            *
 * brief       Work with LED and button on board                                *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 * Include 
 ********************************************************************************/
#pragma once 

#include "stm32f3xx.h"

#include "DebugOutput.h"

/********************************************************************************
 * User typedef
 ********************************************************************************/

typedef enum {
    LedOff = 0,
    LedOn = 1
} LedStatus;

typedef enum {
    Red = 0,
    Blue = 1
} LedColor;

/********************************************************************************
 * Local function declaration
 ********************************************************************************/

void InitLEDonBoard (void);
void ControlLedOnBoard (LedColor color, LedStatus status);
void ToggleLedOnBoard (LedColor color);
void InitExtiButtonOnBoard (void);

/********************************* END OF FILE **********************************/