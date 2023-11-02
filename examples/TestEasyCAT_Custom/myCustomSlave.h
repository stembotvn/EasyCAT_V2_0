#ifndef CUSTOM_PDO_NAME_H
#define CUSTOM_PDO_NAME_H

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project myCustomSlave.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT	1
#define CUST_BYTE_NUM_IN	5
#define TOT_BYTE_NUM_ROUND_OUT	4
#define TOT_BYTE_NUM_ROUND_IN	8


typedef union												//---- output buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_OUT];
	struct
	{
		uint8_t     myOutputVariable;
	}Cust;
} PROCBUFFER_OUT;


typedef union												//---- input buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_IN];
	struct
	{
		uint16_t    Arduino_AIN;
		uint8_t     Arduino_DIN;
	}Cust;
} PROCBUFFER_IN;

#endif