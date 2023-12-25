#ifndef __S2_CONFERENCE___ROOMCONTROL_H__
#define __S2_CONFERENCE___ROOMCONTROL_H__


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
#define __S2_Conference___RoomControl_SP_SELECTROOM_DIG_INPUT 0

#define __S2_Conference___RoomControl_ROOMAVAILABLE_DIG_INPUT 1
#define __S2_Conference___RoomControl_ROOMAVAILABLE_ARRAY_LENGTH 16
#define __S2_Conference___RoomControl_PBROOMSELECTED_DIG_INPUT 17
#define __S2_Conference___RoomControl_PBROOMSELECTED_ARRAY_LENGTH 16

/*
* ANALOG_INPUT
*/
#define __S2_Conference___RoomControl_SYSROOMCOUNT_ANALOG_INPUT 0
#define __S2_Conference___RoomControl_MYROOMID_ANALOG_INPUT 1



#define __S2_Conference___RoomControl_ROOMNAMES_STRING_INPUT 2
#define __S2_Conference___RoomControl_ROOMNAMES_ARRAY_NUM_ELEMS 16
#define __S2_Conference___RoomControl_ROOMNAMES_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_Conference___RoomControl, __ROOMNAMES, __S2_Conference___RoomControl_ROOMNAMES_ARRAY_NUM_ELEMS, __S2_Conference___RoomControl_ROOMNAMES_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_Conference___RoomControl_CONFCALLACTIVATE_DIG_OUTPUT 0
#define __S2_Conference___RoomControl_CLOSEROOMSELECT_DIG_OUTPUT 1

#define __S2_Conference___RoomControl_FPBROOMSELECTED_DIG_OUTPUT 2
#define __S2_Conference___RoomControl_FPBROOMSELECTED_ARRAY_LENGTH 16

/*
* ANALOG_OUTPUT
*/
#define __S2_Conference___RoomControl_AOTARGETROOMID_ANALOG_OUTPUT 0

#define __S2_Conference___RoomControl_TARGETROOMNAME_STRING_OUTPUT 1

#define __S2_Conference___RoomControl_AOGUIROOMSTATE_ANALOG_OUTPUT 2
#define __S2_Conference___RoomControl_AOGUIROOMSTATE_ARRAY_LENGTH 16

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
#define __S2_Conference___RoomControl_GMODINSTANCE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Conference___RoomControl, __GMODINSTANCE, __S2_Conference___RoomControl_GMODINSTANCE_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Conference___RoomControl )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ROOMAVAILABLE );
   DECLARE_IO_ARRAY( __PBROOMSELECTED );
   DECLARE_IO_ARRAY( __FPBROOMSELECTED );
   DECLARE_IO_ARRAY( __AOGUIROOMSTATE );
   DECLARE_STRING_ARRAY( S2_Conference___RoomControl, __ROOMNAMES );
};

START_NVRAM_VAR_STRUCT( S2_Conference___RoomControl )
{
   DECLARE_STRING_STRUCT( S2_Conference___RoomControl, __GMODINSTANCE );
   unsigned short __ITARGETROOMID;
};



#endif //__S2_CONFERENCE___ROOMCONTROL_H__

