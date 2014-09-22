//
// NumberBraille.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		BraisonDisplay
//
// Created by 	Titus Cheng, 9/22/14 9:16 AM
// 				Braison
//
// Copyright	© Titus Cheng, 2014
// License   	<#license#>
//
// See 			NumberBraille.h and ReadMe.txt for references
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

#include "NumberBraille.h"

// Code

NumberBraille::NumberBraille()
{
    
}

NumberBraille::~NumberBraille()
{
    
}

const int* getNumberPattern(int num)
{
    if(num < 10)
    {
        switch (num) {
            case 1:
                return ONE;
                break;
            case 2:
                return TWO;
                break;
            case 3:
                return THREE;
                break;
            case 4:
                return FOUR;
                break;
            case 5:
                return FIVE;
                break;
            case 6:
                return SIX;
                break;
            case 7:
                return SEVEN;
                break;
            case 8:
                return EIGHT;
                break;
            case 9:
                return NINE;
                break;
            case 0:
                return ZERO;
                break;
            default:
                return ZERO;
                break;
        }
    }
}


