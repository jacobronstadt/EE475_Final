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
int moveFowardSmall() {
    return 0;
}

/*
move robot forward one UNIT
*/
int moveFowardBig() {

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

int drawA() {

    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    turn90();
    moveFowardBig();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveFowardSmall();
    turn90Neg();
    moveFowardSmall();
    turn90Neg();

    return 0;
}

int drawB() {

    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    turn90();
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveFowardSmall();
    turn90Neg();
    moveFowardSmall();
    turn90Neg();

    return 0;
}

int drawC() {
    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    turn90();
    moveFowardBig();
    turn90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    turn180();
    moveFowardSmall();
    moveFowardSmall();
    turn90Neg();

    return 0;
}

int drawD() {

    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    turn90();
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    turn180();
    moveFowardSmall();
    moveFowardSmall();
    turn90Neg();

    return 0;
}

int drawE() {

    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    turn90();
    moveFowardSmall();
    turm90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveFowardSmall();
    turn90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    turn180();
    moveFowardSmall();
    moveFowardSmall();

    return 0;
}

int drawF() {

    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    turn90();
    moveFowardSmall();
    turn90();
    moveMarker(1);
    moveFowardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveFowardSmall();
    turn90Neg();
    moveFowardSmall();

    return 0;
}

int drawG() {
    moveMarker(1);
    moveFowardBig();
    turn90();
    moveFowardSmall();
    moveMarker(0);
    turn90();
    moveFowardSmall();
    mo
    return 0;
}

int drawH() {
    return 0;
}

int drawI() {
    return 0;
}

int drawJ() {
    return 0;
}

int drawK() {
    return 0;
}

int drawL() {
    return 0;
}

int drawM() {
    return 0;
}

int drawN() {
    return 0;
}

int drawO() {
    return 0;
}

int drawP() {
    return 0;
}

int drawQ() {
    return 0;
}

int drawR() {
    return 0;
}

int drawS() {
    return 0;
}

int drawT() {
    return 0;
}

int drawU() {
    return 0;
}

int drawV() {
    return 0;
}

int drawW() {
    return 0;
}

int drawX() {
    return 0;
}

int drawY() {
    return 0;
}

int drawZ() {
    return 0;
}

int draw0() {
    return 0;
}

int draw1() {
    return 0;
}

int draw2() {
    return 0;
}

int draw3() {
    return 0;
}

int draw4() {
    return 0;
}

int draw5() {
    return 0;
}

int draw6() {
    return 0;
}

int draw7() {
    return 0;
}

int draw8() {
    return 0;
}

int draw9() {
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
