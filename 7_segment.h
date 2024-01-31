/*
 * _7_segment.h
 *
 * Created: 06/01/2024 10:27:50 م
 *  Author: AMR MOSTAFA
 */ 

#ifndef a_SEGMENT_H_
#define a_SEGMENT_H_
void seven_segment_intialize(unsigned char portname);
void seven_segment_write(unsigned char portname,unsigned char  outputvalue);
void seven_segment_with_pcd_initialize(unsigned char portnamber , unsigned char upper_lower_pins);
void seven_segment_with_pcd_write(unsigned char portnamber , unsigned char upper_lower_pins, unsigned char outputval );
#endif  /*7_SEGMENT_H_ */