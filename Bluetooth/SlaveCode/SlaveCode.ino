// +ADDR:14:3:5fe91


#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);

int state = 0;
const int led = 8;
const int button = 2;
int buttonstate = 1;

void setup() 
{
  Serial.begin(9600);
  BTSerial.begin(38400);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
}
void loop() 
{
 if(BTSerial.available() > 0)
 { 
    // Checks whether data is comming from the serial port
    state = BTSerial.read(); // Reads the data from the serial port
    Serial.println(state);

    BTSerial.write(state);
 }
 

}
