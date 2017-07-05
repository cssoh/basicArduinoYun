#include <Console.h>

int redLEDpin=9; // pin 9 as output to red LED
int greenLEDpin=10; // pin 10 as output to green LED
int redOnTime=250; // red LED on time
int redOffTime=750; // red LED off time
int greenOnTime=750; // green LED on time
int greenOffTime=250; // green LED off time
int numRedBlink; // number of times to blink red LED
int numGreenBlink=2; // number of times to blink green LED
String redMessage="Red LED is blinking."; // red LED message 
String greenMessage="Green LED is blinking.";// green LED message
int i;

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
  Console.setTimeout(100000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Console.println("How many times to blink red LED?");//prompt user for input
  while(Console.available()==0) {
    // Wait for input from user.  
  }
  numRedBlink=Console.parseInt();// read user input as integer
  Console.print("Blink red LED ");
  Console.print(numRedBlink);
  Console.println(" times.\n");
                               
  Console.println("How many times to blink green LED?");//prompt user for input
  while(Console.available()==0) {
    // Wait for input from user.  
  }
  numGreenBlink=Console.parseInt();// read user input as integer
  Console.print("Blink green LED ");
  Console.print(numGreenBlink);
  Console.println(" times.\n");
  
  Console.println(redMessage);
  for(i=0;i<numRedBlink;i++)
  {
    Console.print("Red LED blinks #");
    Console.println(i+1);
    digitalWrite(redLEDpin,HIGH);
    delay(redOnTime);
    digitalWrite(redLEDpin,LOW);
    delay(redOffTime);
  }
  
  Console.println(" ");
  
  Console.println(greenMessage);
  for(i=0;i<numGreenBlink;i++)
  {
    Console.print("Green LED blinks #");
    Console.println(i+1);
    digitalWrite(greenLEDpin,HIGH);
    delay(greenOnTime);
    digitalWrite(greenLEDpin,LOW);
    delay(greenOffTime);
  }

  Console.println(" ");
  
}
