//
// File			Demo.h
// Header
//
// Details		<#details#>
//	
// Project		 BraisonDisplay
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author		Titus Cheng
// 				Braison
//
// Date			9/18/14 4:24 PM
// Version		<#version#>
// 
// Copyright	© Titus Cheng, 2014
// License    <#license#>
//
// See			ReadMe.txt for references
//

#include "Arduino.h"
#include "Display.h"

#ifndef Demo_h
#define Demo_h

#define indicator 7

#include "TimeBraille.h"
#include "BrailleCell.h"

class Demo{
public:
    Demo(BrailleCell cell1, BrailleCell cell2, BrailleCell cell3, BrailleCell cell4, BrailleCell cell5);
    Demo();
    ~Demo();
    void processCommand(String input);
private:
    void clearAllPins();
    void displayTimeInHoursAndMinutes();
    void displayTimeInMinutesAndSeconds();
    void displayText(String text);
    void activateIndicator(int duration);
    TimeBraille timeBraille1;
    TimeBraille timeBraille2;
    BrailleCell myCell1;
    BrailleCell myCell2;
    BrailleCell myCell3;
    BrailleCell myCell4;
    BrailleCell myCell5;
    Display myDisplay;
};



#endif
