#ifndef __S2_DENDVD_H__
#define __S2_DENDVD_H__


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
#define __S2_DenDVD_COMMANDSENT_DIG_INPUT 0
#define __S2_DenDVD_ACKED_DIG_INPUT 1


/*
* ANALOG_INPUT
*/


#define __S2_DenDVD_FROMDEVICE$_BUFFER_INPUT 0
#define __S2_DenDVD_FROMDEVICE$_BUFFER_MAX_LEN 255
CREATE_STRING_STRUCT( S2_DenDVD, __FROMDEVICE$, __S2_DenDVD_FROMDEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_DenDVD_TIMEDOUT_DIG_OUTPUT 0
#define __S2_DenDVD_PLEASEWAIT_DIG_OUTPUT 1
#define __S2_DenDVD_ACKIN_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/
#define __S2_DenDVD_DISCTYPEOUT_ANALOG_OUTPUT 0
#define __S2_DenDVD_STATUSOUT_ANALOG_OUTPUT 1
#define __S2_DenDVD_PLAYMODEOUT_ANALOG_OUTPUT 2
#define __S2_DenDVD_TITLEOUT_ANALOG_OUTPUT 3
#define __S2_DenDVD_CHAPTEROUT_ANALOG_OUTPUT 4
#define __S2_DenDVD_TIMEOUT_ANALOG_OUTPUT 5
#define __S2_DenDVD_LANGUAGEOUT_ANALOG_OUTPUT 6
#define __S2_DenDVD_SUBTITLEOUT_ANALOG_OUTPUT 7
#define __S2_DenDVD_ANGLEOUT_ANALOG_OUTPUT 8
#define __S2_DenDVD_TOTALANGLEOUT_ANALOG_OUTPUT 9



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
#define __S2_DenDVD_TEMPSTRING$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_DenDVD, __TEMPSTRING$, __S2_DenDVD_TEMPSTRING$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_DenDVD )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_DenDVD, __FROMDEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_DenDVD )
{
   DECLARE_STRING_STRUCT( S2_DenDVD, __TEMPSTRING$ );
   unsigned short __SEMAPHORE;
   unsigned short __HOUR;
   unsigned short __MINUTE;
   unsigned short __SECOND;
   unsigned short __MARKER;
};

DEFINE_WAITEVENT( S2_DenDVD, COMMANDWAIT1 );
DEFINE_WAITEVENT( S2_DenDVD, COMMANDWAIT2 );


#endif //__S2_DENDVD_H__

