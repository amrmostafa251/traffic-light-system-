/*
 * led.h
 *
 * Created: 31/12/2023 08:39:21 م
 *  Author: AMR MOSTAFA
 */ 


#ifndef LED_H_
#define LED_H_
void led_initiaize(unsigned char portname, unsigned char pinnumber);
void led_turn_on(unsigned char portname, unsigned char pinnumber);
void led_turn_off(unsigned char portname, unsigned char pinnumber);
void led_toggle(unsigned char portname, unsigned char pinnumber);




#endif /* LED_H_ */