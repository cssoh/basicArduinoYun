#include <Console.h>

int analogInPin = A0; // assign input pin
int readValue; // Declaring varaible to store read analog value

void setup() {
  // put your setup code here, to run once:
  pinMode(analogInPin, INPUT); // set input pin

  // Initialize serial communication
  Bridge.begin();
  Console.begin();

  while(!Console); // waot for console to connect

  Console.print("Initializing the bridge...");
  Console.println("Done");
}

float digital2analog(int digitalValue)
{
  float maxAnalog = 5.0;
  int maxDiscrete = pow(2,10)-1;
  float analogValue;
  analogValue = maxAnalog/maxDiscrete*digitalValue;
  Console.println(analogValue);
  return analogValue;
}
void loop() {
  // put your main code here, to run repeatedly:
  readValue=analogRead(analogInPin); // read analog input value
  Console.print("Read Value= ");
  Console.println(readValue); // print read value to serial monitor

  float  analogVolt = digital2analog(readValue);// convert to
                      // analog voltage
  Console.print("Voltage = ");
  Console.print(analogVolt);
  Console.println("V.");
  delay(5000); // delay 5000ms
}
