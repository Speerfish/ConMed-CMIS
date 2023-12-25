#ifndef __S2_CLEARONE_CONVERGE_FEEDBACK_PROCESSOR_V1_3_H__
#define __S2_CLEARONE_CONVERGE_FEEDBACK_PROCESSOR_V1_3_H__


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


/*
* ANALOG_INPUT
*/


#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_FROM_DEVICE$_BUFFER_INPUT 0
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_FROM_DEVICE$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __FROM_DEVICE$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_TOPROGRAM$_STRING_OUTPUT 0


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
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_TEMPSTRING$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __TEMPSTRING$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_VALUE$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __VALUE$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_VALUE$_STRING_MAX_LEN );
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_FUNCTION$_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __FUNCTION$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_FUNCTION$_STRING_MAX_LEN );
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_CHANNEL$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __CHANNEL$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_CHANNEL$_STRING_MAX_LEN );
#define __S2_ClearOne_Converge_Feedback_Processor_v1_3_CHANNEL2$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __CHANNEL2$, __S2_ClearOne_Converge_Feedback_Processor_v1_3_CHANNEL2$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __RXOK;
   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __MARKER3;
   unsigned short __MARKER4;
   unsigned short __MARKER5;
   unsigned short __MARKER6;
   unsigned short __VALUE;
   unsigned short __CHANNEL;
   unsigned short __PARAMETER;
   unsigned short __UNIT;
   unsigned short __TYPE;
   unsigned short __FIELD;
   unsigned short __CHANNEL2;
   unsigned short __PARAMETER2;
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __VALUE$ );
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __FUNCTION$ );
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __CHANNEL$ );
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __CHANNEL2$ );
   DECLARE_STRING_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_ClearOne_Converge_Feedback_Processor_v1_3 )
{
};



#endif //__S2_CLEARONE_CONVERGE_FEEDBACK_PROCESSOR_V1_3_H__

