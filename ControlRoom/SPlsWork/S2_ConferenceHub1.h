#ifndef __S2_CONFERENCEHUB1_H__
#define __S2_CONFERENCEHUB1_H__


#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"

/*
* STRUCTURE S2_ConferenceHub1__ENDPOINT
*/
#define ENDPOINT__S2_ConferenceHub1_NAME_STRING_MAX_LEN 255
#define ENDPOINT__S2_ConferenceHub1_RIVULETVECIP_STRING_MAX_LEN 20
#define ENDPOINT__S2_ConferenceHub1_LRMCONFNAME_STRING_MAX_LEN 30
#define ENDPOINT__S2_ConferenceHub1_LRMCONFBUTTON_STRING_MAX_LEN 30
START_STRUCTURE_DEFINITION( S2_ConferenceHub1, ENDPOINT )
{
   CREATE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__NAME, ENDPOINT__S2_ConferenceHub1_NAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__NAME );
   CREATE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__RIVULETVECIP, ENDPOINT__S2_ConferenceHub1_RIVULETVECIP_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__RIVULETVECIP );
   CREATE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__LRMCONFNAME, ENDPOINT__S2_ConferenceHub1_LRMCONFNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__LRMCONFNAME );
   CREATE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__LRMCONFBUTTON, ENDPOINT__S2_ConferenceHub1_LRMCONFBUTTON_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, ENDPOINT__LRMCONFBUTTON );
   unsigned short ENDPOINT__TYPE;
   unsigned short ENDPOINT__ROOMINDEX;
   unsigned short ENDPOINT__CONNECTIONTYPE;
   unsigned short ENDPOINT__CONNECTIONINDEX;
   unsigned short ENDPOINT__CONFERENCEENDPOINT;
   unsigned short ENDPOINT__RIVULET;
   unsigned short ENDPOINT__CUSTOMENDPOINTID;
   unsigned short ENDPOINT__FIXEDENDPOINTID;
   unsigned short ENDPOINT__PROTOCOL;
   unsigned short ENDPOINT__SVIDEOINSTART;
   unsigned short ENDPOINT__SVIDEOINCOUNT;
   unsigned short ENDPOINT__SVIDEOOUTSTART;
   unsigned short ENDPOINT__SVIDEOOUTCOUNT;
   unsigned short ENDPOINT__RGBINSTART;
   unsigned short ENDPOINT__RGBINCOUNT;
   unsigned short ENDPOINT__RGBOUTSTART;
   unsigned short ENDPOINT__RGBOUTCOUNT;
   unsigned short ENDPOINT__HDINSTART;
   unsigned short ENDPOINT__HDINCOUNT;
   unsigned short ENDPOINT__HDOUTSTART;
   unsigned short ENDPOINT__HDOUTCOUNT;
   unsigned short ENDPOINT__RIVAUDIOINCNT;
   unsigned short ENDPOINT__RIVAUDIOOUTCNT;
   unsigned short ENDPOINT__RIVDVIINCNT;
   unsigned short ENDPOINT__RIVDVIOUTCNT;
   unsigned short ENDPOINT__RIVSVIDEOINCNT;
   unsigned short ENDPOINT__RIVSVIDEOOUTCNT;
   unsigned short ENDPOINT__STATE;
   unsigned short ENDPOINT__ONLINE;
   unsigned short ENDPOINT__STATUSCOUNT;
   unsigned short ENDPOINT__TIMEOUTCOUNT;
   unsigned short ENDPOINT__BUSY;
   unsigned short ENDPOINT__REMOTEINDEX;
   unsigned short ENDPOINT__PRIVACY;
   unsigned short ENDPOINT__CONNECTIONINIT;
   unsigned short ENDPOINT__LRMCONFATTRFLAG;
   unsigned short ENDPOINT__LRMCONFPERMISSION;
   CREATE_INTARRAY1D( S2_ConferenceHub1, ENDPOINT__ENDPOINTLIST, 24 );;
   DECLARE_INTARRAY( S2_ConferenceHub1, ENDPOINT__ENDPOINTLIST );
};

/*
* STRUCTURE S2_ConferenceHub1__VTC_RESOURCE
*/
START_STRUCTURE_DEFINITION( S2_ConferenceHub1, VTC_RESOURCE )
{
   unsigned short VTC_RESOURCE__IENABLED;
   unsigned short VTC_RESOURCE__IAVAILABLE;
   unsigned short VTC_RESOURCE__ICONTROLLER;
   unsigned short VTC_RESOURCE__IINDEX;
   unsigned short VTC_RESOURCE__ISTATE;
};


/*
* Constructor and Destructor
*/
int S2_ConferenceHub1_ENDPOINT_Constructor ( START_STRUCTURE_DEFINITION( S2_ConferenceHub1, ENDPOINT ) * me, int nVerbose );
int S2_ConferenceHub1_ENDPOINT_Destructor ( START_STRUCTURE_DEFINITION( S2_ConferenceHub1, ENDPOINT ) * me, int nVerbose );
int S2_ConferenceHub1_VTC_RESOURCE_Constructor ( START_STRUCTURE_DEFINITION( S2_ConferenceHub1, VTC_RESOURCE ) * me, int nVerbose );
int S2_ConferenceHub1_VTC_RESOURCE_Destructor ( START_STRUCTURE_DEFINITION( S2_ConferenceHub1, VTC_RESOURCE ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_ConferenceHub1_DIDEBUG_DIG_INPUT 0
#define __S2_ConferenceHub1_DIVTC_CONNECTED_DIG_INPUT 1

#define __S2_ConferenceHub1_DICONNECTROOMETHERNET_DIG_INPUT 2
#define __S2_ConferenceHub1_DICONNECTROOMETHERNET_ARRAY_LENGTH 16
#define __S2_ConferenceHub1_DICONNECTROOMLOCAL_DIG_INPUT 18
#define __S2_ConferenceHub1_DICONNECTROOMLOCAL_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_DICONNECTROOMSERIAL_DIG_INPUT 26
#define __S2_ConferenceHub1_DICONNECTROOMSERIAL_ARRAY_LENGTH 4
#define __S2_ConferenceHub1_DIMUTEMICLOCAL_DIG_INPUT 30
#define __S2_ConferenceHub1_DIMUTEMICLOCAL_ARRAY_LENGTH 8

/*
* ANALOG_INPUT
*/

#define __S2_ConferenceHub1_RXTB_CHANNEL1_STATUS_STRING_INPUT 0
#define __S2_ConferenceHub1_RXTB_CHANNEL1_STATUS_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_ConferenceHub1, __RXTB_CHANNEL1_STATUS, __S2_ConferenceHub1_RXTB_CHANNEL1_STATUS_STRING_MAX_LEN );


#define __S2_ConferenceHub1_AICONNECTSTATUSETHERNET_ANALOG_INPUT 1
#define __S2_ConferenceHub1_AICONNECTSTATUSETHERNET_ARRAY_LENGTH 16
#define __S2_ConferenceHub1_RIVULETSTATUS_ANALOG_INPUT 17
#define __S2_ConferenceHub1_RIVULETSTATUS_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_RXROOMMESSAGEETHERNET_STRING_INPUT 25
#define __S2_ConferenceHub1_RXROOMMESSAGEETHERNET_ARRAY_NUM_ELEMS 16
#define __S2_ConferenceHub1_RXROOMMESSAGEETHERNET_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGEETHERNET, __S2_ConferenceHub1_RXROOMMESSAGEETHERNET_ARRAY_NUM_ELEMS, __S2_ConferenceHub1_RXROOMMESSAGEETHERNET_ARRAY_NUM_CHARS );
#define __S2_ConferenceHub1_RXROOMMESSAGELOCAL_STRING_INPUT 41
#define __S2_ConferenceHub1_RXROOMMESSAGELOCAL_ARRAY_NUM_ELEMS 8
#define __S2_ConferenceHub1_RXROOMMESSAGELOCAL_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGELOCAL, __S2_ConferenceHub1_RXROOMMESSAGELOCAL_ARRAY_NUM_ELEMS, __S2_ConferenceHub1_RXROOMMESSAGELOCAL_ARRAY_NUM_CHARS );
#define __S2_ConferenceHub1_RXROOMMESSAGESERIAL_STRING_INPUT 49
#define __S2_ConferenceHub1_RXROOMMESSAGESERIAL_ARRAY_NUM_ELEMS 4
#define __S2_ConferenceHub1_RXROOMMESSAGESERIAL_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGESERIAL, __S2_ConferenceHub1_RXROOMMESSAGESERIAL_ARRAY_NUM_ELEMS, __S2_ConferenceHub1_RXROOMMESSAGESERIAL_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_ConferenceHub1_DOVTCWAKEUP_DIG_OUTPUT 0
#define __S2_ConferenceHub1_DOINITALLSTAGESCOMPLETE_DIG_OUTPUT 1

#define __S2_ConferenceHub1_DOROOMENABLEETHERNET_DIG_OUTPUT 2
#define __S2_ConferenceHub1_DOROOMENABLEETHERNET_ARRAY_LENGTH 16
#define __S2_ConferenceHub1_DOROOMENABLELOCAL_DIG_OUTPUT 18
#define __S2_ConferenceHub1_DOROOMENABLELOCAL_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_DOROOMENABLESERIAL_DIG_OUTPUT 26
#define __S2_ConferenceHub1_DOROOMENABLESERIAL_ARRAY_LENGTH 4
#define __S2_ConferenceHub1_AORMATTRCONFERENCEFLAG_DIG_OUTPUT 30
#define __S2_ConferenceHub1_AORMATTRCONFERENCEFLAG_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRPERMISSIONFLAG_DIG_OUTPUT 38
#define __S2_ConferenceHub1_AORMATTRPERMISSIONFLAG_ARRAY_LENGTH 8

/*
* ANALOG_OUTPUT
*/
#define __S2_ConferenceHub1_AOVTCMSGVALUE_ANALOG_OUTPUT 0

#define __S2_ConferenceHub1_SONAME_STRING_OUTPUT 1
#define __S2_ConferenceHub1_SOAUDINFO_STRING_OUTPUT 2
#define __S2_ConferenceHub1_SOVIDINFO_STRING_OUTPUT 3
#define __S2_ConferenceHub1_SORIVINFO2_STRING_OUTPUT 4
#define __S2_ConferenceHub1_SOROUTE_STRING_OUTPUT 5
#define __S2_ConferenceHub1_SOVERSION_STRING_OUTPUT 6
#define __S2_ConferenceHub1_SOLOGIC_STRING_OUTPUT 7
#define __S2_ConferenceHub1_SOPHONENUMBER_STRING_OUTPUT 8

#define __S2_ConferenceHub1_AORMATTRSVIDCOUNTIN_ANALOG_OUTPUT 9
#define __S2_ConferenceHub1_AORMATTRSVIDCOUNTIN_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRRGBCOUNTIN_ANALOG_OUTPUT 17
#define __S2_ConferenceHub1_AORMATTRRGBCOUNTIN_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRHDCOUNTIN_ANALOG_OUTPUT 25
#define __S2_ConferenceHub1_AORMATTRHDCOUNTIN_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRSVIDCOUNTOUT_ANALOG_OUTPUT 33
#define __S2_ConferenceHub1_AORMATTRSVIDCOUNTOUT_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRRGBCOUNTOUT_ANALOG_OUTPUT 41
#define __S2_ConferenceHub1_AORMATTRRGBCOUNTOUT_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_AORMATTRHDCOUNTOUT_ANALOG_OUTPUT 49
#define __S2_ConferenceHub1_AORMATTRHDCOUNTOUT_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_TXROOMMESSAGEETHERNET_STRING_OUTPUT 57
#define __S2_ConferenceHub1_TXROOMMESSAGEETHERNET_ARRAY_LENGTH 16
#define __S2_ConferenceHub1_TXROOMMESSAGELOCAL_STRING_OUTPUT 73
#define __S2_ConferenceHub1_TXROOMMESSAGELOCAL_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_TXROOMMESSAGESERIAL_STRING_OUTPUT 81
#define __S2_ConferenceHub1_TXROOMMESSAGESERIAL_ARRAY_LENGTH 4
#define __S2_ConferenceHub1_TXRMTXTNAME_STRING_OUTPUT 85
#define __S2_ConferenceHub1_TXRMTXTNAME_ARRAY_LENGTH 8
#define __S2_ConferenceHub1_TXRMBTNNAME_STRING_OUTPUT 93
#define __S2_ConferenceHub1_TXRMBTNNAME_ARRAY_LENGTH 8

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
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIMAPETHERNET, 16 );;
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIMAPLOCAL, 8 );;
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIMAPSERIAL, 4 );;
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIMAPROOM, 24 );;
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIROOMCONNECTCOUNT, 16 );;
CREATE_INTARRAY1D( S2_ConferenceHub1, __GIROOMSTATUSDISABLE, 16 );;


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
#define __S2_ConferenceHub1_GSNAME_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_ConferenceHub1, __GSNAME, __S2_ConferenceHub1_GSNAME_STRING_MAX_LEN );
#define __S2_ConferenceHub1_GSVERSION_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_ConferenceHub1, __GSVERSION, __S2_ConferenceHub1_GSVERSION_STRING_MAX_LEN );
#define __S2_ConferenceHub1_GSTYPE_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_ConferenceHub1, __GSTYPE, __S2_ConferenceHub1_GSTYPE_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_ConferenceHub1_GENDPOINTS_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_ConferenceHub1, __GENDPOINTS, ENDPOINT, __S2_ConferenceHub1_GENDPOINTS_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_ConferenceHub1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DICONNECTROOMETHERNET );
   DECLARE_IO_ARRAY( __DICONNECTROOMLOCAL );
   DECLARE_IO_ARRAY( __DICONNECTROOMSERIAL );
   DECLARE_IO_ARRAY( __DIMUTEMICLOCAL );
   DECLARE_IO_ARRAY( __DOROOMENABLEETHERNET );
   DECLARE_IO_ARRAY( __DOROOMENABLELOCAL );
   DECLARE_IO_ARRAY( __DOROOMENABLESERIAL );
   DECLARE_IO_ARRAY( __AORMATTRCONFERENCEFLAG );
   DECLARE_IO_ARRAY( __AORMATTRPERMISSIONFLAG );
   DECLARE_IO_ARRAY( __AICONNECTSTATUSETHERNET );
   DECLARE_IO_ARRAY( __RIVULETSTATUS );
   DECLARE_IO_ARRAY( __AORMATTRSVIDCOUNTIN );
   DECLARE_IO_ARRAY( __AORMATTRRGBCOUNTIN );
   DECLARE_IO_ARRAY( __AORMATTRHDCOUNTIN );
   DECLARE_IO_ARRAY( __AORMATTRSVIDCOUNTOUT );
   DECLARE_IO_ARRAY( __AORMATTRRGBCOUNTOUT );
   DECLARE_IO_ARRAY( __AORMATTRHDCOUNTOUT );
   DECLARE_IO_ARRAY( __TXROOMMESSAGEETHERNET );
   DECLARE_IO_ARRAY( __TXROOMMESSAGELOCAL );
   DECLARE_IO_ARRAY( __TXROOMMESSAGESERIAL );
   DECLARE_IO_ARRAY( __TXRMTXTNAME );
   DECLARE_IO_ARRAY( __TXRMBTNNAME );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, __RXTB_CHANNEL1_STATUS );
   DECLARE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGEETHERNET );
   DECLARE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGELOCAL );
   DECLARE_STRING_ARRAY( S2_ConferenceHub1, __RXROOMMESSAGESERIAL );
};

START_NVRAM_VAR_STRUCT( S2_ConferenceHub1 )
{
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, __GSNAME );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, __GSVERSION );
   DECLARE_STRING_STRUCT( S2_ConferenceHub1, __GSTYPE );
   unsigned short __GIROOMCOUNT;
   unsigned short __GBCONFROOM;
   unsigned short __GBSIMULATEORS;
   unsigned short __GISVIDEO;
   unsigned short __GIRGB;
   unsigned short __GIHD;
   unsigned short __GIAUDIO;
   unsigned short __GBVTC;
   unsigned short __GIVTCINDEX;
   unsigned short __GIGLOBALSTATE;
   unsigned short __GITIMEOUTCOUNT;
   unsigned short __GINOUPDATEDELAY;
   unsigned short __GIFIXEDENDPOINTCOUNT;
   unsigned short __GICUSTOMENDPOINTCOUNT;
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIMAPETHERNET );
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIMAPLOCAL );
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIMAPSERIAL );
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIMAPROOM );
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIROOMCONNECTCOUNT );
   DECLARE_INTARRAY( S2_ConferenceHub1, __GIROOMSTATUSDISABLE );
   DECLARE_STRUCT( S2_ConferenceHub1, VTC_RESOURCE, __GHUBVTC );
   DECLARE_STRUCT_ARRAY( S2_ConferenceHub1, __GENDPOINTS );
};



#endif //__S2_CONFERENCEHUB1_H__

