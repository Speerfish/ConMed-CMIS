#ifndef __S2_INITIALIZATION_MANAGER_H__
#define __S2_INITIALIZATION_MANAGER_H__


#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Initialization_Manager_DISTAGE0COMPLETE_DIG_INPUT 0
#define __S2_Initialization_Manager_DISTAGE1COMPLETE_DIG_INPUT 1
#define __S2_Initialization_Manager_DISTAGE2COMPLETE_DIG_INPUT 2
#define __S2_Initialization_Manager_DISTAGE3COMPLETE_DIG_INPUT 3


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_Initialization_Manager_DOASSERTSTAGE1_DIG_OUTPUT 0
#define __S2_Initialization_Manager_DOASSERTSTAGE2_DIG_OUTPUT 1
#define __S2_Initialization_Manager_DOASSERTSTAGE3_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Initialization_Manager )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Initialization_Manager )
{
   unsigned short __INITSTATE;
};



#endif //__S2_INITIALIZATION_MANAGER_H__

