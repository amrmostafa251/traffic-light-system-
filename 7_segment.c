/*
 * _7_segment.c
 *
 * Created: 06/01/2024 10:27:24 م
 *  Author: AMR MOSTAFA
 */ 
#include "DIO.h"
#include "7_segment.h"
#include "std_macros.h"
void seven_segment_intialize(unsigned char portname)
{
	DIO_SET_PORT_DIRECTION(portname,0xff);
}
void seven_segment_write(unsigned char portname,unsigned char  outputvalue)
{
	unsigned char arr[]={ 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};

	DIO_PORT_WRITE(portname,arr[outputvalue]);

}
void seven_segment_with_pcd_initialize(unsigned char portnamber , unsigned char upper_lower_pins )
{
	switch (upper_lower_pins)
	{
		case 'h':
		case 'H':
		DIO_SET_PIN_DIRECTION(portnamber,4,1);
		DIO_SET_PIN_DIRECTION(portnamber,5,1);
		DIO_SET_PIN_DIRECTION(portnamber,6,1);
		DIO_SET_PIN_DIRECTION(portnamber,7,1);
		break;
	
		
		case 'l':
		case 'L':
		DIO_SET_PIN_DIRECTION(portnamber,0,1);
		DIO_SET_PIN_DIRECTION(portnamber,1,1);
		DIO_SET_PIN_DIRECTION(portnamber,2,1);
		DIO_SET_PIN_DIRECTION(portnamber,3,1);
		break;
	}		
}
void seven_segment_with_pcd_write(unsigned char portnamber , unsigned char upper_lower_pins, unsigned char outputval  )
{
	switch(upper_lower_pins)
	{
		case 'l':
		case 'L':
		DIO_WRITE(portnamber,0,READ_BIT(outputval,0));
		DIO_WRITE(portnamber,1,READ_BIT(outputval,1));
		DIO_WRITE(portnamber,2,READ_BIT(outputval,2));
		DIO_WRITE(portnamber,3,READ_BIT(outputval,3));
		break;
		case 'h':
		case 'H':
		DIO_WRITE(portnamber,4,READ_BIT(outputval,0));
		DIO_WRITE(portnamber,5,READ_BIT(outputval,1));
		DIO_WRITE(portnamber,6,READ_BIT(outputval,2));
		DIO_WRITE(portnamber,7,READ_BIT(outputval,3));
		break;
	} 
	
	
}