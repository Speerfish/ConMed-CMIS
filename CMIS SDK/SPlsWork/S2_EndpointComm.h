#ifndef __S2_ENDPOINTCOMM_H__
#define __S2_ENDPOINTCOMM_H__


#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"

/*
* STRUCTURE S2_EndpointComm__SYSTEMSTATUS
*/
#define SYSTEMSTATUS__S2_EndpointComm_SCURNAME_STRING_MAX_LEN 20
#define SYSTEMSTATUS__S2_EndpointComm_SNEWNAME_STRING_MAX_LEN 20
START_STRUCTURE_DEFINITION( S2_EndpointComm, SYSTEMSTATUS )
{
   CREATE_STRING_STRUCT( S2_EndpointComm, SYSTEMSTATUS__SCURNAME, SYSTEMSTATUS__S2_EndpointComm_SCURNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_EndpointComm, SYSTEMSTATUS__SCURNAME );
   CREATE_STRING_STRUCT( S2_EndpointComm, SYSTEMSTATUS__SNEWNAME, SYSTEMSTATUS__S2_EndpointComm_SNEWNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_EndpointComm, SYSTEMSTATUS__SNEWNAME );
   unsigned short SYSTEMSTATUS__IID;
};

/*
* STRUCTURE S2_EndpointComm__HUBSTATUS
*/
START_STRUCTURE_DEFINITION( S2_EndpointComm, HUBSTATUS )
{
   unsigned short HUBSTATUS__ICONNECTEDTOHUB;
   unsigned short HUBSTATUS__ISYSROOMCOUNT;
   unsigned short HUBSTATUS__IVTC_AVAILABLE;
   unsigned short HUBSTATUS__IVTC_CONTROLLER;
};

/*
* STRUCTURE S2_EndpointComm__ROOMSTATUS
*/
#define ROOMSTATUS__S2_EndpointComm_SADDRESS_STRING_MAX_LEN 2
START_STRUCTURE_DEFINITION( S2_EndpointComm, ROOMSTATUS )
{
   CREATE_STRING_STRUCT( S2_EndpointComm, ROOMSTATUS__SADDRESS, ROOMSTATUS__S2_EndpointComm_SADDRESS_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_EndpointComm, ROOMSTATUS__SADDRESS );
   unsigned short ROOMSTATUS__IADDRESS;
   unsigned short ROOMSTATUS__IPRIVACY;
};

/*
* STRUCTURE S2_EndpointComm__CALLSTATUS
*/
#define CALLSTATUS__S2_EndpointComm_SREMOTEA_STRING_MAX_LEN 2
#define CALLSTATUS__S2_EndpointComm_SREMOTEN_STRING_MAX_LEN 20
START_STRUCTURE_DEFINITION( S2_EndpointComm, CALLSTATUS )
{
   CREATE_STRING_STRUCT( S2_EndpointComm, CALLSTATUS__SREMOTEA, CALLSTATUS__S2_EndpointComm_SREMOTEA_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_EndpointComm, CALLSTATUS__SREMOTEA );
   CREATE_STRING_STRUCT( S2_EndpointComm, CALLSTATUS__SREMOTEN, CALLSTATUS__S2_EndpointComm_SREMOTEN_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_EndpointComm, CALLSTATUS__SREMOTEN );
   unsigned short CALLSTATUS__ISTATE;
   unsigned short CALLSTATUS__ITYPE;
   unsigned short CALLSTATUS__IREMOTEPRIVACY;
   unsigned short CALLSTATUS__ITIMER;
   unsigned short CALLSTATUS__IREMOTEA;
};


/*
* Constructor and Destructor
*/
int S2_EndpointComm_SYSTEMSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, SYSTEMSTATUS ) * me, int nVerbose );
int S2_EndpointComm_SYSTEMSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, SYSTEMSTATUS ) * me, int nVerbose );
int S2_EndpointComm_HUBSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, HUBSTATUS ) * me, int nVerbose );
int S2_EndpointComm_HUBSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, HUBSTATUS ) * me, int nVerbose );
int S2_EndpointComm_ROOMSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, ROOMSTATUS ) * me, int nVerbose );
int S2_EndpointComm_ROOMSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, ROOMSTATUS ) * me, int nVerbose );
int S2_EndpointComm_CALLSTATUS_Constructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, CALLSTATUS ) * me, int nVerbose );
int S2_EndpointComm_CALLSTATUS_Destructor ( START_STRUCTURE_DEFINITION( S2_EndpointComm, CALLSTATUS ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_EndpointComm_DIASSERTSTAGE1_DIG_INPUT 0
#define __S2_EndpointComm_DIASSERTSTAGE2_DIG_INPUT 1
#define __S2_EndpointComm_DIASSERTSTAGE3_DIG_INPUT 2
#define __S2_EndpointComm_DIINITSTAGESCOMPLETE_DIG_INPUT 3
#define __S2_EndpointComm_SIGRMATTRCONFERENCE_DIG_INPUT 4
#define __S2_EndpointComm_SIGRMATTRPERMISSION_DIG_INPUT 5
#define __S2_EndpointComm_SIGHUBCONNECTED_DIG_INPUT 6
#define __S2_EndpointComm_SIGCONFERENCECALLACTIVATE_DIG_INPUT 7
#define __S2_EndpointComm_PBCONFERENCEACCEPT_DIG_INPUT 8
#define __S2_EndpointComm_PBCONFERENCECANCEL_DIG_INPUT 9
#define __S2_EndpointComm_PBCONFERENCEDECLINE_DIG_INPUT 10
#define __S2_EndpointComm_PBCONFPRIVACY_DIG_INPUT 11
#define __S2_EndpointComm_PB_VTCONFERENCE_DIG_INPUT 12
#define __S2_EndpointComm_SIGVTC_MSGPULSE_DIG_INPUT 13
#define __S2_EndpointComm_PBVTC_DISCONNECT_DIG_INPUT 14
#define __S2_EndpointComm_PBVTC_CONNECT_DIG_INPUT 15
#define __S2_EndpointComm_PGVTCONFERENCE_DIG_INPUT 16
#define __S2_EndpointComm_SIGSENDCALLSTATUS_DIG_INPUT 17
#define __S2_EndpointComm_SIGROOMACTIVE_DIG_INPUT 18
#define __S2_EndpointComm_MPVIDEOINBOUND_DIG_INPUT 19
#define __S2_EndpointComm_MPVIDEOOUTBOUND_DIG_INPUT 20
#define __S2_EndpointComm_SIGROOMSHUTDOWN_DIG_INPUT 21
#define __S2_EndpointComm_DICONFSTARTENABLE_DIG_INPUT 22
#define __S2_EndpointComm_DICONFACCEPTENABLE_DIG_INPUT 23
#define __S2_EndpointComm_DICONFVIDEOINENABLE_DIG_INPUT 24
#define __S2_EndpointComm_DICONFVIDEOOUTENABLE_DIG_INPUT 25


/*
* ANALOG_INPUT
*/
#define __S2_EndpointComm_AITARGETROOMID_ANALOG_INPUT 0
#define __S2_EndpointComm_AIRMATTRSVIDCOUNTIN_ANALOG_INPUT 1
#define __S2_EndpointComm_AIRMATTRRGBCOUNTIN_ANALOG_INPUT 2
#define __S2_EndpointComm_AIRMATTRHDCOUNTIN_ANALOG_INPUT 3
#define __S2_EndpointComm_AIRMATTRSVIDCOUNTOUT_ANALOG_INPUT 4
#define __S2_EndpointComm_AIRMATTRRGBCOUNTOUT_ANALOG_INPUT 5
#define __S2_EndpointComm_AIRMATTRHDCOUNTOUT_ANALOG_INPUT 6
#define __S2_EndpointComm_AIRMVTC_MODE_ANALOG_INPUT 7
#define __S2_EndpointComm_AIVTCBUTTON_ANALOG_INPUT 8

#define __S2_EndpointComm_SIROOMNAME_STRING_INPUT 9
#define __S2_EndpointComm_SIROOMNAME_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_EndpointComm, __SIROOMNAME, __S2_EndpointComm_SIROOMNAME_STRING_MAX_LEN );
#define __S2_EndpointComm_RX_FMHUB_STRING_INPUT 10
#define __S2_EndpointComm_RX_FMHUB_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_EndpointComm, __RX_FMHUB, __S2_EndpointComm_RX_FMHUB_STRING_MAX_LEN );
#define __S2_EndpointComm_RX_TB_CHANNEL1_STATUS_STRING_INPUT 11
#define __S2_EndpointComm_RX_TB_CHANNEL1_STATUS_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_EndpointComm, __RX_TB_CHANNEL1_STATUS, __S2_EndpointComm_RX_TB_CHANNEL1_STATUS_STRING_MAX_LEN );


#define __S2_EndpointComm_SICONFERENCEOUTSOURCE_STRING_INPUT 12
#define __S2_EndpointComm_SICONFERENCEOUTSOURCE_ARRAY_NUM_ELEMS 4
#define __S2_EndpointComm_SICONFERENCEOUTSOURCE_ARRAY_NUM_CHARS 30
CREATE_STRING_ARRAY( S2_EndpointComm, __SICONFERENCEOUTSOURCE, __S2_EndpointComm_SICONFERENCEOUTSOURCE_ARRAY_NUM_ELEMS, __S2_EndpointComm_SICONFERENCEOUTSOURCE_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_EndpointComm_DOSTAGE0COMPLETE_DIG_OUTPUT 0
#define __S2_EndpointComm_DOSTAGE1COMPLETE_DIG_OUTPUT 1
#define __S2_EndpointComm_DOSTAGE2COMPLETE_DIG_OUTPUT 2
#define __S2_EndpointComm_DOSTAGE3COMPLETE_DIG_OUTPUT 3
#define __S2_EndpointComm_SIGHUBCOMMENABLE_DIG_OUTPUT 4
#define __S2_EndpointComm_PB_HUBVTCONFERENCE_DIG_OUTPUT 5
#define __S2_EndpointComm_SIGVTCCONTROLACTIVE_DIG_OUTPUT 6
#define __S2_EndpointComm_SIGERRVTCCONTROL_DIG_OUTPUT 7
#define __S2_EndpointComm_SIGCONFERENCEACTIVE_DIG_OUTPUT 8
#define __S2_EndpointComm_SIGRINGGENERATOR_DIG_OUTPUT 9
#define __S2_EndpointComm_FBCALLSTATEFLASH_DIG_OUTPUT 10
#define __S2_EndpointComm_FBCONFERENCESTARTBUTTON_DIG_OUTPUT 11
#define __S2_EndpointComm_FBCONFERENCEACCEPTBUTTON_DIG_OUTPUT 12
#define __S2_EndpointComm_FBCONFERENCECANCELBUTTON_DIG_OUTPUT 13
#define __S2_EndpointComm_FBCONFERENCEDECLINEBUTTON_DIG_OUTPUT 14
#define __S2_EndpointComm_FBPRIVACYINDICATOR_DIG_OUTPUT 15
#define __S2_EndpointComm_SIG_TB_DISCONNECT_DIG_OUTPUT 16
#define __S2_EndpointComm_SIGVTCWAKEUP_DIG_OUTPUT 17

#define __S2_EndpointComm_SIGROOMAVAILABLE_DIG_OUTPUT 18
#define __S2_EndpointComm_SIGROOMAVAILABLE_ARRAY_LENGTH 16

/*
* ANALOG_OUTPUT
*/
#define __S2_EndpointComm_AOROOMCOUNT_ANALOG_OUTPUT 0
#define __S2_EndpointComm_AOMYROOMID_ANALOG_OUTPUT 1
#define __S2_EndpointComm_AOCONFERENCESTATE_ANALOG_OUTPUT 2
#define __S2_EndpointComm_AOENABLECONFSTARTBTN_ANALOG_OUTPUT 3
#define __S2_EndpointComm_AOENABLECONFACCEPTBTN_ANALOG_OUTPUT 4
#define __S2_EndpointComm_AOENABLECONFCANCELBTN_ANALOG_OUTPUT 5
#define __S2_EndpointComm_AOENABLECONFDECLINEBTN_ANALOG_OUTPUT 6
#define __S2_EndpointComm_AOENABLEPRIVACYBTN_ANALOG_OUTPUT 7
#define __S2_EndpointComm_AOENABLEVTCBTN_ANALOG_OUTPUT 8
#define __S2_EndpointComm_AOREMOTEROOMSVIDINCOUNT_ANALOG_OUTPUT 9
#define __S2_EndpointComm_AOREMOTEROOMRGBINCOUNT_ANALOG_OUTPUT 10
#define __S2_EndpointComm_AOREMOTEROOMDVIINCOUNT_ANALOG_OUTPUT 11
#define __S2_EndpointComm_AOREMOTEROOMSVIDOUTCOUNT_ANALOG_OUTPUT 12
#define __S2_EndpointComm_AOREMOTEROOMRGBOUTCOUNT_ANALOG_OUTPUT 13
#define __S2_EndpointComm_AOREMOTEROOMDVIOUTCOUNT_ANALOG_OUTPUT 14
#define __S2_EndpointComm_AOENABLEVIDEOINBTN_ANALOG_OUTPUT 15
#define __S2_EndpointComm_AOENABLEVIDEOOUTBTN_ANALOG_OUTPUT 16
#define __S2_EndpointComm_AOVTCTYPE_ANALOG_OUTPUT 17

#define __S2_EndpointComm_SOCONFMESSAGE_STRING_OUTPUT 18
#define __S2_EndpointComm_SOVTCMESSAGE_STRING_OUTPUT 19
#define __S2_EndpointComm_TX_TOHUB_STRING_OUTPUT 20

#define __S2_EndpointComm_SOROOMNAME_STRING_OUTPUT 21
#define __S2_EndpointComm_SOROOMNAME_ARRAY_LENGTH 16
#define __S2_EndpointComm_SOCONFERENCEINSOURCE_STRING_OUTPUT 37
#define __S2_EndpointComm_SOCONFERENCEINSOURCE_ARRAY_LENGTH 4

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
#define __S2_EndpointComm_GMODINSTANCE_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_EndpointComm, __GMODINSTANCE, __S2_EndpointComm_GMODINSTANCE_STRING_MAX_LEN );
#define __S2_EndpointComm_SHUBDA_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_EndpointComm, __SHUBDA, __S2_EndpointComm_SHUBDA_STRING_MAX_LEN );
#define __S2_EndpointComm_GSRMATTRNAME_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_EndpointComm, __GSRMATTRNAME, __S2_EndpointComm_GSRMATTRNAME_STRING_MAX_LEN );
#define __S2_EndpointComm_SREMOTESOURCE_ARRAY_NUM_ELEMS 4
#define __S2_EndpointComm_SREMOTESOURCE_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_EndpointComm, __SREMOTESOURCE, __S2_EndpointComm_SREMOTESOURCE_ARRAY_NUM_ELEMS, __S2_EndpointComm_SREMOTESOURCE_ARRAY_NUM_CHARS );
#define __S2_EndpointComm_GSCONFERENCEINSOURCE_ARRAY_NUM_ELEMS 4
#define __S2_EndpointComm_GSCONFERENCEINSOURCE_ARRAY_NUM_CHARS 30
CREATE_STRING_ARRAY( S2_EndpointComm, __GSCONFERENCEINSOURCE, __S2_EndpointComm_GSCONFERENCEINSOURCE_ARRAY_NUM_ELEMS, __S2_EndpointComm_GSCONFERENCEINSOURCE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/
#define __S2_EndpointComm_ROOM_STRUCT_MAX_LEN 16
CREATE_STRUCTURE_ARRAY( S2_EndpointComm, __ROOM, SYSTEMSTATUS, __S2_EndpointComm_ROOM_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_EndpointComm )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SIGROOMAVAILABLE );
   DECLARE_IO_ARRAY( __SOROOMNAME );
   DECLARE_IO_ARRAY( __SOCONFERENCEINSOURCE );
   DECLARE_STRING_STRUCT( S2_EndpointComm, __SIROOMNAME );
   DECLARE_STRING_STRUCT( S2_EndpointComm, __RX_FMHUB );
   DECLARE_STRING_STRUCT( S2_EndpointComm, __RX_TB_CHANNEL1_STATUS );
   DECLARE_STRING_ARRAY( S2_EndpointComm, __SICONFERENCEOUTSOURCE );
};

START_NVRAM_VAR_STRUCT( S2_EndpointComm )
{
   DECLARE_STRING_STRUCT( S2_EndpointComm, __GMODINSTANCE );
   DECLARE_STRING_STRUCT( S2_EndpointComm, __SHUBDA );
   DECLARE_STRING_STRUCT( S2_EndpointComm, __GSRMATTRNAME );
   DECLARE_STRING_ARRAY( S2_EndpointComm, __SREMOTESOURCE );
   DECLARE_STRING_ARRAY( S2_EndpointComm, __GSCONFERENCEINSOURCE );
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
   unsigned short __GIRMVTC_MODE;
   unsigned short __GICONFSTART;
   unsigned short __GICONFACCEPT;
   unsigned short __GICONFVIDEOIN;
   unsigned short __GICONFVIDEOOUT;
   unsigned short __GIROOMCONFERENCEINPROGRESS;
   unsigned short __GHUBREADY;
   unsigned short __GINHIBITBOUNCE;
   unsigned short __GIVTCBUSY;
   DECLARE_STRUCT( S2_EndpointComm, HUBSTATUS, __HUB );
   DECLARE_STRUCT( S2_EndpointComm, CALLSTATUS, __MYCALL );
   DECLARE_STRUCT( S2_EndpointComm, ROOMSTATUS, __MYROOM );
   DECLARE_STRUCT_ARRAY( S2_EndpointComm, __ROOM );
};



#endif //__S2_ENDPOINTCOMM_H__

