#ifndef __S2_SDKENDPOINT_OR8_H__
#define __S2_SDKENDPOINT_OR8_H__


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
#define __S2_SDKEndpoint_OR8_PBCONFSTART_DIG_INPUT 0
#define __S2_SDKEndpoint_OR8_PBCONFVIDEOIN_DIG_INPUT 1
#define __S2_SDKEndpoint_OR8_PBCONFCANCEL_DIG_INPUT 2
#define __S2_SDKEndpoint_OR8_FBCALLSTATEFLASH_DIG_INPUT 3
#define __S2_SDKEndpoint_OR8_DIPULSECLOSEROOMSELECT_DIG_INPUT 4
#define __S2_SDKEndpoint_OR8_PBSUBPAGEDONE_DIG_INPUT 5
#define __S2_SDKEndpoint_OR8_PBVTC_DISCONNECT_DIG_INPUT 6
#define __S2_SDKEndpoint_OR8_SIGVTCCONTROLACTIVE_DIG_INPUT 7
#define __S2_SDKEndpoint_OR8_SIGCONFERENCEACTIVE_DIG_INPUT 8
#define __S2_SDKEndpoint_OR8_ERRVTCCONTROL_DIG_INPUT 9

#define __S2_SDKEndpoint_OR8_PBSOURCE_DIG_INPUT 10
#define __S2_SDKEndpoint_OR8_PBSOURCE_ARRAY_LENGTH 4
#define __S2_SDKEndpoint_OR8_PBTARGET_DIG_INPUT 14
#define __S2_SDKEndpoint_OR8_PBTARGET_ARRAY_LENGTH 4

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_SDKEndpoint_OR8_DOPGVIDEO_DIG_OUTPUT 0
#define __S2_SDKEndpoint_OR8_DOPGROOMSELECT_DIG_OUTPUT 1
#define __S2_SDKEndpoint_OR8_MPVTC_NOTAVAILABLE_DIG_OUTPUT 2
#define __S2_SDKEndpoint_OR8_DOPGHWRESTART_DIG_OUTPUT 3
#define __S2_SDKEndpoint_OR8_DOSIGHWRESTART_DIG_OUTPUT 4
#define __S2_SDKEndpoint_OR8_DOSIGCONFROUTE_TRIG_DIG_OUTPUT 5
#define __S2_SDKEndpoint_OR8_DOFBCONFVIDEO_DIG_OUTPUT 6

#define __S2_SDKEndpoint_OR8_PBSOURCE_FB_DIG_OUTPUT 7
#define __S2_SDKEndpoint_OR8_PBSOURCE_FB_ARRAY_LENGTH 4
#define __S2_SDKEndpoint_OR8_PBTARGET_FB_DIG_OUTPUT 11
#define __S2_SDKEndpoint_OR8_PBTARGET_FB_ARRAY_LENGTH 4

/*
* ANALOG_OUTPUT
*/
#define __S2_SDKEndpoint_OR8_AOBTNVIDEOENABLE_ANALOG_OUTPUT 0
#define __S2_SDKEndpoint_OR8_AOGENERALBUTTONSENABLE_ANALOG_OUTPUT 1
#define __S2_SDKEndpoint_OR8_AOBTNCONFERENCECANCELENABLE_ANALOG_OUTPUT 2
#define __S2_SDKEndpoint_OR8_AORMVTC_MODE_ANALOG_OUTPUT 3
#define __S2_SDKEndpoint_OR8_AOTARGET1SOURCE_ANALOG_OUTPUT 4
#define __S2_SDKEndpoint_OR8_AOTARGET2SOURCE_ANALOG_OUTPUT 5


#define __S2_SDKEndpoint_OR8_SOCONFERENCEOUTSOURCE_STRING_OUTPUT 6
#define __S2_SDKEndpoint_OR8_SOCONFERENCEOUTSOURCE_ARRAY_LENGTH 4

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

START_GLOBAL_VAR_STRUCT( S2_SDKEndpoint_OR8 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PBSOURCE );
   DECLARE_IO_ARRAY( __PBTARGET );
   DECLARE_IO_ARRAY( __PBSOURCE_FB );
   DECLARE_IO_ARRAY( __PBTARGET_FB );
   DECLARE_IO_ARRAY( __SOCONFERENCEOUTSOURCE );
};

START_NVRAM_VAR_STRUCT( S2_SDKEndpoint_OR8 )
{
   unsigned short __GICURRENTPAGE;
   unsigned short __GITARGET1SOURCE;
   unsigned short __GITARGET2SOURCE;
};



#endif //__S2_SDKENDPOINT_OR8_H__

