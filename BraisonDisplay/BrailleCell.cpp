//
// BrailleCell.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		Object Oriented Test
//
// Created by 	Titus Cheng, 9/16/14 7:09 PM
// 				Braison
//
// Copyright	© Titus Cheng, 2014
// License   	<#license#>
//
// See 			BrailleCell.h and ReadMe.txt for references
//


//// Core library - IDE-based
//#if defined(WIRING) // Wiring specific
//#include "Wiring.h"
//#elif defined(MAPLE_IDE) // Maple specific
//#include "WProgram.h"
//#elif defined(MPIDE) // chipKIT specific
//#include "WProgram.h"
//#elif defined(DIGISPARK) // Digispark specific
//#include "Arduino.h"
//#elif defined(ENERGIA) // LaunchPad MSP430 G2 and F5529, Stellaris and Tiva, Experimeter Board FR5739 specific
//#include "Energia.h"
//#elif defined(MICRODUINO) // Microduino specific
//#include "Arduino.h"
//#elif defined(TEENSYDUINO) // Teensy specific
//#include "Arduino.h"
//#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
//#include "Arduino.h"
//#else // error
//#error Platform not defined
//#endif // end IDE

// Code

#include "BrailleCell.h"

BrailleCell::BrailleCell(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6)
{
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    _pins[0] = pin1;
    _pins[1] = pin2;
    _pins[2] = pin3;
    _pins[3] = pin4;
    _pins[4] = pin5;
    _pins[5] = pin6;
}

BrailleCell::BrailleCell()
{
    
}

BrailleCell::~BrailleCell()
{
    
}

void BrailleCell::clear()
{
    for(int i = 0; i < BRAILLE_PINS; i++) {
        digitalWrite(_pins[i], LOW);
    }
}

void BrailleCell::test()
{
    for(int i = 0; i  < BRAILLE_PINS; i++) {
        digitalWrite(_pins[i], HIGH);
        delay(150);
    }
    clear();
}

void BrailleCell::displayPattern(const int pattern[])
{
    for(int i = 0;i < BRAILLE_PINS; i++)
    {
        if(pattern[i] == 1)
            digitalWrite(_pins[i], HIGH);
    }
}

void BrailleCell::activatePin(int pin)
{
    if(pin >= 0 && pin < BRAILLE_PINS)
        digitalWrite(_pins[pin], HIGH);
}
