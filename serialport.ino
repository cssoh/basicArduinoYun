#include <Console.h>

void setup() {
  // put your setup code here, to run once:
  // Initialize serial communication
  Bridge.begin();
  Console.begin();
  
  while(!Console); // wait for console to connect

  Console.print("Initializing the bridge...");
  Console.println("Done");
  
  int i=0;
  for(i=0;i<10;i++)
    Console.println(i);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
