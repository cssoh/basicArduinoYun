#include <Console.h>

int redLEDpin=11; // pin 11 output to LED (using PWM)

void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDpin, OUTPUT); // set pin as analog output

  // Initialize serial communication
  Bridge.begin();
  Console.begin();

  while(!Console); // wait for console to connect

  Console.print("Initializing the bridge...");
  Console.println("Done");
}

int analog2discrete(int analogValue)
{
  int maxVoltage=5; // maximum analog voltage in volt
  int maxDigitalValue=pow(2,8)-1; // maximum number of discrete steps (resolution)
  int discreteValue;
 
  discreteValue=maxDigitalValue/maxVoltage*analogValue;
  // convert to corresponding discrete value
  return discreteValue;
}
void loop() {
  // put your main code here, to run repeatedly:
  int analogVoltage;//analog voltage in volt
  int discreteVoltage;

  for(int i=1; i<5; i++)
  {
    analogVoltage=i;
    discreteVoltage = analog2discrete(analogVoltage);
    analogWrite(redLEDpin,discreteVoltage);
    Console.print("discreteVoltage=");
    Console.println(discreteVoltage);
    delay(1000); // delay 1000ms
    analogWrite(redLEDpin,0);
    Console.println("Zero Voltage");
    delay(1000); // delay 1000ms
  }  
}
