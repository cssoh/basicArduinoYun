#include <Console.h>

String myName; // string variable to hold name
int age; // int variable to hold age
float height; // float variable to hold height

void setup() {
  // put your setup code here, to run once:
  // Initialize serial communication
  Bridge.begin();
  Console.begin();

  while(!Console); // wait for console to connect

  Console.print("Initializing the bridge...");
  Console.println("Done");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Console.println("Enter your name:");//promt the user to enter name
  while(Console.available()==0) {
    // wait for user input
  }
  myName = Console.readStringUntil('\n');// read the string

  Console.println("Enter your age:");//promt the user to enter age
  while(Console.available()==0) {
    // wait for user input
  }
  age = Console.readStringUntil('\n').toInt();// read the integer

  Console.println("Enter your height:");//promt the user to enter height
  while(Console.available()==0) {
    // wait for user input
  }
  height = Console.readStringUntil('\n').toFloat();// read the float

  Console.println("");
  Console.print("Hello ");
  Console.print(myName);
  Console.print(", you are ");
  Console.print(age);
  Console.print(" years old and you are ");
  Console.print(height);
  Console.println("cm tall.");
  Console.println("");
}
