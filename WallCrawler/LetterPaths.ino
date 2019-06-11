int drawA() {
  Serial.println("A");

    delay(1000);
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    turn45Neg();
    moveForwardSmall();
    moveBackSmall();
    turn45();
    moveBackSmall();
    moveBackSmall();

    // resetiing the orientation
    moveMarker(0);
    moveForwardBig();
    turn90();
    moveBackSmall();
//    moveForwardBig();
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveForwardBig();
//    moveMarker(0);
//    moveBackSmall();
//    turn90();
//    moveMarker(1);
//    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();

    return 0;
}

int drawB() {
  Serial.println("B");
  moveMarker(1);
  moveForwardBig();
  turn90Neg();
  moveForwardSmall();
  turn90Neg();
  moveForwardSmall();
  turn90Neg();
  moveForwardSmall();
  moveBackSmall();
  turn90();
  moveForwardSmall();
  turn90Neg();
  moveForwardSmall();
  moveBackBig();
  

  // resetting the orientation
  moveMarker(0);
  moveBackBig();
  turn90Neg();
//    moveMarker(1);
//    moveForwardBig();
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveForwardBig();
//    turn90();
//    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn90Neg();
//    moveBackSmall();
//    turn90();
//    moveMarker(1);
//    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();

    return 0;
}

int drawC() {
    Serial.println("C");
    turn90();
    moveMarker(1);
    moveBackSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();

    // resetting the orientation
    moveMarker(0);
    moveForwardSmall();
//    moveForwardBig();
//    turn90();
//    moveForwardSmall();
//    moveMarker(0);
//    turn90();
//    moveForwardBig();
//    turn90();
//    moveMarker(1);
//    moveForwardSmall();
//    moveMarker(0);
//    turn180();
//    moveForwardSmall();
//    moveForwardSmall();
    turn90();
    moveBackBig();
    return 0;
}

int drawD() {

    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn180();
    moveForwardSmall();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawE() {

    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveForwardSmall();
    turn90Neg();
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
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();

    return 0;
}

int drawG() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawH() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawI() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawJ() {
    moveForwardBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawK() {
    moveMarker(1);
    moveBackBig();
    moveMarker(0);
    moveForwardSmall();
    turn45();
    moveMarker(1);
    moveBackBig();
    moveMarker(0);
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();

    // resetting the orientation
    moveMarker(0);
    turn45Neg();
    moveForwardSmall();
    
    
//    moveMarker(1);
//    moveForwardBig();
//    moveMarker(0);
//    turn90();
//    moveForwardSmall();
//    turn90();
//    turn45();
//    moveMarker(1);
//    moveForwardSmall();
//    turn90Neg();
//    moveForwardSmall();
//    moveMarker(0);
//    turn45Neg();
//    moveForwardSmall();
//    turn90Neg();
    return 0;
}

int drawL() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90();
    return 0;
}

int drawM() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
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
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawN() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    turn45Neg();
    moveForwardBig();
    turn45();
    turn90();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90Neg();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawO() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawP() {
    moveMarker(1);
    moveBackBig();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn90();
    moveMarker(1);
    moveForwardSmall();

    // resetting the orientation
    moveMarker(0);
    moveBackBig();
//    moveMarker(1);
//    moveForwardBig();
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();
    return 0;
}

int drawQ() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90();
    return 0;
}

int drawR() {
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawS() {
    turn90Neg();
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
    turn90Neg();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawT() {
    moveForwardBig();
    turn90Neg();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardBig();
    turn90();
    return 0;
}

int drawU() {
    moveForwardBig();
    turn180();
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90Neg();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawV() {
    moveForwardBig();
    turn90Neg();
    turn45Neg();
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardBig();
    moveMarker(0);
    turn90Neg();
    turn45Neg();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int drawW() {
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    moveBackBig();
    turn90Neg();
    moveMarker(1);
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
    moveBackBig();
    turn90Neg();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawX() {
    turn45Neg();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn45();
    turn90();
    moveForwardBig();
    turn90Neg();
    turn45Neg();
    moveMarker(1);
    moveForwardBig();
    moveMarker(0);
    turn45();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawY() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveBackSmall();
    moveMarker(1);
    moveForwardBig();
    turn90();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();

    return 0;
}

int drawZ() {
    moveForwardBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    turn45Neg();
    moveForwardBig();
    turn90();
    turn45();
    moveForwardSmall();
    moveMarker(0);
    moveForwardSmall();
    turn90();
    return 0;
}

int draw0() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn180();
//    moveForwardSmall();
//    turn90Neg();
    return 0;}

int draw1() {
    moveMarker(1);
    moveForwardBig();

    // resetting the orientation
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90();
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveForwardBig();
//    turn90Neg();
//    moveForwardSmall();
//    turn90Neg();
    return 0;
}

int draw2() {
    moveForwardBig();
    turn90Neg();
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
    moveForwardSmall();
    turn90();
    return 0;
}

int draw3() {
    moveForwardBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();
    return 0;
}

int draw4() {
  moveMarker(1);
  moveForwardBig();
  turn45Neg();
  moveBackBig();
  turn45Neg();
  moveForwardBig();
//    moveForwardSmall();
//    moveMarker(1);
//    moveForwardSmall();
//    moveMarker(0);
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveForwardSmall();
//    turn90();
//    moveMarker(1);
//    moveForwardSmall();
//    moveMarker(0);
//    moveBackSmall();
//    turn90Neg();
//    moveBackSmall();
    moveMarker(0);
    moveForwardBig();
    turn45();
    moveBackSmall();
//    turn90Neg();
    return 0;
}

int draw5() {
    turn90Neg();
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
    turn90Neg();
    moveForwardBig();
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int draw6() {
    moveMarker(1);
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();
    return 0;
}

int draw7() {
    moveForwardBig();
    turn90Neg();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    moveMarker(0);
    turn90();
    moveForwardSmall();
    turn90();
    return 0;
}

int draw8() {
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn90();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90Neg();
    moveForwardSmall();
    moveMarker(0);
    moveBackSmall();
    turn180();
    moveForwardSmall();
    turn90();
    return 0;
}

int draw9() {
    moveForwardSmall();
    moveMarker(1);
    moveForwardSmall();
    turn90Neg();
    moveForwardSmall();
    turn90Neg();
    moveForwardBig();
    turn90();
    moveMarker(0);
    moveForwardSmall();
    turn90();
    return 0;
}
