/*
 * TrafficLight.c
 *
 * Created: 26/01/2024 12:08:10 ص
 *  Author: AMR MOSTAFA
 */ 

#include <avr/io.h>
#include "timer.h"
#include "led.h"
#include "7_segment.h"
#include "traffic_light_conf.h"
volatile char counter0 =0;
volatile short counter1 =0;
volatile short counter2 =0; 
 signed char greencounter =26;
 signed char yalowcounter =5;
 signed char redcounter1 = 0;
 signed char redcounter2 = 30;
 signed char redcounter3 = 60;
 signed char redcounter4 = 90;
 char flag1=1;
 char flag2=0;
 char flag3=0;
 char flag4=0;

int main(void)
{
	timer0_ctc_mode_with_interrupt();
	seven_segment_intialize('C');
	led_initiaize(road1_port,green_pin1);
	led_initiaize(road2_port,green_pin2);
	led_initiaize(road3_port,green_pin3);
	led_initiaize(road4_port,green_pin4);
	led_initiaize(road1_port,yallow_pin1);
	led_initiaize(road2_port,yallow_pin2);
	led_initiaize(road3_port,yallow_pin3);
	led_initiaize(road4_port,yallow_pin4);
	led_initiaize(road1_port,red_pin1);
	led_initiaize(road2_port,red_pin2);
	led_initiaize(road3_port,red_pin3);
	led_initiaize(road4_port,red_pin4);
	led_turn_on(road1_port,red_pin1);
	led_turn_on(road2_port,red_pin2);
	led_turn_on(road3_port,red_pin3);
	led_turn_on(road4_port,red_pin4);
	SET_BIT(DDRD,0);
	SET_BIT(DDRD,1);
	SET_BIT(DDRD,2);
	SET_BIT(DDRD,3);
	SET_BIT(DDRD,4);
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
    while(1)
    {
		CLR_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag1==0)
		{
			seven_segment_write('c',redcounter1%10);	
		}
		else if (flag1==1)
		{
			seven_segment_write('c',yalowcounter%10);
		}
		else if (flag1==2)
		{
			seven_segment_write('c',greencounter%10);
		}
		
		while (counter0==0);
		counter0=0;
		CLR_BIT(PORTD,1);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag1==0)
		{
			seven_segment_write('c',redcounter1/10);
		}
		else if (flag1==1)
		{
			seven_segment_write('c',yalowcounter/10);
		}
		else if (flag1==2)
		{
			seven_segment_write('c',greencounter/10);
		}
		while(counter0==0);
		counter0=0;
		CLR_BIT(PORTD,2);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag2==0)
		{
			seven_segment_write('c',redcounter2%10);
		}
		else if (flag2==1)
		{
			seven_segment_write('c',yalowcounter%10);
		}
		else if (flag2==2)
		{
			seven_segment_write('c',greencounter%10);
		}
		while(counter0==0);
		counter0=0;
		CLR_BIT(PORTD,3);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag2==0)
		{
			seven_segment_write('c',redcounter2/10);
		}
		else if (flag2==1)
		{
			seven_segment_write('c',yalowcounter/10);
		}
		else if (flag2==2)
		{
			seven_segment_write('c',greencounter/10);
		}
		while(counter0==0);
		counter0=0;
		CLR_BIT(PORTD,4);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag3==0)
		{
			seven_segment_write('c',redcounter3%10);
		}
		else if (flag3==1)
		{
			seven_segment_write('c',yalowcounter%10);
		}
		else if (flag3==2)
		{
			seven_segment_write('c',greencounter%10);
		}
		while(counter0==0);
		counter0=0;
		CLR_BIT(PORTD,5);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,6);
		SET_BIT(PORTD,7);
		if (flag3==0)
		{
			seven_segment_write('c',redcounter3/10);
		}
		else if (flag3==1)
		{
			seven_segment_write('c',yalowcounter/10);
		}
		else if (flag3==2)
		{
			seven_segment_write('c',greencounter/10);
		}
		while(counter0==0);
		counter0=0;
		CLR_BIT(PORTD,6);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,7);
		if (flag4==0)
		{
			seven_segment_write('c',redcounter4%10);
		}
		else if (flag4==1)
		{
			seven_segment_write('c',yalowcounter%10);
		}
		else if (flag4==2)
		{
			seven_segment_write('c',greencounter%10);
		}
		while(counter0==0);
		counter0=0;	
		CLR_BIT(PORTD,7);
		SET_BIT(PORTD,0);
		SET_BIT(PORTD,1);
		SET_BIT(PORTD,2);
		SET_BIT(PORTD,3);
		SET_BIT(PORTD,4);
		SET_BIT(PORTD,5);
		SET_BIT(PORTD,6);
		if (flag4==0)
		{
			seven_segment_write('c',redcounter4/10);
		}
		else if (flag4==1)
		{
			seven_segment_write('c',yalowcounter/10);
		}
		else if (flag4==2)
		{
			seven_segment_write('c',greencounter/10);
		}
		while(counter0==0);
		counter0=0;
		
		
		
		if (counter1>=1000)
		{
			counter1=0;
			redcounter1--;
			redcounter2--;
			redcounter3--;
			redcounter4--;
			// road  1
			if (redcounter1<=0)
			{
				led_turn_off(road1_port,red_pin1);
				flag1=2;
				greencounter--;
				if (greencounter<6&&greencounter>0)
				{
						led_toggle(road1_port,green_pin1);	
				}
				else 
				{
					
					led_turn_on(road1_port,green_pin1);
				}
				if (greencounter<=0)
				{
					led_turn_off(road1_port,green_pin1);
					led_turn_on(road1_port,yallow_pin1);
					flag1=1;
					yalowcounter--;
					if (yalowcounter<=0)
					{
						led_turn_off(road1_port,yallow_pin1);
						led_turn_on(road1_port,red_pin1);
						redcounter1=90;
						greencounter=25;
						yalowcounter=5;
						flag1=0;
					}
					else{}
				}
				else{}
			}				
			//road 2
			else if (redcounter2<=0)
			{
				led_turn_off(road2_port,red_pin2);
				flag2=2;
				greencounter--;
				if (greencounter<6&&greencounter>0)
				{
						led_toggle(road2_port,green_pin2);				
				}
				else
				{
					led_turn_on(road2_port,green_pin2);
				}
				if (greencounter<=0)
				{
					led_turn_off(road2_port,green_pin2);
					led_turn_on(road2_port,yallow_pin2);
					flag2=1;
					yalowcounter--;
					if (yalowcounter<=0)
					{
						led_turn_off(road2_port,yallow_pin2);
						led_turn_on(road2_port,red_pin2);
						redcounter2=90;
						greencounter=25;
						yalowcounter=5;
						flag2=0;
					}
					else{}
				}
				else{}
			}
			//road 3
			else if (redcounter3<=0)
			{
				led_turn_off(road3_port,red_pin3);
				flag3=2;
				greencounter--;
				if (greencounter<6&&greencounter>0)
				{
						led_toggle(road3_port,green_pin3);
				}
				else
				{
					led_turn_on(road3_port,green_pin3);
				}
				if (greencounter<=0)
				{
					led_turn_off(road3_port,green_pin3);
					led_turn_on(road3_port,yallow_pin3);
					flag3=1;
					yalowcounter--;
					if (yalowcounter<=0)
					{
						led_turn_off(road3_port,yallow_pin3);
						led_turn_on(road3_port,red_pin3);
						redcounter3=90;
						greencounter=25;
						yalowcounter=5;
						flag3=0;
					}
					else {}
				}else{}
			}	
			//road 4 	
			else if (redcounter4<=0)
			{
				led_turn_off(road4_port,red_pin4);

				flag4=2; 
				greencounter--;
				if (greencounter<6&&greencounter>0)
				{
					
						led_toggle(road4_port,green_pin4);
				}
				else
				{
					
					led_turn_on(road4_port,green_pin4);
				}
				if (greencounter<=0)
				{
					led_turn_off(road4_port,green_pin4);
					led_turn_on(road4_port,yallow_pin4);
					flag4=1;
					yalowcounter--;
					if (yalowcounter<=0)
					{
						led_turn_off(road4_port,yallow_pin4);
						led_turn_on(road4_port,red_pin4);
						redcounter4=90;
						greencounter=25;
						yalowcounter=5;
						flag4=0;
					}
					else{}
				}
				else{}
			}
			else{} 
		}
		
		else{}
	}
}        
ISR (TIMER0_COMP_vect)
{
	counter0++;
	counter1++;
	counter2++;
	
}