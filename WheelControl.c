/*
WallCrawler robot letter drawing control code

all characters start in lower left corner
robot resets to lower left corner of next character position after completing
robot faces up after completing

*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
    myservo.attach(9);  // attaches the servo on pin 9 to the servo object
    Serial.begin(9600);
    myservo.write(50);
}

int decodeCommand(char* command) {
    while (*command != '\0') {
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
        }
        command++;
    }
    return 0;
}

void moveMarker(int pos) {
 // Serial.println(command);
  if (pos == 0) { // up
    //Serial.println("move 0");

    myservo.write(30);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
     // }
  } else { // down
    myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    //  }
  }

}


/*
turn the robot 180 degrees on marker axis
*/
int turn180() {
    return 0;
}

/*
turn the robot 90 degrees on marker axis
*/
int turn90() {
    return 0;
}

/*
turn the robot 90 degrees on marker axis
*/
int turn90Neg() {
    return 0;
}

/*
turn the robot 45 degrees on marker axis
*/
int turn45() {
    return 0;
}

/*
turn the robot 45 degrees on marker axis
*/
int turn45Neg() {
    return 0;
}

/*
move the robot forward half UNIT
*/
int moveForwardSmall() {
    return 0;
}

/*
move robot forward one UNIT
*/
int moveForwardBig() {

}

/*
move the robot backwards half UNIT
*/
int moveBackSmall() {
    return 0;
}

/*
move the robot back one UNIT
*/
int moveBackBig() {
    return 0;
}


int drawA() {

    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawB() {

    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawC() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn180();
    moveForwardSmall();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawD() {

    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn180();
    moveForwardSmall();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawE() {

    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turm90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn180();
    moveForwardSmall();
    moveForwardSmall();

    return 0;
}

int drawF() {

    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();

    return 0;
}

int drawG() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall()
    turn90Neg();

    return 0;
}

int drawH() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawI() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawJ() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawK() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    turn45();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn45Neg();
    mmoveForwardSmall();
    turn90Neg();
    return 0;
}

int drawL() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawM() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawN() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    turn45();
    moveForwardBig();
    turn45Neg();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawO() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawP() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawQ() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawR() {
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawS() {
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawT() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    return 0;
}

int drawU() {
    moveForwardBig();
    turn180();
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawV() {
    moveForwardBig();
    turn90();
    turn45();
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    turn90();
    turn45();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int drawW() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawX() {
    turn45();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn45Neg();
    turn90Neg();
    moveForwardBig();
    turn90();
    turn45();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn45Neg();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawY() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveBackSmall();
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();

    return 0;
}

int drawZ() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    turn45();
    moveForwardBig();
    turn90Neg();
    turn45Neg();
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw0() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();
    return 0;}

int draw1() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw2() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw3() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw4() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveBackSmall();
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw5() {
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw6() {
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall()
    turn90Neg();
    return 0;
}

int draw7() {
    moveForwardBig();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw8() {
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90Neg();
    return 0;
}

int draw9() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    turn90Neg();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    return 0;
}


int main() {

    char* command;

    while(1) {
        //get command from bluetooth
        decodeCommand(command);

        //wait for next command
    }
    return 0;
}
