/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
String command;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  myservo.write(50);
}

void loop() {
  //FIXME will need to change to use integer values when integrating -- string needed for serial read
  if(Serial.available() > 0 ){
    command = Serial.readStringUntil('\n');

   
    //int pos = (int)(command) -48;
    Serial.print("pos: ");
    Serial.println(command);
    moveMarker(command);

    //myservo.write(pos);

  }
 
}


void moveMarker(String pos) {
 // Serial.println(command);
  if (pos.equals("0")) { // up
    Serial.println("move 0");
    // for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
         myservo.write(30);              // tell servo to go to position in variable 'pos'
         delay(15);                       // waits 15ms for the servo to reach the position
     // } 
  } else { // down
    Serial.println("move 1");
  //    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
        myservo.write(120);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
    //  }
  }
   
}
