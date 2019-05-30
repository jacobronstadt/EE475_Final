/*
WallCrawler robot letter drawing control code

all characters start in lower left corner
robot resets to lower left corner of next character position after completing
robot faces up after completing

*/

#include <Servo.h>
#define LPIN1 (14)//2
#define LPIN2 (15)//3
#define RPIN1 (16)//8
#define RPIN2 (17)//7

#define ERROR (250)
#define START (253)
#define END (254)
#define STATUS (252)


//#include <SoftwareSerial.h>
#define BTSerial (Serial2)
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
    myservo.attach(23);  // attaches the servo on pin 23 to the servo object
    myservo.write(130);

    //pinMode(4, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(15, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);
  
    
    //digitalWrite(4,LOW);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    BTSerial.begin(38400);
    Serial1.begin(9600);
    
}

int decodeCommand(char command) {
        switch (command) {
            case 'A':
                drawA();
                break;
            case 'B':
                drawB();
                break;
            case 'C':
                drawC();
                break;
            case 'D':
                drawD();
                break;
            case 'E':
                drawE();
                break;
            case 'F':
                drawF();
                break;
            case 'G':
                drawG();
                break;
            case 'H':
                drawH();
                break;
            case 'I':
                drawI();
                break;
            case 'J':
                drawJ();
                break;
            case 'K':
                drawK();
                break;
            case 'L':
                drawL();
                break;
            case 'M':
                drawM();
                break;
            case 'N':
                drawN();
                break;
            case 'O':
                drawO();
                break;
            case 'P':
                drawP();
                break;
            case 'Q':
                drawQ();
                break;
            case 'R':
                drawR();
                break;
            case 'S':
                drawS();
                break;
            case 'T':
                drawT();
                break;
            case 'U':
                drawU();
                break;
            case 'V':
                drawV();
                break;
            case 'W':
                drawW();
                break;
            case 'X':
                drawX();
                break;
            case 'Y':
                drawY();
                break;
            case 'Z':
                drawZ();
                break;
            case '0':
                draw0();
                break;
            case '1':
                draw1();
                break;
            case '2':
                draw2();
                break;
            case '3':
                draw3();
                break;
            case '4':
                draw4();
                break;
            case '5':
                draw5();
                break;
            case '6':
                draw6();
                break;
            case '7':
                draw7();
                break;
            case '8':
                draw8();
                break;
            case '9':
                draw9();
                break;
            default:
                return 1;
        }
    return 0;
}



   
byte command;
int i = 0;
char commandArr[5] = {0,0,0,0,0};
int sysTime;

void loop() {
  sysTime = millis();
  if(BTSerial.available() > 0 ){
      command = BTSerial.read();
      
    
    if (command == START) {
      //start
      Serial.println("transmission start ");
      for(int k = 0; k < 5; k++) {
        commandArr[k] = 0;
      }
      i=0;
    } else if(command == END) {
      //end
       Serial.println("transmission end");
      
       commandArr[i+1] = '\n';
       BTSerial.write(START);
       Serial.print("Writing: ");
       for (int j=0; j < i; j++){
           int letterDone = 0;
          //decodeCommand(commandArr[j]);
          // letterDone = decodeCommand(commandArr[j]);
          Serial.print(commandArr[j]);
          if(letterDone == 1) {
            BTSerial.write(ERROR);
          }
       }
       BTSerial.write(END);
      
       Serial.println(); 
       Serial.println("length: ");
       Serial.println(i);
      //---
       String str(commandArr);
       Serial.print("string: ");
       Serial.println(str);
       commands(str);
       Serial.println();
       Serial.println();
        
    } else {
      commandArr[i] = command;
      i++;
    }

    
      
      Serial.print("recieved: ");
      Serial.println(command);
      
  }
 
//    char* command;
//
//    while(1) {
//        //get command from bluetooth
//        decodeCommand(command);
//
//        //wait for next command
//    }
}
