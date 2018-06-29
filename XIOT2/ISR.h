/*
 * ISR.h
 *
 *  Created on: Jun 29, 2018
 *      Author: EslamAkrm
 */

#ifndef ISR_h
#define ISR_h
#include <Arduino.h>
class ISRR {
  public:
	  byte ledPin;
	  byte switchPin;
	  void (*isrFunction)(void);
	  void ledControl();

    ISRR(byte,byte,void (*)(void) );
};

#endif /* ISR_H_ */

