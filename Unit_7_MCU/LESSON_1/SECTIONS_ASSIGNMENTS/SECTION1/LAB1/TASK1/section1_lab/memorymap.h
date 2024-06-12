/*
 * memorymap.h
 *
 * Created: 4/25/2024 12:35:59 PM
 *  Author: User
 */ 


#ifndef MEMORYMAP_H_
#define MEMORYMAP_H_

#define DDRA  (*(volatile unsigned char *)0x3A)
#define PORTA (*(volatile unsigned char *)0x3B)
#define PINA  (*(volatile unsigned char *)0x39)
#endif /* MEMORYMAP_H_ */