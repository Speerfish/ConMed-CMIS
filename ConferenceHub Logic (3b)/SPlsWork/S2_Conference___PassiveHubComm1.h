#ifndef __S2_CONFERENCE___PASSIVEHUBCOMM1_H__
#define __S2_CONFERENCE___PASSIVEHUBCOMM1_H__


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
* STRUCTURE S2_Conference___PassiveHubComm1__SYSTEMSTATUS
*/
#define SYSTEMSTATUS__S2_Conference___PassiveHubComm1_SCURNAME_STRING_MAX_LEN 20
#define SYSTEMSTATUS__S2_Conference___PassiveHubComm1_SNEWNAME_STRING_MAX_LEN 20
START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, SYSTEMSTATUS )
{
   CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, SYSTEMSTATUS__SCURNAME, SYSTEMSTATUS__S2_Conference___PassiveHubComm1_SCURNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, SYSTEMSTATUS__SCURNAME );
   CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, SYSTEMSTATUS__SNEWNAME, SYSTEMSTATUS__S2_Conference___PassiveHubComm1_SNEWNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, SYSTEMSTATUS__SNEWNAME );
   unsigned short SYSTEMSTATUS__IID;
};

/*
* STRUCTURE S2_Conference___PassiveHubComm1__HUBSTATUS
*/
START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, HUBSTATUS )
{
   unsigned short HUBSTATUS__ICONNECTEDTOHUB;
   unsigned short HUBSTATUS__ISYSROOMCOUNT;
   unsigned short HUBSTATUS__IVTC_AVAILABLE;
   unsigned short HUBSTATUS__IVTC_CONTROLLER;
};

/*
* STRUCTURE S2_Conference___PassiveHubComm1__ROOMSTATUS
*/
#define ROOMSTATUS__S2_Conference___PassiveHubComm1_SADDRESS_STRING_MAX_LEN 2
START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, ROOMSTATUS )
{
   CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, ROOMSTATUS__SADDRESS, ROOMSTATUS__S2_Conference___PassiveHubComm1_SADDRESS_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, ROOMSTATUS__SADDRESS );
   unsigned short ROOMSTATUS__IADDRESS;
   unsigned short ROOMSTATUS__IPRIVACY;
};

/*
* STRUCTURE S2_Conference___PassiveHubComm1__CALLSTATUS
*/
#define CALLSTATUS__S2_Conference___PassiveHubComm1_SREMOTEA_STRING_MAX_LEN 2
#define CALLSTATUS__S2_Conference___PassiveHubComm1_SREMOTEN_STRING_MAX_LEN 20
START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, CALLSTATUS )
{
   CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, CALLSTATUS__SREMOTEA, CALLSTATUS__S2_Conference___PassiveHubComm1_SREMOTEA_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, CALLSTATUS__SREMOTEA );
   CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, CALLSTATUS__SREMOTEN, CALLSTATUS__S2_Conference___PassiveHubComm1_SREMOTEN_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, CALLSTATUS__SREMOTEN );
   unsigned short CALLSTATUS__ISTATE;
   unsigned short CALLSTATUS__ITYPE;
   unsigned short CALLSTATUS__IREMOTEPRIVACY;
   unsigned short CALLSTATUS__ITIMER;
   unsigned short CALLSTATUS__IREMOTEA;
};


/*
* Constructor and Destructor
*/
int S2_Conference___PassiveHubComm1_SYSTEMSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, SYSTEMSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_SYSTEMSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, SYSTEMSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_HUBSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, HUBSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_HUBSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, HUBSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_ROOMSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, ROOMSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_ROOMSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, ROOMSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_CALLSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, CALLSTATUS ) * me, int nVerbose );
int S2_Conference___PassiveHubComm1_CALLSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_Conference___PassiveHubComm1, CALLSTATUS ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Conference___PassiveHubComm1_DIASSERTSTAGE1_DIG_INPUT 0
#define __S2_Conference___PassiveHubComm1_DIASSERTSTAGE2_DIG_INPUT 1
#define __S2_Conference___PassiveHubComm1_DIASSERTSTAGE3_DIG_INPUT 2
#define __S2_Conference___PassiveHubComm1_DIINITSTAGESCOMPLETE_DIG_INPUT 3
#define __S2_Conference___PassiveHubComm1_SIGRMATTRCONFERENCE_DIG_INPUT 4
#define __S2_Conference___PassiveHubComm1_SIGRMATTRPERMISSION_DIG_INPUT 5
#define __S2_Conference___PassiveHubComm1_SIGHUBCONNECTED_DIG_INPUT 6
#define __S2_Conference___PassiveHubComm1_SIGSENDCALLSTATUS_DIG_INPUT 7
#define __S2_Conference___PassiveHubComm1_SIGROOMACTIVE_DIG_INPUT 8
#define __S2_Conference___PassiveHubComm1_SIGCONFROUTE_TRIG_DIG_INPUT 9
#define __S2_Conference___PassiveHubComm1_SIGROOMSHUTDOWN_DIG_INPUT 10


/*
* ANALOG_INPUT
*/
#define __S2_Conference___PassiveHubComm1_AIRMATTRSVIDCOUNTIN_ANALOG_INPUT 0
#define __S2_Conference___PassiveHubComm1_AIRMATTRRGBCOUNTIN_ANALOG_INPUT 1
#define __S2_Conference___PassiveHubComm1_AIRMATTRHDCOUNTIN_ANALOG_INPUT 2
#define __S2_Conference___PassiveHubComm1_AIRMATTRSVIDCOUNTOUT_ANALOG_INPUT 3
#define __S2_Conference___PassiveHubComm1_AIRMATTRRGBCOUNTOUT_ANALOG_INPUT 4
#define __S2_Conference___PassiveHubComm1_AIRMATTRHDCOUNTOUT_ANALOG_INPUT 5
#define __S2_Conference___PassiveHubComm1_AITARGET1SOURCE_ANALOG_INPUT 6

#define __S2_Conference___PassiveHubComm1_SIROOMNAME_STRING_INPUT 7
#define __S2_Conference___PassiveHubComm1_SIROOMNAME_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __SIROOMNAME, __S2_Conference___PassiveHubComm1_SIROOMNAME_STRING_MAX_LEN );
#define __S2_Conference___PassiveHubComm1_RX_FMHUB_STRING_INPUT 8
#define __S2_Conference___PassiveHubComm1_RX_FMHUB_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __RX_FMHUB, __S2_Conference___PassiveHubComm1_RX_FMHUB_STRING_MAX_LEN );


#define __S2_Conference___PassiveHubComm1_SICONFERENCEOUTSOURCE_STRING_INPUT 9
#define __S2_Conference___PassiveHubComm1_SICONFERENCEOUTSOURCE_ARRAY_NUM_ELEMS 4
#define __S2_Conference___PassiveHubComm1_SICONFERENCEOUTSOURCE_ARRAY_NUM_CHARS 30
CREATE_STRING_ARRAY( S2_Conference___PassiveHubComm1, __SICONFERENCEOUTSOURCE, __S2_Conference___PassiveHubComm1_SICONFERENCEOUTSOURCE_ARRAY_NUM_ELEMS, __S2_Conference___PassiveHubComm1_SICONFERENCEOUTSOURCE_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_Conference___PassiveHubComm1_DOSTAGE0COMPLETE_DIG_OUTPUT 0
#define __S2_Conference___PassiveHubComm1_DOSTAGE1COMPLETE_DIG_OUTPUT 1
#define __S2_Conference___PassiveHubComm1_DOSTAGE2COMPLETE_DIG_OUTPUT 2
#define __S2_Conference___PassiveHubComm1_DOSTAGE3COMPLETE_DIG_OUTPUT 3
#define __S2_Conference___PassiveHubComm1_SIGHUBCOMMENABLE_DIG_OUTPUT 4
#define __S2_Conference___PassiveHubComm1_SIGCONFERENCEACTIVE_DIG_OUTPUT 5
#define __S2_Conference___PassiveHubComm1_SIGPRIVACYMODE_DIG_OUTPUT 6


/*
* ANALOG_OUTPUT
*/
#define __S2_Conference___PassiveHubComm1_AOCONFERENCESTATE_ANALOG_OUTPUT 0

#define __S2_Conference___PassiveHubComm1_TX_TOHUB_STRING_OUTPUT 1


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
#define __S2_Conference___PassiveHubComm1_GMODINSTANCE_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __GMODINSTANCE, __S2_Conference___PassiveHubComm1_GMODINSTANCE_STRING_MAX_LEN );
#define __S2_Conference___PassiveHubComm1_SHUBDA_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __SHUBDA, __S2_Conference___PassiveHubComm1_SHUBDA_STRING_MAX_LEN );
#define __S2_Conference___PassiveHubComm1_GSRMATTRNAME_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __GSRMATTRNAME, __S2_Conference___PassiveHubComm1_GSRMATTRNAME_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_Conference___PassiveHubComm1_ROOM_STRUCT_MAX_LEN 16
CREATE_STRUCTURE_ARRAY( S2_Conference___PassiveHubComm1, __ROOM, SYSTEMSTATUS, __S2_Conference___PassiveHubComm1_ROOM_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Conference___PassiveHubComm1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __SIROOMNAME );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __RX_FMHUB );
   DECLARE_STRING_ARRAY( S2_Conference___PassiveHubComm1, __SICONFERENCEOUTSOURCE );
};

START_NVRAM_VAR_STRUCT( S2_Conference___PassiveHubComm1 )
{
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __GMODINSTANCE );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __SHUBDA );
   DECLARE_STRING_STRUCT( S2_Conference___PassiveHubComm1, __GSRMATTRNAME );
   unsigned short __GICONFERENCING;
   unsigned short __GIPERMISSION;
   unsigned short __GIRMATTRSVIDCOUNTIN;
   unsigned short __GIRMATTRRGBCOUNTIN;
   unsigned short __GIRMATTRDVICOUNTIN;
   unsigned short __GIRMATTRALLCOUNTIN;
   unsigned short __GIRMATTRSVIDCOUNTOUT;
   unsigned short __GIRMATTRRGBCOUNTOUT;
   unsigned short __GIRMATTRDVICOUNTOUT;
   unsigned short __GIRMATTRALLCOUNTOUT;
   unsigned short __GIROOMCONFERENCEINPROGRESS;
   unsigned short __GHUBREADY;
   DECLARE_STRUCT( S2_Conference___PassiveHubComm1, HUBSTATUS, __HUB );
   DECLARE_STRUCT( S2_Conference___PassiveHubComm1, CALLSTATUS, __MYCALL );
   DECLARE_STRUCT( S2_Conference___PassiveHubComm1, ROOMSTATUS, __MYROOM );
   DECLARE_STRUCT_ARRAY( S2_Conference___PassiveHubComm1, __ROOM );
};



#endif //__S2_CONFERENCE___PASSIVEHUBCOMM1_H__

