
void commands(String command) {
  if (command.equals("lf")) { // up
      BTSerial.write(1);
      Serial.write(1);
      digitalWrite(LPIN1, LOW);
      digitalWrite(LPIN2, HIGH);

    } else if (command.equals("lr")) {
      BTSerial.write(2);
      digitalWrite(LPIN1, HIGH);
      digitalWrite(LPIN2, LOW);
      Serial.write(1);

    } else if (command.equals("rr")) { // up
      BTSerial.write(3);
      digitalWrite(RPIN1, HIGH);
      digitalWrite(RPIN2, LOW);
      Serial.write(1);

    } else if (command.equals("rf")) {
      BTSerial.write(4);
      digitalWrite(RPIN1, LOW);
      digitalWrite(RPIN2, HIGH);
      Serial.write(1);
      
     } else if (command.equals("rs")) {
      BTSerial.write(5);
      digitalWrite(RPIN1, LOW);
      digitalWrite(RPIN2, LOW);
      Serial.write(1);

    } else if (command.equals("ls")) {
      BTSerial.write(6);
      digitalWrite(LPIN1, LOW);
      digitalWrite(LPIN2, LOW);
      Serial.write(1);
 
    } else if (command.equals("180")) {
       turn180();
    } else if (command.equals("90")) {
      turn90();
    } else if (command.equals("45")) {
      turn45();
    }  else if (command.equals("s")) {
        digitalWrite(RPIN1, LOW);
        digitalWrite(RPIN2, LOW);
        digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, LOW);
    } else if (command.equals("bf")) {
       digitalWrite(RPIN1, LOW);
       digitalWrite(RPIN2, HIGH);
       digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, HIGH);
    } else if (command.equals("bb")) {
       digitalWrite(RPIN1, HIGH);
       digitalWrite(RPIN2, LOW);
       digitalWrite(LPIN1, HIGH);
       digitalWrite(LPIN2, LOW);
    } else if (command.equals("mu")) {
      moveMarker(1);
    } else if (command.equals("md")) {
      moveMarker(0);
    } else if (command.equals("A")) {
      drawA();
      
    }
}


/*
turn the robot 180 degrees on marker axis
*/
int turn180() {
  delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(1800);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
}

/*
turn the robot 90 degrees on marker axis
*/
int turn90() {
   delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(900);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
    return 0;
 
}

/*
turn the robot 90 degrees on marker axis
*/
int turn90Neg() {
  delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(900);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
}

/*
turn the robot 45 degrees on marker axis
*/
int turn45() {
  delay(200);
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(450);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
}

/*
turn the robot 45 degrees on marker axis
*/
int turn45Neg() {
    delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(450);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
  
}

/*
move the robot forward half UNIT
*/
int moveForwardSmall() {
  delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(400);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
}

/*
move robot forward one UNIT
*/
int moveForwardBig() {
  delay(200);
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, HIGH);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, HIGH);
  delay(800);
  
  digitalWrite(RPIN1, HIGH);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, HIGH);
  digitalWrite(LPIN2, LOW);
  delay(2);
  
  digitalWrite(RPIN1, LOW);
  digitalWrite(RPIN2, LOW);
  digitalWrite(LPIN1, LOW);
  digitalWrite(LPIN2, LOW);
  return 0;
}

/*
move the robot backwards half UNIT
*/
int moveBackSmall() {
     delay(200);
    digitalWrite(RPIN1, HIGH);
    digitalWrite(RPIN2, LOW);
    digitalWrite(LPIN1, HIGH);
    digitalWrite(LPIN2, LOW);
    delay(200);
    
    digitalWrite(RPIN1, LOW);
    digitalWrite(RPIN2, HIGH);
    digitalWrite(LPIN1, LOW);
    digitalWrite(LPIN2, HIGH);
    delay(2);
    
    digitalWrite(RPIN1, LOW);
    digitalWrite(RPIN2, LOW);
    digitalWrite(LPIN1, LOW);
    digitalWrite(LPIN2, LOW);
  return 0;
}

/*
move the robot back one UNIT
*/
int moveBackBig() {
     delay(400);
    digitalWrite(RPIN1, HIGH);
    digitalWrite(RPIN2, LOW);
    digitalWrite(LPIN1, HIGH);
    digitalWrite(LPIN2, LOW);
    delay(450);
    
    digitalWrite(RPIN1, LOW);
    digitalWrite(RPIN2, HIGH);
    digitalWrite(LPIN1, LOW);
    digitalWrite(LPIN2, HIGH);
    delay(2);
    
    digitalWrite(RPIN1, LOW);
    digitalWrite(RPIN2, LOW);
    digitalWrite(LPIN1, LOW);
    digitalWrite(LPIN2, LOW);
}


void moveMarker(int pos) {
  Serial.println(command);
  if (pos == 1) { // down
    //Serial.println("move 0");

    myservo.write(35);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
     // }
  } else { // up
    myservo.write(130);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    //  }
  }

}
