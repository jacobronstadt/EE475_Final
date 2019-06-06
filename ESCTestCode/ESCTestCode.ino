
#include <Servo.h>
#define MIN (1000)
#define MAX (2000)

int value = 0; // set values you need to zero

Servo firstESC, secondESC, thirdESC, fourthESC; //Create as much as Servoobject you want. You can controll 2 or more Servos at the same time

void setup() {

  firstESC.attach(3); 
  secondESC.attach(4);// attached to pin 9 I just do this with 1 Servo
  thirdESC.attach(5); 
  fourthESC.attach(6);
  
  Serial.begin(9600);    // start serial at 9600 baud
  delay(2000);
  firstESC.writeMicroseconds(MAX);
  secondESC.writeMicroseconds(MAX);
  thirdESC.writeMicroseconds(MAX);
  fourthESC.writeMicroseconds(MAX);
  Serial.println("max");
  
  delay(10000);
  
  firstESC.writeMicroseconds(MIN);
  secondESC.writeMicroseconds(MIN);
  thirdESC.writeMicroseconds(MIN);
  fourthESC.writeMicroseconds(MIN);
  Serial.println("min");
  
  delay(4000);
  
  Serial.println("arm");
  firstESC.writeMicroseconds(1010);
  secondESC.writeMicroseconds(1010);
  thirdESC.writeMicroseconds(1010);
  fourthESC.writeMicroseconds(1010);
  delay(5000);
}

void loop() {

//First connect your ESC WITHOUT Arming. Then Open Serial and follo Instructions
  delay(500);
  Serial.println("on");
  int speed1 = 1200;
  firstESC.writeMicroseconds(speed1);
  secondESC.writeMicroseconds(speed1);
  thirdESC.writeMicroseconds(speed1);
  fourthESC.writeMicroseconds(speed1);
  delay(2000);

//  speed1 += 200;
//  firstESC.writeMicroseconds(speed1);
//  secondESC.writeMicroseconds(speed1);
//  thirdESC.writeMicroseconds(speed1);
//  fourthESC.writeMicroseconds(speed1);
//  delay(2000);
//
//  speed1 += 200;
//  firstESC.writeMicroseconds(speed1);
//  secondESC.writeMicroseconds(speed1);
//  thirdESC.writeMicroseconds(speed1);
//  fourthESC.writeMicroseconds(speed1);
//  delay(2000);
 
 
  for (int i = 0; i < 500; i ++ ) {    
    Serial.println(speed1);
    firstESC.writeMicroseconds(speed1);
    secondESC.writeMicroseconds(speed1);
    thirdESC.writeMicroseconds(speed1);
    fourthESC.writeMicroseconds(speed1);
    speed1 +=1;

    delay(50);
  }
  Serial.println("off");
  firstESC.writeMicroseconds(MIN);
  secondESC.writeMicroseconds(MIN);
  thirdESC.writeMicroseconds(MIN);
  fourthESC.writeMicroseconds(MIN);
  while(1){
    //wait
  }
  if(Serial.available()) 
    value = Serial.parseInt();    // Parse an Integer from Serial

}
