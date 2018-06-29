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
	  int ledPin;
	  int switchPin;
	  void (*isrFunction)(void);
	  void ledControl();

    ISRR(int,int,void (*)(void) );
};

#endif /* ISR_H_ */

