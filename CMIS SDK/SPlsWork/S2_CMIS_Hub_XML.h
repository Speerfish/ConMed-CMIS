#ifndef __S2_CMIS_HUB_XML_H__
#define __S2_CMIS_HUB_XML_H__


#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_Library.h"
#include "S2_CMIS_Hub_XML.h"
#include "S2_CMIS_Hub_XML.h"



/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


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

START_GLOBAL_VAR_STRUCT( S2_CMIS_Hub_XML )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_CMIS_Hub_XML )
{
};


void S2_CMIS_Hub_XML__XMLINIT ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLFILLBUFFER ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLFILLTOINDEX ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLEOF ( struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLPUTBUFFER ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , struct StringHdr_s* __BUFFER ) ;
unsigned short S2_CMIS_Hub_XML__XMLPARSETAGID ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLPARSETOSYMBOL ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , struct StringHdr_s* __SYMBOL , unsigned short __SAVEVALUE ) ;
unsigned short S2_CMIS_Hub_XML__XMLPARSETOSTRING ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , struct StringHdr_s* __SSTRING , unsigned short __SAVEVALUE ) ;
unsigned short S2_CMIS_Hub_XML__PARSETOENDCOMMENT ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLGETTAG ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , unsigned short __SAVEVALUE ) ;
unsigned short S2_CMIS_Hub_XML__XMLPARSETOCLOSE ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , struct StringHdr_s* __XMLPARAMS ) ;
unsigned short S2_CMIS_Hub_XML__XMLPARSEHEADER ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
struct StringHdr_s* S2_CMIS_Hub_XML__XMLGETVALUE ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
struct StringHdr_s* S2_CMIS_Hub_XML__XMLGETSTRING ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned short S2_CMIS_Hub_XML__XMLGETINT ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
unsigned long S2_CMIS_Hub_XML__XMLGETLONG ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;
short S2_CMIS_Hub_XML__XMLGETNEXTTAG ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA , struct StringHdr_s* __XMLPARENTTAG , struct StringArrayHdr_s* __XMLTAGARRAY , unsigned short __NUM ) ;
unsigned short S2_CMIS_Hub_XML__XMLCRC ( struct StringHdr_s* __SDATA , unsigned short __ISTART ) ;
unsigned short S2_CMIS_Hub_XML__XMLVERIFYCRC ( struct StringArrayHdr_s* __XMLSTRINGS , struct IntArrayHdr_s* __XMLDATA ) ;

#endif //__S2_RIVULET_H__

