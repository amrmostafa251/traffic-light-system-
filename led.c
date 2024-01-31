/*
 * led.c
 *
 * Created: 31/12/2023 08:39:36 م
 *  Author: AMR MOSTAFA
 */ 
#include "DIO.h"
#include "led.h"
void led_initiaize (unsigned char portname, unsigned char pinnumber)
{
	DIO_SET_PIN_DIRECTION(portname,pinnumber,1);
}
void led_turn_on (unsigned char portname, unsigned char pinnumber)
{
	DIO_WRITE(portname,pinnumber,1);
}
void led_turn_off (unsigned char portname, unsigned char pinnumber)
{
	DIO_WRITE(portname,pinnumber,0);
}
void led_toggle (unsigned char portname, unsigned char pinnumber)
{
	DIO_TOGGLE(portname,pinnumber);
}