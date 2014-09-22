//
// File			NumberBraille.h
// Header
//
// Details		<#details#>
//	
// Project		 Object Oriented Test
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author		Titus Cheng
// 				Braison
//
// Date			9/17/14 11:56 AM
// Version		<#version#>
// 
// Copyright	© Titus Cheng, 2014
// License    <#license#>
//
// See			ReadMe.txt for references
//


// Core library - IDE-based
#if defined(WIRING) // Wiring specific
#include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific
#include "WProgram.h"
#elif defined(MPIDE) // chipKIT specific
#include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad MSP430 G2 and F5529, Stellaris and Tiva, Experimeter Board FR5739 specific
#include "Energia.h"
#elif defined(MICRODUINO) // Microduino specific
#include "Arduino.h"
#elif defined(TEENSYDUINO) // Teensy specific
#include "Arduino.h"
#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
#include "Arduino.h"
#else // error
#error Platform not defined
#endif // end IDE

#ifndef NumberBraille_h
#define NumberBraille_h

const int ONE[] = {1,0,0,0,0,0};
const int TWO[] =  {1,1,0,0,0,0};
const int THREE[] = {1,0,0,1,0,0};
const int FOUR[] = {1,0,0,1,1,0,0};
const int FIVE[] = {1,0,0,0,1,0};
const int SIX[] = {1,1,0,1,0,0};
const int SEVEN[] = {1,1,0,1,1,0};
const int EIGHT[] = {1,1,0,0,1,0};
const int NINE[] = {0,1,0,1,0,0};
const int ZERO[] = {0,1,0,1,1,0};

class NumberBraille
{
public:
    NumberBraille();
    ~NumberBraille();
    const int* getNumberPattern(int num);
};



#endif
