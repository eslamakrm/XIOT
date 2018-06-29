void ledControl(int ledPin,int switchPin);
#define LED1 4
#define SWITCH1 2
#define LED2 5
#define SWITCH2 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ledControl(LED1,SWITCH1,ISR1);
  ledControl(LED2,SWITCH2,ISR2);
}

void loop() {
  // put your main code here, to run repeatedly:

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
  if(digitalRead(LED1)==LOW){
  digitalWrite(LED1,HIGH);
  Serial.println("PRESSED");
  Serial.println("ON");
  }
  interrupts();

  
}
void ISR2()
{
  noInterrupts();
  if(digitalRead(LED2)==LOW){
  digitalWrite(LED2,HIGH);
  Serial.println("PRESSED");
  Serial.println("ON");
  }
  interrupts();
}

