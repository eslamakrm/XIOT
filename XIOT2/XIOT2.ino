void ledControl(int ledPin,int switchPin);
#define led1 4
#define switch1 2
#define led2 5
#define switch2 3

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  ledControl(led1,switch1,ISR1);
  ledControl(led2,switch2,ISR2);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledControl(led1,switch1,ISR1);
  ledControl(led2,switch2,ISR2);
}

void ledControl(int ledPin,int switchPin,void (*ledOnISR)(void))
{
  

  pinMode(ledPin,OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(switchPin), ledOnISR, LOW);

}
void ISR1()
{
  noInterrupts();
  if(digitalRead(led1)==LOW){
  digitalWrite(led1,HIGH);
  Serial.println("PRESSED");
  Serial.println("ON");
  }
  interrupts();

  
}
void ISR2()
{
    noInterrupts();
  if(digitalRead(led2)==LOW){
  digitalWrite(led2,HIGH);
  Serial.println("PRESSED");
  Serial.println("ON");
  }
  interrupts();
}

