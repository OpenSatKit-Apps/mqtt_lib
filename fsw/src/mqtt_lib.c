/* 
** Purpose: Generic entry point function for MQTT library
**
** Notes:
**   1. This library contains a subset of Ian Craggs's Paho MQTT library
**      https://github.com/eclipse/paho.mqtt.c
**
** References:
**   1. OpenSatKit Object-based Application Developer's Guide
**   2. cFS Application Developer's Guide
**
**   Written by David McComas, licensed under the Apache License, Version 2.0
**   (the "License"); you may not use this file except in compliance with the
**   License. You may obtain a copy of the License at
**
**      http://www.apache.org/licenses/LICENSE-2.0
**
**   Unless required by applicable law or agreed to in writing, software
**   distributed under the License is distributed on an "AS IS" BASIS,
**   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**   See the License for the specific language governing permissions and
**   limitations under the License.
*/

/*
** Includes
*/

#include "mqtt_lib_ver.h"

/*
** Exported Functions
*/

/******************************************************************************
** Entry function
**
*/
uint32 MQTT_LibInit(void)
{

   OS_printf("MQTT Library Initialized. Version %d.%d.%d\n",
             MQTT_LIB_MAJOR_VER, MQTT_LIB_MINOR_VER, MQTT_LIB_LOCAL_REV);
   
   return OS_SUCCESS;

} /* End MQTT_LIB_LibInit() */

