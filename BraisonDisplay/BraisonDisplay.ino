// 
// Object Oriented Test 
//
// Description of the project
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author	 	Titus Cheng
// 				Braison
//
// Date			9/16/14 6:47 PM
// Version		<#version#>
// 
// Copyright	© Titus Cheng, 2014
// License		<#license#>
//
// See			ReadMe.txt for references
//


#include <Arduino.h>

#include "BrailleCell.h"

#include "Demo.h"

#include "Time.h"



//Cell1
#define pin1 22
#define pin2 23
#define pin3 24
#define pin4 25
#define pin5 26
#define pin6 27

//Cell2
#define pin7 28
#define pin8 29
#define pin9 30
#define pin10 31
#define pin11 32
#define pin12 33

//Cell3
#define pin13 34
#define pin14 35
#define pin15 36
#define pin16 37
#define pin17 38
#define pin18 39

//Cell4
#define pin19 40
#define pin20 41
#define pin21 42
#define pin22 43
#define pin23 44
#define pin24 45

//Cell5
#define pin25 46
#define pin26 47
#define pin27 48
#define pin28 49
#define pin29 50
#define pin30 51

#define SERIAL_PORT 9600


BrailleCell cell1 = BrailleCell(pin1, pin2, pin3, pin4, pin5, pin6);
BrailleCell cell2 = BrailleCell(pin7, pin8, pin9, pin10, pin11, pin12);
BrailleCell cell3 = BrailleCell(pin13, pin14, pin15, pin16, pin17, pin18);
BrailleCell cell4 = BrailleCell(pin19, pin20, pin21, pin22, pin23, pin24);
BrailleCell cell5 = BrailleCell(pin25, pin26, pin27, pin28, pin29, pin30);

String input;
Demo myDemo;

// Brief	Setup
// Details	Define the pin the LED is connected to
//
// Add setup code 
void setup() {
//    Serial.begin(SERIAL_PORT);
//    input = "";
//    
//    //myDemo controls all five cells for demostration purpose.
//    myDemo = Demo(cell1, cell2, cell3, cell4, cell5);
    
}

//
// Brief	Loop
// Details	Call blink
//
// Add loop code 
void loop() {
    Serial.println(hour());
    Serial.print(":");
    Serial.print(minute());
    Serial.println("");
//    if(Serial.available())
//    {
//        char data = Serial.read();
//        //Using ';' as a deliminator
//        if(data == '[')
//        {
//            input = String();
//        }
//        else if(data == ']')
//        {
//            input = String(input + data);
//        }
//        else
//        {
//            myDemo.processCommand(input);
//            input = String();
//        }
//    }
}
