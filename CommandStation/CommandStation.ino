//this is master

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);

int state = 0;
const int ledPin = 8;
const int buttonPin = 2;
int buttonState = 1;

void setup() 
{
  BTSerial.begin(38400);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  //pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

byte command;
String commandString;

void loop() {
  
 if (Serial.available() > 0){
    commandString = Serial.readStringUntil('\n');
    unsigned int length = commandString.length();  
    char char_arr[length];    
    commandString.toCharArray(char_arr, length);

    BTSerial.write(253);
    BTSerial.print(commandString);
    BTSerial.write(254);
    //BTSerial.print(commandString);
    //BTSerial.write(command);
    Serial.print("Sent: ");
    Serial.println(commandString);
 }
 if(BTSerial.available() > 0)
 { 
    // Checks whether data is comming from the serial port
    state = BTSerial.read(); // Reads the data from the serial port
    Serial.print("recieved: ");
    Serial.println(state);
 }

}
