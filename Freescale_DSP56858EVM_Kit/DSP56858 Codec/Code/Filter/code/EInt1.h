/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : EInt1.H
**     Project   : Filter
**     Processor : 56858
**     Component : ExtInt
**     Version   : Component 02.094, Driver 02.04, CPU db: 2.87.105
**     Compiler  : Metrowerks DSP C Compiler
**     Date/Time : 2/24/2018, 10:24 PM
**     Abstract  :
**         This bean "ExtInt" implements an external 
**         interrupt, its control methods and interrupt/event 
**         handling procedure.
**         The bean uses one pin which generates interrupt on 
**         selected edge.
**     Settings  :
**         Interrupt name              : INT_IRQA
**         User handling procedure     : EInt1_OnInterrupt
**
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       22            |  IRQA
**             ----------------------------------------------------
**
**         Port name                   : IRQ
**
**         Bit number (in port)        : 2
**         Bit mask of the port        : 4
**
**         Signal edge/level           : falling
**         Priority                    : 1
**         Pull option                 : up
**         Initial state               : Enabled
**
**         Edge register               : ICTL      [2096954]
**         Priority register           : IPR2      [2096930]
**         Enable register             : IPR2      [2096930]
**
**         Port data register          : ICTL      [2096954]
**     Contents  :
**         GetVal - bool EInt1_GetVal(void);
**
**     Copyright : 1997 - 2009 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __EInt1_H
#define __EInt1_H

/* MODULE EInt1. */

/*Including shared modules, which are used in the whole project*/
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Events.h"
#include "Cpu.h"


#define EInt1_PIN_MASK          ((byte)4) /* Bit mask */

void EInt1_Interrupt(void);
/*
** ===================================================================
**     Method      :  EInt1_Interrupt (component ExtInt)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and invokes the beans event.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

#define EInt1_GetVal() ((bool)(getRegBits(ICTL,EInt1_PIN_MASK)))
/*
** ===================================================================
**     Method      :  EInt1_GetVal (component ExtInt)
**
**     Description :
**         Returns the actual value of the input pin of the bean.
**     Parameters  : None
**     Returns     :
**         ---             - Returned input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
** ===================================================================
*/

/* END EInt1. */

#endif /* __EInt1_H*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.00 [04.35]
**     for the Freescale 56800 series of microcontrollers.
**
** ###################################################################
*/