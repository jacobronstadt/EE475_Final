/*
WallCrawler robot letter drawing control code

all characters start in lower left corner
robot resets to lower left corner of next character position after completing
robot faces up after completing

*/


int main(int argc, char const *argv[]) {

char* command;

    while(1) {
        //get command from bluetooth
        decodeCommand(command);

        //wait for next command
    }
    return 0;
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


int turn180() {
    return 0;
}

int turn90() {
    return 0;
}

int turn45() {
    return 0;
}

int moveFoward() {
    return 0;
}

int moveBack() {
    return 0;
}



int drawA() {
    return 0;
}

int drawB() {
    return 0;
}

int drawC() {
    return 0;
}

int drawD() {
    return 0;
}

int drawE() {
    return 0;
}

int drawF() {
    return 0;
}

int drawG() {
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
