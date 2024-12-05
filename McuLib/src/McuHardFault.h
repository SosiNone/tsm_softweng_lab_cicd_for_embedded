/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuHardFault.h
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : HardFault
**     Version     : Component 01.024, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-07-19, 17:00, # CodeGen: 782
**     Abstract    :
**          Component to simplify hard faults for ARM (Kinetis, S32K).
**     Settings    :
**          Component name                                 : McuHardFault
**     Contents    :
**         HardFaultHandler - void McuHardFault_HardFaultHandler(void);
**         Deinit           - void McuHardFault_Deinit(void);
**         Init             - void McuHardFault_Init(void);
**
** * Copyright (c) 2014-2022, Erich Styger
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file McuHardFault.h
** @version 01.00
** @brief
**          Component to simplify hard faults for ARM (Kinetis, S32K).
*/         
/*!
**  @addtogroup McuHardFault_module McuHardFault module documentation
**  @{
*/         

#ifndef __McuHardFault_H
#define __McuHardFault_H

/* MODULE McuHardFault. */
#include "McuLib.h" /* SDK and API used */
#include "McuHardFaultconfig.h" /* configuration */




void McuHardFault_HardFaultHandler(void);
/*
** ===================================================================
**     Method      :  HardFaultHandler (component HardFault)
**
**     Description :
**         Hard Fault Handler
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#ifdef __GNUC__ /* 'used' attribute needed for GNU LTO (Link Time Optimization) */
void McuHardFault_HandlerC(uint32_t *hardfault_args) __attribute__((used));
#else
void McuHardFault_HandlerC(uint32_t *hardfault_args);
#endif
/*
** ===================================================================
**     Method      :  McuHardFault_HandlerC (component HardFault)
**
**     Description :
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

void McuHardFault_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component HardFault)
**
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void McuHardFault_Init(void);
/*
** ===================================================================
**     Method      :  Init (component HardFault)
**
**     Description :
**         Initializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END McuHardFault. */

#endif
/* ifndef __McuHardFault_H */
/*!
** @}
*/
