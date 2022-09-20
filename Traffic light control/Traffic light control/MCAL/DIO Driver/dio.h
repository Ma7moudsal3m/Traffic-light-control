/*
 * dio.h
 *
 * Created: 9/9/2022 6:16:39 PM
 *  Author: mahmo
 */ 


#ifndef DIO_H_
#define DIO_H_

//include registers.h
#include "../../Utilities/registers.h"
// all internal driver typedefs 
// all driver function prototypes

// all driver macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//direction defined

#define IN 0
#define OUT 1

//value defined

#define LOW 0
#define HIGH 1

// Initialize DIO direction
void DIO_init(uint8_t pinNumber, uint8_t portNumber, uint8_t direction);

// write data to DIO
void DIO_write(uint8_t pinNumber, uint8_t portNumber, uint8_t value);

// toggle DIO
void DIO_toggle(uint8_t pinNumber, uint8_t portNumber);

// read DIO
void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value);

#endif /* DIO_H_ */