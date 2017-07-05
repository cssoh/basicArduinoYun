#include <Console.h>

int redLEDpin=9; // pin 9 as output to red LED
int greenLEDpin=10; // pin 10 as output to green LED
int redOnTime=250; // red LED on time
int redOffTime=750; // red LED off time
int greenOnTime=750; // green LED on time
int greenOffTime=250; // green LED off time
int numRedBlink=10; // number of times to blink red LED
String redMessage="Red LED is blinking."; // red LED message 
String greenMessage="Green LED is blinking.";// green LED message


void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDpin,OUTPUT);
  pinMode(greenLEDpin,OUTPUT);

  // Initialize serial communication
  Bridge.begin();
  Console.begin();

  while(!Console); // wait for console to connect

  Console.print("Initializing the bridge...");
  Console.println("Done");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  Console.println(redMessage);
  for(i=0;i<numRedBlink;i++)
  {
    Console.print("LED blinks #:");
    Console.println(i+1);
    digitalWrite(redLEDpin,HIGH);
    delay(redOnTime);
    digitalWrite(redLEDpin,LOW);
    delay(redOffTime);
  }
  
  Console.println(greenMessage);
  digitalWrite(greenLEDpin,HIGH);
  delay(greenOnTime);
  digitalWrite(greenLEDpin,LOW);
  delay(greenOffTime);
}
