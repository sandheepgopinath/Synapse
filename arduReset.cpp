/*
  arduReset.cpp - Library for flashing soft reseting Arduino Board.
  Created by Sandheep Gopinath, April 1 2016.
  Released into the public domain.
*/

#include "Arduino.h"
#include "arduReset.h"
#include<avr/wdt.h>


void arduReset::reset()
{
  delay(200);
  
   cli();                   //Disabling all other interupts
   wdt_reset();             //Resetting Watch Dog Timer

   WDTCSR|=B0001100;        //Entering Setup Mode of Watch Dog Timer
   WDTCSR=B00001110;        // Enabling interupts for delay one second
   sei();                   //Enabling watch dog interupts
   //WDTCSR=(1<<WDIE)|(1<<WDE)|(0<<WDP0)|(1<<WDP1)|(1<<WDP2)|(0<<WDP3);    // Compound bitwise operation for  WDTCSR=B01001110;
    

}

