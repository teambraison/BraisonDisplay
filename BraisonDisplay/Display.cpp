//
// Display.cpp 
// C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		BraisonDisplay
//
// Created by 	Titus Cheng, 9/18/14 12:19 AM
// 				Braison
//
// Copyright	© Titus Cheng, 2014
// License   	<#license#>
//
// See 			Display.h and ReadMe.txt for references
//


#include "Display.h"
#include "NumberBraille.h"
#include <string>
#include <LiquidCrystal.h>

#define DEFAULT_TIME_SLOT "00"
#define TIME_PLACEHOLDER "0"
#define DEFAULT_TIME_NUM 0
#define EXTRACT_HUNDREDTH(x) (x / 10)
#define EXTRACT_TENTH(x) (x % 10)

#define NUMBER_OF_CELLS 5

#define LCD_FIRST_ROW_END 16
#define LCD_SECOND_ROW_END 32

LiquidCrystal myLCD(12,11,5,4,3,2);

Display::Display(BrailleCell cell1, BrailleCell cell2, BrailleCell cell3, BrailleCell cell4, BrailleCell cell5)
{
    cells[0] = cell1;
    cells[1] = cell2;
    cells[2] = cell3;
    cells[3] = cell4;
    cells[4] = cell5;
    numberBraille = NumberBraille();
}

Display::Display()
{
    
}

Display::~Display()
{
    
}

//Clear lcd display along with every pin
void Display::clear()
{
    myLCD.clear();
    for(int i = 0; i < NUMBER_OF_CELLS; i++)
    {
        cells[i].clear();
    }
}

void Display::displayTime(int time1, int time2, boolean repeat, int interval)
{
    clear();
    if(repeat) {
        
    }
    if(time1 < 10 && time1 >= 0)
    {
        myLCD.print(String(TIME_PLACEHOLDER) + time1);
        cells[0].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
        cells[1].displayPattern(numberBraille.getNumberPattern(time1));
        
    }
    else if(time1 >= 10) {
        myLCD.print(String(time1));
        
        cells[0].displayPattern(numberBraille.getNumberPattern(EXTRACT_HUNDREDTH(time1)));
        cells[1].displayPattern(numberBraille.getNumberPattern(EXTRACT_TENTH(time1)));
    }
    else {
        myLCD.print(String(DEFAULT_TIME_SLOT));
        cells[0].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
        cells[1].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
    }
    
    if(time2 < 10 && time2 >= 0) {
        myLCD.print(String(TIME_PLACEHOLDER + time2));
        cells[2].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
        cells[3].displayPattern(numberBraille.getNumberPattern(time2));
    }
    else if(time2 > 10) {
        myLCD.print(String(time2));
        
        cells[2].displayPattern(numberBraille.getNumberPattern(EXTRACT_HUNDREDTH(time2)));
        cells[3].displayPattern(numberBraille.getNumberPattern(EXTRACT_HUNDREDTH(time2)));
    }
    else {
        myLCD.print(String(DEFAULT_TIME_SLOT));
        cells[2].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
        cells[3].displayPattern(numberBraille.getNumberPattern(DEFAULT_TIME_NUM));
    }
}
                                

void Display::displayText(String text)
{
    clear();
    if(text.length() > 0 && text.length() <= LCD_FIRST_ROW_END) {
        myLCD.setCursor(0, 0);
        myLCD.print(text);
    }
    else if(text.length() > LCD_FIRST_ROW_END && text.length() <= LCD_SECOND_ROW_END){
        myLCD.setCursor(0, 0);
        myLCD.print(text.substring(0, LCD_FIRST_ROW_END - 1));
        myLCD.setCursor(1, 0);
        myLCD.print(text.substring(LCD_FIRST_ROW_END, LCD_SECOND_ROW_END - 1));
    }
    else {
        myLCD.setCursor(0,0);
        myLCD.print("Text too long");
    }
}





const int* Display::getEnglishCharacterPattern(char c)
{
    int engChar = c;
    switch(engChar)
    {
        case 97:
            return A;
            break;
        case 98:
            return B;
            break;
        case 99:
            return C;
            break;
        case 100:
            return D;
            break;
        case 101:
            return E;
            break;
        case 102:
            return F;
            break;
        case 103:
            return G;
            break;
        case 104:
            return H;
            break;
        case 105:
            return I;
            break;
        case 106:
            return J;
            break;
        case 107:
            return K;
            break;
        case 108:
            return L;
            break;
        case 109:
            return M;
            break;
        case 110:
            return N;
            break;
        case 111:
            return O;
            break;
        case 112:
            return P;
            break;
        case 113:
            return Q;
            break;
        case 114:
            return R;
            break;
        case 115:
            return S;
            break;
        case 116:
            return T;
            break;
        case 117:
            return U;
            break;
        case 118:
            return V;
            break;
        case 119:
            return W;
            break;
        case 120:
            return X;
            break;
        case 121:
            return Y;
            break;
        case 122:
            return Z;
            break;
        default:
            return A;
            break;
    }
}
