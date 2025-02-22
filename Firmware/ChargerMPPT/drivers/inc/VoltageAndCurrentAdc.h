/********************************************************************************
 * project     Charge controller for solar panel with MPPT algorithm            *
 *                                                                              *
 * file        VoltageAndCurrentAdc.h                                           *
 * author      Ila Galkin (aka Nordic Energy)                                   *
 * date        09.08.2019                                                       *
 * copyright   The MIT License (MIT). Copyright (c) 2019 Ilya Galkin            *
 * brief       Work with ADC for measuring voltage and current                  *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 * Include 
 ********************************************************************************/

#pragma once 

#include "stm32f3xx.h"

/********************************************************************************
 * Local function declaration
 ********************************************************************************/

void InitGpioForFeedbackAdc (void);
void StartCallibrationForAdc (void);
void InitAdcForFeedback (void);

/********************************* END OF FILE **********************************/