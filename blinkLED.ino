
int LEDpin=13; // use pin 13
int waitTimeOn=1000; // turn on delay for 1000ms
int waitTimeOff=1000; // turn of delay for 2000ms

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT); // pin 13 is output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin,HIGH); // turn on LED
  delay(waitTimeOn);//delay 1000ms
  digitalWrite(LEDpin,LOW); // turn off LED
  delay(waitTimeOff); // delay 100ms
}
