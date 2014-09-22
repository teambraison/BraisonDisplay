//
// File			Display.h
// Header
//
// Details		Display handles the input of data and translate it into Braille led and lcd format.
//	
// Project		 BraisonDisplay
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author		Titus Cheng
// 				Braison
//
// Date			9/18/14 12:19 AM
// Version		<#version#>
// 
// Copyright	© Titus Cheng, 2014
// License    <#license#>
//
// See			ReadMe.txt for references
//

#include "Arduino.h"


#ifndef Display_h
#define Display_h

#include "BrailleCell.h"
#include "EnglishBraille.h"
#include "NumberBraille.h"


class Display
{
public:
    Display(BrailleCell cell1, BrailleCell cell2, BrailleCell cell3, BrailleCell cell4, BrailleCell cell5);
    Display();
    ~Display();
    void displayText(String text);
    void clear();
    void displayTime(int time1, int time2, boolean repeat, int interval);
private:
    BrailleCell *cells;
    NumberBraille numberBraille;
    const int* getEnglishCharacterPattern(char c);
};

#endif
