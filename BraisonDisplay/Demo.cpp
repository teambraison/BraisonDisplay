//
// Demo.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		BraisonDisplay
//
// Created by 	Titus Cheng, 9/18/14 4:24 PM
// 				Braison
//
// Copyright	© Titus Cheng, 2014
// License   	<#license#>
//
// See 			Demo.h and ReadMe.txt for references
//

#include "Demo.h"
#include "Time.h"

Demo::Demo(BrailleCell cell1, BrailleCell cell2, BrailleCell cell3, BrailleCell cell4, BrailleCell cell5)
{
    myCell1 = cell1;
    myCell2 = cell2;
    myCell3 = cell3;
    myCell4 = cell4;
    myCell5 = cell5;
    
    timeBraille1 = TimeBraille(myCell1, myCell2);
    timeBraille2 = TimeBraille(myCell3, myCell4);
    pinMode(indicator, OUTPUT);
    myDisplay = Display(cell1, cell2, cell3, cell4, cell5);
}

Demo::Demo()
{
    
}

Demo::~Demo()
{
    
}

void Demo::processCommand(String input)
{
    if(input.startsWith("display:"))
    {
        myDisplay.displayText(input.substring(7));
    }
    else if(input.startsWith("showtimehm:"))
    {
        displayTimeInHoursAndMinutes();
    }
    else if(input.startsWith("showtimems:"))
    {
        displayTimeInMinutesAndSeconds();
    }
    else if(input.startsWith("activatecell1:"))
    {
        myCell1.test();
    }
    else if(input.startsWith("activatecell2:"))
    {
        myCell2.test();
    }
    else if(input.startsWith("activatecell3:"))
    {
        myCell3.test();
    }
    else if(input.startsWith("activatecell4:"))
    {
        myCell4.test();
    }
    else if(input.startsWith("activatecell5:"))
    {
        myCell5.test();
    }
}

void Demo::activateIndicator(int duration)
{
    digitalWrite(indicator, HIGH);
    delay(duration);
    digitalWrite(indicator, LOW);
}

void Demo::displayTimeInHoursAndMinutes()
{
    Serial.print("Hour: ");
    Serial.print(hour());
    Serial.print(" Minutes: ");
    Serial.print(minute());
    Serial.println("");
    boolean shouldRepeat = false;
    int theInterval = 0;
    myDisplay.displayTime(hour(), minute(), shouldRepeat, theInterval);
    timeBraille1.displayTimeInHours();
    timeBraille2.displayTimeInMinutes();
}

void Demo::displayTimeInMinutesAndSeconds()
{
    boolean shouldRepeat = false;
    int timeInterval = 100;
    myDisplay.displayTime(minute(), second(), shouldRepeat, timeInterval);
    timeBraille1.displayTimeInMinutes();
    timeBraille2.displayTimeInSeconds();
}
