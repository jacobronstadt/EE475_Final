//this is master

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);

int state = 0;
const int ledPin = 8;
const int buttonPin = 2;
int buttonState = 1;
bool busy;
byte command;
String commandString;
char currentChar = '0';
bool charIncoming;
byte data;
bool rdy = 0;

#define ERROR (250)
#define START (253)
#define END (254)
#define STATUS (252)
#define ABORT (222)
#define CHAR_INCOMING (251)
#define ON (241)//fans on 
#define OFF (240)//fans off
//ESC control signals
#define MIN (1000)
#define MAX (2000)
#define READY (230)

void setup() 
{
  delay(500);
  BTSerial.begin(38400);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  //pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
  busy = 0;
  Serial.println("WAIT FOR FANS TO CALIBRATE");
  delay(500);
}


void loop() {
  
 if (Serial.available() > 0){
    commandString = Serial.readStringUntil('\n');
    unsigned int length = commandString.length();  
    char char_arr[length];    
    commandString.toCharArray(char_arr, length);
    
    if (commandString == "RESET"){
      busy = 0;
    } else if (commandString.equals("STATUS")) {
          if (busy) {
            Serial.println("SYSTEM BUSY");
          } else {
            
          }
    } else if (commandString.equals("ON")) {
      BTSerial.write(ON); 
    } else if (commandString.equals("OFF")) {
      BTSerial.write(OFF);   
    }
    else {
      if (length > 5) {
          Serial.println("STRING TOO LONG");
        } else {
          
        } 
        if (busy) {
          Serial.println("SYSTEM BUSY");
        } else {
            BTSerial.write(253);
            BTSerial.print(commandString);
            BTSerial.write(254);
            //BTSerial.print(commandString);
            //BTSerial.write(command);
            Serial.print("Sent: ");
            Serial.println(commandString);
        }
       
    }
    
   
    
 }
 if (BTSerial.available() > 0)
 { 
    
    // Checks whether data is comming from the serial port
    data = BTSerial.read(); // Reads the data from the serial port
    if (data == READY) {
      Serial.println("SYSTEM READY");
      rdy = 1;
    }
    Serial.print("..................................................recieved: ");
    Serial.println(data);
  
    if (data == CHAR_INCOMING) {
      charIncoming = 1;
    } else if (charIncoming) {
      currentChar = (char)data;
      Serial.print("Writing: ");
      Serial.println(currentChar);
      charIncoming = 0;
    }
    
    if (data == ERROR) {
      Serial.println("ERROR");
      busy = 0;
    }
    if (data == START) {
      busy = 1;
      Serial.println("START");
      Serial.println(" ... \nBUSY");
    } 
    if (data == END) {
      busy = 0;
      Serial.println("DONE");
      Serial.println("*******************************************************");
      Serial.println('\n');
    }
    
    
 }

}
