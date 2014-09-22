//
// File			BrailleCell.h
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
// Date			9/16/14 7:08 PM
// Version		<#version#>
// 
// Copyright	© Titus Cheng, 2014
// License    <#license#>
//
// See			ReadMe.txt for references
//


// Core library - IDE-based
#include "Arduino.h"

#ifndef BrailleCell_h
#define BrailleCell_h

#define BRAILLE_PINS 6

class BrailleCell
{
public:
    BrailleCell(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6);
    BrailleCell();
    ~BrailleCell();
    void displayPattern(const int pattern[]);
    void test();
    void activatePin(int pin);
    void clear();
private:
    int _pins[6];
};



#endif
