
#include "XBEE.h"

//XBEE::Platform boardType;

struct XBEE::ChipDef_t chipDef;

HardwareSerial* XBEE::cmdPort;
/**
 * serialInterface 1 indicates Serial. serialInterface 2 indicates Serial1....
 */
void XBEE::Initialize(long baud, int serialInterface)
{

	//Make these constants.
	if(baud > 115200)
		baud = 115200;
	else if(baud < 300)
		baud = 300;

  
  chipDef.boardType = Default;
  chipDef.numSerial = 1;

  #ifdef __AVR_ATtiny85__
  
  //This is Trinket, Gemma, Digispark
  chipDef.boardType = Digispark;
  chipDef.numSerial = 0;
  
  #elif _AVR_ATmega328_
  
  //This is an Uno.
  
  chipDef.boardType = Uno;
  chipDef.numSerial = 1;
  
  
  #elif __AVR_ATmega32U4__
  
  //This is a leonardo (micro)
  chipDef.boardType = Leonardo;
  chipDef.numSerial = 2;
  
  #elif __AVR_ATmega2560__
  
  //This is a MEGA
  chipDef.boardType = Mega;
  chipDef.numSerial = 5;
  
  #elif __SAM3X8E__
  
  //This is a DUE
  chipDef.boardType = Due;
  chipDef.numSerial = 5;
  
  #endif


  if(serialInterface > chipDef.numSerial)
  {
    serialInterface = chipDef.numSerial;
  }

  if(serialInterface == 1)
    cmdPort = (HardwareSerial*)&Serial;

#ifdef __AVR_ATmega32U4__

  else if(serialInterface == 2)
    cmdPort = (HardwareSerial*)&Serial1;

#elif __AVR_ATmega2560__

  else if(serialInterface == 2)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 3)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 4)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 5)
    cmdPort = (HardwareSerial*)&Serial1;
           
#elif __SAM3X8E__
    
  else if(serialInterface == 2)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 3)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 4)
    cmdPort = (HardwareSerial*)&Serial1;
  else if(serialInterface == 5)
    cmdPort = (HardwareSerial*)&Serial1;

#endif


}








