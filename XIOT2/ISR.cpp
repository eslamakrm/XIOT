/*
 * ISR.cpp
 *
 *  Created on: Jun 29, 2018
 *      Author: EslamAkrm
 */

#include <Arduino.h>


#include "ISR.h"

ISRR::ISRR(int ledPin ,int switchPin,void (*isrFunction)(void)) {
	// TODO Auto-generated constructor stub
this->ledPin = ledPin;
this->switchPin = switchPin;
this->isrFunction = isrFunction;

}

void ISRR::ledControl()
{
	  pinMode(ledPin,OUTPUT);
	  pinMode(switchPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(switchPin), isrFunction, LOW);
}




