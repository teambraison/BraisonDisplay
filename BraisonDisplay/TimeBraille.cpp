//
// TimeBraille.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		Object Oriented Test
//
// Created by 	Titus Cheng, 9/17/14 11:25 AM
// 				Braison
//
// Copyright	© Titus Cheng, 2014
// License   	<#license#>
//
// See 			TimeBraille.h and ReadMe.txt for references
//


#include "Arduino.h"

// Code
#include "TimeBraille.h"
#include "Time.h"

TimeBraille::TimeBraille(BrailleCell cell1, BrailleCell cell2)
{
    timeCell1 = cell1;
    timeCell2 = cell2;
}

TimeBraille::TimeBraille()
{
}

TimeBraille::~TimeBraille()
{
    
}

void TimeBraille::displayTimeInHours()
{
    int current_hour = hour();
    if(current_hour >= 0 && current_hour < 10)
    {
        timeCell1.displayPattern(getNumberPattern(0));
        timeCell2.displayPattern(getNumberPattern(current_hour));
    }
    else if(current_hour >= 10)
    {
        timeCell1.displayPattern(getNumberPattern(current_hour / 10));
        timeCell2.displayPattern(getNumberPattern(current_hour % 10));
    }
}

int TimeBraille::getCurrentTime()
{
    time_t time;
}





