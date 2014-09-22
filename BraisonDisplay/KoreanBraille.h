//
// File			KoreanBraille.h
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
// Date			9/22/14 10:18 AM
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

#ifndef KoreanBraille_h
#define KoreanBraille_h

const int G[] = {0,0,0,1,0,0};
const int N[] = {1,0,0,1,0,0};
const int D[] = {0,1,0,1,0,0};
const int R[] = {0,0,0,0,1,0};
const int M[] = {1,0,0,0,1,0};
const int B[] = {0,0,0,1,1,0};
const int S[] = {0,0,0,0,0,1};
const int J[] = {0,0,0,1,0,1};
const int CH[] = {0,0,0,0,1,1};
const int K[] = {1,1,0,1,0,0};
const int T[] = {1,1,0,0,1,0};
const int P[] = {1,0,0,1,1,0};
const int H[] = {0,1,0,1,1,0};
const int F_G[] = {1,0,0,0,0,0};
const int F_N[] = {0,1,0,0,1,0};
const int F_D[] = {0,0,1,0,1,0};
const int F_R[] = {0,1,0,0,0,0};
const int F_M[] = {0,1,0,0,0,1};
const int F_B[] = {1,1,0,0,0,0};
const int F_S[] = {0,0,1,0,0,0};
const int F_J[] = {1,0,1,0,0,0};
const int F_CH[] = {0,1,1,0,0,0};
const int F_K[] = {0,1,1,0,1,0};
const int F_T[] = {0,1,1,0,0,1};
const int F_P[] = {0,1,0,0,1,1};
const int F_H[] = {0,0,1,0,1,1};
const int F_NG[] = {0,1,1,0,1,1};

const int A[] = {1,1,0,0,0,1};
const int YA[] = {0,0,1,1,1,0};
const int EO[] = {0,1,1,1,0,0};
const int YEO[] = {1,0,0,0,1,1};
const int O[] = {1,0,1,0,0,1};
const int YO[] = {0,0,1,1,0,1};
const int U[] = {1,0,1,1,0,0};
const int YU[] = {1,0,0,1,0,1};
const int EU[] = {0,1,0,1,0,1};
const int I[] = {1,0,1,0,1,0};
const int E[] = {1,0,1,1,1,0};
const int AE[] = {1,1,1,0,1,0};
const int YE[] = {0,0,1,1,0,0};

const int UI[] = {0,1,0,1,1,1};
const int WA[] = {1,1,1,0,0,1};
const int WO[] = {1,1,1,1,0,0};
const int OE[] = {1,0,1,1,1,1};
const int YAE_1[] = {0,0,1,1,1,0};
const int YAE_2[] = {1,1,1,0,1,0};
const int WAE_1[] = {1,1,1,0,0,1};
const int WAE_2[] = {1,1,1,0,1,0};
const int WE_1[] = {1,1,1,1,0,0};
const int WE_2[] = {1,1,1,0,1,0};
const int WI_1[] = {1,0,1,1,0,0};
const int WI_2[] = {1,1,1,0,1,0};

const int GA[] = {1,1,0,1,0,1};
const int NA[] = {1,0,0,1,0,0};
const int DA[] = {0,1,0,1,0,0};
const int MA[] = {1,0,0,0,1,0};
const int BA[] = {0,0,0,1,1,0};
const int SA[] = {1,1,1,0,0,0};
const int JA[] = {0,0,0,1,0,1};
const int KA[] = {1,1,0,1,0,0};
const int TA[] = {1,1,0,0,1,0};
const int PA[] = {1,0,0,1,1,0};
const int HA[] = {0,1,0,1,1,0};
const int EOG[] = {1,0,0,1,1,1};
const int ONG[] = {1,1,1,1,1,1};
const int UI[] = {1,1,1,1,0,1};
const int OG[] = {1,0,1,1,0,1};
const int YEON[] = {1,0,0,0,0,1};
const int UN[] = {1,1,0,1,1,0};
const int ON[] = {1,1,1,0,1,1};
const int EON[] = {0,1,1,1,1,1};
const int EOL[] = {0,1,1,1,1,0};
const int YEOL[] = {1,1,0,0,1,1};
const int IN[] = {1,1,1,1,1,0};
const int YEONG[] = {1,1,0,1,1,1};
const int EUL[] = {0,1,1,1,0,1};
const int EUN[] = {1,0,1,0,1,1};
const int GAS_1[] = {0,0,0,1,1,1};
const int GAS_2[] = {0,1,1,1,0,0};





#endif
