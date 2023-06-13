 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Ahmed Ashraf El-Sayed
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION           (1U)
#define PORT_PBCFG_SW_MINOR_VERSION           (0U)
#define PORT_PBCFG_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION   (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
/* Configure All pins as default pin except PF4 as (input pin , pull-up resistor) and PF1 as (Output Pin)*/   
const Port_ConfigType Port_PinConfig = {
		PORT_PortA , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA0 as default pin */
		PORT_PortA , PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA1 as default pin */
		PORT_PortA , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA2 as default pin */
		PORT_PortA , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA3 as default pin */
		PORT_PortA , PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA4 as default pin */
		PORT_PortA , PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA5 as default pin */
		PORT_PortA , PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA6 as default pin */
		PORT_PortA , PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PA7 as default pin */

		PORT_PortB , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB0 as default pin */
		PORT_PortB , PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB1 as default pin */
		PORT_PortB , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB2 as default pin */
		PORT_PortB , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB3 as default pin */
		PORT_PortB , PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB4 as default pin */
		PORT_PortB , PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB5 as default pin */
		PORT_PortB , PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB6 as default pin */
		PORT_PortB , PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PB7 as default pin */

		PORT_PortC , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC0 as default pin */
		PORT_PortC , PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC1 as default pin */
		PORT_PortC , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC2 as default pin */
		PORT_PortC , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC3 as default pin */
		PORT_PortC , PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC4 as default pin */
		PORT_PortC , PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC5 as default pin */
		PORT_PortC , PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC6 as default pin */
		PORT_PortC , PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PC7 as default pin */

		PORT_PortD , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD0 as default pin */
		PORT_PortD , PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD1 as default pin */
		PORT_PortD , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD2 as default pin */
		PORT_PortD , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD3 as default pin */
		PORT_PortD , PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD4 as default pin */
		PORT_PortD , PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD5 as default pin */
		PORT_PortD , PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD6 as default pin */
		PORT_PortD , PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PD7 as default pin */

		PORT_PortE , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE0 as default pin */
		PORT_PortE , PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE1 as default pin */
		PORT_PortE , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE2 as default pin */
		PORT_PortE , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE3 as default pin */
		PORT_PortE , PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE4 as default pin */
		PORT_PortE , PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PE5 as default pin */

		PORT_PortF , PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PF0 as default pin */
		PORT_PortF , PORT_Pin1, PORT_PIN_OUT,OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PF1 as output pin */
		PORT_PortF , PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PF2 as default pin */
		PORT_PortF , PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,    /* Configure PF3 as default pin */
		PORT_PortF , PORT_Pin4, PORT_PIN_IN,PULL_UP,PORT_PIN_LEVEL_LOW,PORT_PIN_MODE_DIO , STD_ON, STD_ON     /* Configure PF4 as pull_up resisotr pin */

};
