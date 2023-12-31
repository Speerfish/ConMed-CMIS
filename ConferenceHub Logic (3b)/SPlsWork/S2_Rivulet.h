#ifndef __S2_RIVULET_H__
#define __S2_RIVULET_H__


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
* STRUCTURE S2_Rivulet__CMIS_ENDPOINT
*/
START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_ENDPOINT )
{
   unsigned short CMIS_ENDPOINT__CURRQST;
   unsigned short CMIS_ENDPOINT__CURSTATUS;
   unsigned short CMIS_ENDPOINT__CALLACTIVE;
   unsigned short CMIS_ENDPOINT__LINECNT;
   unsigned short CMIS_ENDPOINT__CFGTYPE;
   CREATE_INTARRAY1D( S2_Rivulet, CMIS_ENDPOINT__RIVULET_EPID, 4 );;
   DECLARE_INTARRAY( S2_Rivulet, CMIS_ENDPOINT__RIVULET_EPID );
};

/*
* STRUCTURE S2_Rivulet__RIVULET_ENDPOINT
*/
#define RIVULET_ENDPOINT__S2_Rivulet_EPNAME_STRING_MAX_LEN 30
#define RIVULET_ENDPOINT__S2_Rivulet_VEC_IP_STRING_MAX_LEN 30
START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_ENDPOINT )
{
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_ENDPOINT__EPNAME, RIVULET_ENDPOINT__S2_Rivulet_EPNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_ENDPOINT__EPNAME );
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_ENDPOINT__VEC_IP, RIVULET_ENDPOINT__S2_Rivulet_VEC_IP_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_ENDPOINT__VEC_IP );
   unsigned short RIVULET_ENDPOINT__EPTYPE;
   unsigned short RIVULET_ENDPOINT__CMIS_EPID;
   unsigned short RIVULET_ENDPOINT__CMIS_LINE;
   unsigned short RIVULET_ENDPOINT__CURSTATUS;
   unsigned short RIVULET_ENDPOINT__CALLACTIVE;
};

/*
* STRUCTURE S2_Rivulet__RIVULET_CONNECTION
*/
#define RIVULET_CONNECTION__S2_Rivulet_ERRORSTRING_STRING_MAX_LEN 200
#define RIVULET_CONNECTION__S2_Rivulet_CORRELATIONID_STRING_MAX_LEN 30
#define RIVULET_CONNECTION__S2_Rivulet_SERVICEID_STRING_MAX_LEN 30
#define RIVULET_CONNECTION__S2_Rivulet_SERVICECODE_STRING_MAX_LEN 30
START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_CONNECTION )
{
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__ERRORSTRING, RIVULET_CONNECTION__S2_Rivulet_ERRORSTRING_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__ERRORSTRING );
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__CORRELATIONID, RIVULET_CONNECTION__S2_Rivulet_CORRELATIONID_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__CORRELATIONID );
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__SERVICEID, RIVULET_CONNECTION__S2_Rivulet_SERVICEID_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__SERVICEID );
   CREATE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__SERVICECODE, RIVULET_CONNECTION__S2_Rivulet_SERVICECODE_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RIVULET_CONNECTION__SERVICECODE );
   unsigned short RIVULET_CONNECTION__ENDPOINT1;
   unsigned short RIVULET_CONNECTION__ENDPOINT2;
   unsigned short RIVULET_CONNECTION__CALLTYPE;
   unsigned short RIVULET_CONNECTION__CURRQST;
   unsigned short RIVULET_CONNECTION__CURSTATUS;
   unsigned short RIVULET_CONNECTION__CURTIMER;
   unsigned short RIVULET_CONNECTION__CMIS_CID;
};

/*
* STRUCTURE S2_Rivulet__CMIS_CONNECTION
*/
#define CMIS_CONNECTION__S2_Rivulet_ERRORSTRING_STRING_MAX_LEN 200
START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_CONNECTION )
{
   CREATE_STRING_STRUCT( S2_Rivulet, CMIS_CONNECTION__ERRORSTRING, CMIS_CONNECTION__S2_Rivulet_ERRORSTRING_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, CMIS_CONNECTION__ERRORSTRING );
   unsigned short CMIS_CONNECTION__ROOM1;
   unsigned short CMIS_CONNECTION__ROOM2;
   unsigned short CMIS_CONNECTION__CURRQST;
   unsigned short CMIS_CONNECTION__CURSTATUS;
   unsigned short CMIS_CONNECTION__CURTIMER;
   CREATE_INTARRAY1D( S2_Rivulet, CMIS_CONNECTION__RIVULET_CID, 4 );;
   DECLARE_INTARRAY( S2_Rivulet, CMIS_CONNECTION__RIVULET_CID );
   CREATE_INTARRAY1D( S2_Rivulet, CMIS_CONNECTION__RIVULET_STATUS, 4 );;
   DECLARE_INTARRAY( S2_Rivulet, CMIS_CONNECTION__RIVULET_STATUS );
};

/*
* STRUCTURE S2_Rivulet__RESPONSEDATA
*/
#define RESPONSEDATA__S2_Rivulet_COORELATIONID_STRING_MAX_LEN 30
#define RESPONSEDATA__S2_Rivulet_SERVICEID_STRING_MAX_LEN 30
#define RESPONSEDATA__S2_Rivulet_SERVICECODE_STRING_MAX_LEN 30
#define RESPONSEDATA__S2_Rivulet_API_CMD_RESP_STRING_MAX_LEN 50
#define RESPONSEDATA__S2_Rivulet_API_CMD_ERROR_STRING_MAX_LEN 100
#define RESPONSEDATA__S2_Rivulet_ENDPOINT_ALIAS_STRING_MAX_LEN 30
#define RESPONSEDATA__S2_Rivulet_ENDPOINT_STATUS_STRING_MAX_LEN 30
START_STRUCTURE_DEFINITION( S2_Rivulet, RESPONSEDATA )
{
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__COORELATIONID, RESPONSEDATA__S2_Rivulet_COORELATIONID_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__COORELATIONID );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__SERVICEID, RESPONSEDATA__S2_Rivulet_SERVICEID_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__SERVICEID );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__SERVICECODE, RESPONSEDATA__S2_Rivulet_SERVICECODE_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__SERVICECODE );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__API_CMD_RESP, RESPONSEDATA__S2_Rivulet_API_CMD_RESP_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__API_CMD_RESP );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__API_CMD_ERROR, RESPONSEDATA__S2_Rivulet_API_CMD_ERROR_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__API_CMD_ERROR );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__ENDPOINT_ALIAS, RESPONSEDATA__S2_Rivulet_ENDPOINT_ALIAS_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__ENDPOINT_ALIAS );
   CREATE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__ENDPOINT_STATUS, RESPONSEDATA__S2_Rivulet_ENDPOINT_STATUS_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Rivulet, RESPONSEDATA__ENDPOINT_STATUS );
   unsigned short RESPONSEDATA__INUSE;
};


/*
* Constructor and Destructor
*/
int S2_Rivulet_CMIS_ENDPOINT_Constructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_ENDPOINT ) * me, int nVerbose );
int S2_Rivulet_CMIS_ENDPOINT_Destructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_ENDPOINT ) * me, int nVerbose );
int S2_Rivulet_RIVULET_ENDPOINT_Constructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_ENDPOINT ) * me, int nVerbose );
int S2_Rivulet_RIVULET_ENDPOINT_Destructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_ENDPOINT ) * me, int nVerbose );
int S2_Rivulet_RIVULET_CONNECTION_Constructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_CONNECTION ) * me, int nVerbose );
int S2_Rivulet_RIVULET_CONNECTION_Destructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RIVULET_CONNECTION ) * me, int nVerbose );
int S2_Rivulet_CMIS_CONNECTION_Constructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_CONNECTION ) * me, int nVerbose );
int S2_Rivulet_CMIS_CONNECTION_Destructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, CMIS_CONNECTION ) * me, int nVerbose );
int S2_Rivulet_RESPONSEDATA_Constructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RESPONSEDATA ) * me, int nVerbose );
int S2_Rivulet_RESPONSEDATA_Destructor ( START_STRUCTURE_DEFINITION( S2_Rivulet, RESPONSEDATA ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Rivulet_SIGSTARTUPCOMPLETE_DIG_INPUT 0
#define __S2_Rivulet_SIGRIVULETCONNECTED_DIG_INPUT 1
#define __S2_Rivulet_DIDEBUG_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Rivulet_AIRIVLINKSTATUS_ANALOG_INPUT 0

#define __S2_Rivulet_SIRIVCONFIG_STRING_INPUT 2
#define __S2_Rivulet_SIRIVCONFIG_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Rivulet, __SIRIVCONFIG, __S2_Rivulet_SIRIVCONFIG_STRING_MAX_LEN );
#define __S2_Rivulet_SIVIDROUTE_STRING_INPUT 3
#define __S2_Rivulet_SIVIDROUTE_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Rivulet, __SIVIDROUTE, __S2_Rivulet_SIVIDROUTE_STRING_MAX_LEN );

#define __S2_Rivulet_RXRIVULET_BUFFER_INPUT 1
#define __S2_Rivulet_RXRIVULET_BUFFER_MAX_LEN 2176
CREATE_STRING_STRUCT( S2_Rivulet, __RXRIVULET, __S2_Rivulet_RXRIVULET_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Rivulet_DORIVLINKENABLE_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Rivulet_TXRIVULET_STRING_OUTPUT 0

#define __S2_Rivulet_AOCMIS_EPSTATUS_ANALOG_OUTPUT 1
#define __S2_Rivulet_AOCMIS_EPSTATUS_ARRAY_LENGTH 24
#define __S2_Rivulet_AORIVULET_EPSTATUS_ANALOG_OUTPUT 25
#define __S2_Rivulet_AORIVULET_EPSTATUS_ARRAY_LENGTH 24

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
#define __S2_Rivulet_GSRIVULETSESSIONID_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Rivulet, __GSRIVULETSESSIONID, __S2_Rivulet_GSRIVULETSESSIONID_STRING_MAX_LEN );
#define __S2_Rivulet_GSFMRIVULET_STRING_MAX_LEN 2176
CREATE_STRING_STRUCT( S2_Rivulet, __GSFMRIVULET, __S2_Rivulet_GSFMRIVULET_STRING_MAX_LEN );
#define __S2_Rivulet_GSRESPONSEMSG_STRING_MAX_LEN 2176
CREATE_STRING_STRUCT( S2_Rivulet, __GSRESPONSEMSG, __S2_Rivulet_GSRESPONSEMSG_STRING_MAX_LEN );
#define __S2_Rivulet_GSRECEIVERETURN_STRING_MAX_LEN 2176
CREATE_STRING_STRUCT( S2_Rivulet, __GSRECEIVERETURN, __S2_Rivulet_GSRECEIVERETURN_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_Rivulet_CMIS_EPTLIST_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Rivulet, __CMIS_EPTLIST, CMIS_ENDPOINT, __S2_Rivulet_CMIS_EPTLIST_STRUCT_MAX_LEN );
#define __S2_Rivulet_CMIS_CALLIST_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Rivulet, __CMIS_CALLIST, CMIS_CONNECTION, __S2_Rivulet_CMIS_CALLIST_STRUCT_MAX_LEN );
#define __S2_Rivulet_RIVULET_EPTLIST_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Rivulet, __RIVULET_EPTLIST, RIVULET_ENDPOINT, __S2_Rivulet_RIVULET_EPTLIST_STRUCT_MAX_LEN );
#define __S2_Rivulet_RIVULET_CALLIST_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Rivulet, __RIVULET_CALLIST, RIVULET_CONNECTION, __S2_Rivulet_RIVULET_CALLIST_STRUCT_MAX_LEN );
#define __S2_Rivulet_RESPONSELIST_STRUCT_MAX_LEN 20
CREATE_STRUCTURE_ARRAY( S2_Rivulet, __RESPONSELIST, RESPONSEDATA, __S2_Rivulet_RESPONSELIST_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Rivulet )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __AOCMIS_EPSTATUS );
   DECLARE_IO_ARRAY( __AORIVULET_EPSTATUS );
   DECLARE_STRING_STRUCT( S2_Rivulet, __SIRIVCONFIG );
   DECLARE_STRING_STRUCT( S2_Rivulet, __SIVIDROUTE );
   DECLARE_STRING_STRUCT( S2_Rivulet, __RXRIVULET );
};

START_NVRAM_VAR_STRUCT( S2_Rivulet )
{
   DECLARE_STRING_STRUCT( S2_Rivulet, __GSRIVULETSESSIONID );
   DECLARE_STRING_STRUCT( S2_Rivulet, __GSFMRIVULET );
   DECLARE_STRING_STRUCT( S2_Rivulet, __GSRESPONSEMSG );
   DECLARE_STRING_STRUCT( S2_Rivulet, __GSRECEIVERETURN );
   unsigned short __GIRIVULETFLAG;
   unsigned short __GIRIVULETDISCONNECTFLAG;
   unsigned short __GIRIVULETCONFIGURED;
   unsigned short __GIRIVULETCOORID;
   unsigned short __GIRIVULETCOUNT;
   unsigned short __GSRIVULETTIMER;
   unsigned short __GIRXSEMAPHORE;
   unsigned short __GIBUFFERSTARTPOS;
   DECLARE_STRUCT_ARRAY( S2_Rivulet, __CMIS_EPTLIST );
   DECLARE_STRUCT_ARRAY( S2_Rivulet, __CMIS_CALLIST );
   DECLARE_STRUCT_ARRAY( S2_Rivulet, __RIVULET_EPTLIST );
   DECLARE_STRUCT_ARRAY( S2_Rivulet, __RIVULET_CALLIST );
   DECLARE_STRUCT_ARRAY( S2_Rivulet, __RESPONSELIST );
};



#endif //__S2_RIVULET_H__

