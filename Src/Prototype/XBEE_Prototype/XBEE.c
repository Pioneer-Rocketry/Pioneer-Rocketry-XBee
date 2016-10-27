#include "XBEE.h"

Platform boardType;

#ifdef _AVR_ATmega328_

//This is an Uno.

boardType = Uno;

#elif __AVR_ATmega32U4__

//This is a leonardo (micro)
boardType = Leonardo;

#elif __AVR_ATtiny85__

//This is Trinket, Gemma, Digispark
boardType = Digispark;

#elif __AVR_ATmega2560__

//This is a MEGA
boardType = Mega;

#elif __SAM3X8E__

//This is a DUE
boardType = Due;

#else 

//This is something else
boardType = Default;

#endif

XBEE::Initialize(int baud, int serialInterface)
{

	//Make these constants.
	if(baud > 115200)
		baud = 115200;
	else if(baud < 300)
		baud = 300;

	

}