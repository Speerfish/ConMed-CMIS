#ifndef __S2_TVS_CONTROL_VIA_MXP_V3_1_H__
#define __S2_TVS_CONTROL_VIA_MXP_V3_1_H__


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

#define __S2_TVS_Control_via_MXP_v3_1_VIDEO_INPUT_DIG_INPUT 0
#define __S2_TVS_Control_via_MXP_v3_1_VIDEO_INPUT_ARRAY_LENGTH 5
#define __S2_TVS_Control_via_MXP_v3_1_SELECT_CAMERA_DIG_INPUT 5
#define __S2_TVS_Control_via_MXP_v3_1_SELECT_CAMERA_ARRAY_LENGTH 4

/*
* ANALOG_INPUT
*/


#define __S2_TVS_Control_via_MXP_v3_1_FROM_DEVICE_BUFFER_INPUT 0
#define __S2_TVS_Control_via_MXP_v3_1_FROM_DEVICE_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_TVS_Control_via_MXP_v3_1, __FROM_DEVICE, __S2_TVS_Control_via_MXP_v3_1_FROM_DEVICE_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_TVS_Control_via_MXP_v3_1_TVS_IS_CONNECTED_DIG_OUTPUT 0
#define __S2_TVS_Control_via_MXP_v3_1_TVS_NOT_CONNECTED_DIG_OUTPUT 1

#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_SELECTED_DIG_OUTPUT 2
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_SELECTED_ARRAY_LENGTH 4
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_ENABLED_DIG_OUTPUT 6
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_ENABLED_ARRAY_LENGTH 13

/*
* ANALOG_OUTPUT
*/
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_NUMBER_HIGH_ANALOG_OUTPUT 0
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_NUMBER_LOW_ANALOG_OUTPUT 1

#define __S2_TVS_Control_via_MXP_v3_1_TO_DEVICE_STRING_OUTPUT 2

#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_TYPE_STRING_OUTPUT 3
#define __S2_TVS_Control_via_MXP_v3_1_CAMERA_TYPE_ARRAY_LENGTH 13

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
CREATE_INTARRAY1D( S2_TVS_Control_via_MXP_v3_1, __ICAMERAENABLED, 13 );;


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
#define __S2_TVS_Control_via_MXP_v3_1_STEMP_STRING_MAX_LEN 250
CREATE_STRING_STRUCT( S2_TVS_Control_via_MXP_v3_1, __STEMP, __S2_TVS_Control_via_MXP_v3_1_STEMP_STRING_MAX_LEN );
#define __S2_TVS_Control_via_MXP_v3_1_SCAMERATYPE_ARRAY_NUM_ELEMS 13
#define __S2_TVS_Control_via_MXP_v3_1_SCAMERATYPE_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_TVS_Control_via_MXP_v3_1, __SCAMERATYPE, __S2_TVS_Control_via_MXP_v3_1_SCAMERATYPE_ARRAY_NUM_ELEMS, __S2_TVS_Control_via_MXP_v3_1_SCAMERATYPE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_TVS_Control_via_MXP_v3_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VIDEO_INPUT );
   DECLARE_IO_ARRAY( __SELECT_CAMERA );
   DECLARE_IO_ARRAY( __CAMERA_SELECTED );
   DECLARE_IO_ARRAY( __CAMERA_ENABLED );
   DECLARE_IO_ARRAY( __CAMERA_TYPE );
   unsigned short __INUMBER;
   unsigned short __ICAMERASELECTED;
   unsigned short __ITEMP;
   unsigned short __ITEMP1;
   unsigned short __ITEMP2;
   unsigned short __ITVSCONNECTED;
   unsigned short __IFLAG1;
   unsigned short __IINPUT;
   unsigned short __A;
   DECLARE_INTARRAY( S2_TVS_Control_via_MXP_v3_1, __ICAMERAENABLED );
   DECLARE_STRING_STRUCT( S2_TVS_Control_via_MXP_v3_1, __STEMP );
   DECLARE_STRING_ARRAY( S2_TVS_Control_via_MXP_v3_1, __SCAMERATYPE );
   DECLARE_STRING_STRUCT( S2_TVS_Control_via_MXP_v3_1, __FROM_DEVICE );
};

START_NVRAM_VAR_STRUCT( S2_TVS_Control_via_MXP_v3_1 )
{
};



#endif //__S2_TVS_CONTROL_VIA_MXP_V3_1_H__

