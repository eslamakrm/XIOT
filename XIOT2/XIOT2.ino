#include "ISR.h"

// the switches are connected as pullup
// so the interrupt state is LOW [triggered when the input signal = 0]
// LED pin is active high


#define LED1 4
#define SWITCH1 2
#define LED2 5
#define SWITCH2 3

void isr1(void);//prototypes for ISR functions
void isr2(void);

void setup() {

  Serial.begin(9600);

  ISRR ISR1(4, 2, isr1); // new member for ISR
  ISRR ISR2(5, 3, isr2);

  ISR1.ledControl(); //initialize ISR to allow led controlling using switch
  ISR2.ledControl();
}

void loop() {
  // put your main code here, to run repeatedly:

}
void isr1()
{

  if (digitalRead(LED1) == LOW) { //to make sure that this routine only excuted if the led is off so the serial print is done only once
    digitalWrite(LED1, HIGH);
    Serial.println("PRESSED");
    Serial.println("ON");

  }



}
void isr2()
{

  if (digitalRead(LED2) == LOW) {

    digitalWrite(LED2, HIGH);
    Serial.println("PRESSED");
    Serial.println("ON");

  }



}



