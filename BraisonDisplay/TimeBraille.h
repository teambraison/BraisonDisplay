//
// File			TimeBraille.h
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
// Date			9/17/14 11:26 AM
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


#ifndef TimeBraille_h
#define TimeBraille_h

#include "NumberBraille.h"
#include <time.h>
#include "BrailleCell.h"

class TimeBraille
{
public:
    TimeBraille(BrailleCell cell1, BrailleCell cell2);
    TimeBraille();
    ~TimeBraille();
    void displayTimeInMinutes();
    void displayTimeInHours();
    void displayTimeInSeconds();
    int getCurrentTime();
private:
    const int* getNumberPattern(int num);
    BrailleCell timeCell1;
    BrailleCell timeCell2;
};




#endif
