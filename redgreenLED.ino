int redLEDpin=9; // pin 9 as output to red LED
int greenLEDpin=10; // pin 10 as output to green LED
int redOnTime=250; // red LED on time
int redOffTime=750; // red LED off time
int greenOnTime=750; // green LED on time
int greenOffTime=250; // green LED off time
int numRedBlink=10; // number of times to blink red LED
void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDpin,OUTPUT);
  pinMode(greenLEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<numRedBlink;i++)
  {
    digitalWrite(redLEDpin,HIGH);
    delay(redOnTime);
    digitalWrite(redLEDpin,LOW);
    delay(redOffTime);
  }
  digitalWrite(greenLEDpin,HIGH);
  delay(greenOnTime);
  digitalWrite(greenLEDpin,LOW);
  delay(greenOffTime);
}
