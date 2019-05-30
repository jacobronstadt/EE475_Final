
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
      digitalWrite(RPIN1, LOW);
      digitalWrite(RPIN2, HIGH);
      Serial.write(1);

    } else if (command.equals("rf")) {
      BTSerial.write(4);
      digitalWrite(RPIN1, HIGH);
      digitalWrite(RPIN2, LOW);
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

    } else if (command.equals("ls rev")) {
      BTSerial.write(7);
      digitalWrite(LPIN1, HIGH);
      digitalWrite(LPIN2, LOW);
      delay(5000);
            
      BTSerial.write(8);
      digitalWrite(LPIN1, LOW);
      digitalWrite(LPIN2, LOW);
      delay(200);

      BTSerial.write(9);
      digitalWrite(LPIN1, LOW);
      digitalWrite(LPIN2, HIGH);
      delay(1000);
      Serial.write(1);

    } else if (command.equals("lf1")) {
        delay(200);
        digitalWrite(LPIN1, HIGH);
        digitalWrite(LPIN2, LOW);
        delay(547);
        digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, HIGH);
        delay(2);
        digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, LOW);

    } else if (command.equals("rb1")) {
    
       delay(200);
        digitalWrite(RPIN1, LOW);
        digitalWrite(RPIN2, HIGH);
        delay(557);
        digitalWrite(RPIN1, HIGH);
        digitalWrite(RPIN2, LOW);
        delay(2);
        digitalWrite(RPIN1, LOW);
        digitalWrite(RPIN2, LOW);
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
       digitalWrite(RPIN1, HIGH);
       digitalWrite(RPIN2, LOW);
       digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, HIGH);
    } else if (command.equals("bb")) {
       digitalWrite(RPIN1, LOW);
       digitalWrite(RPIN2, HIGH);
       digitalWrite(LPIN1, HIGH);
       digitalWrite(LPIN2, LOW);
    } else if (command.equals("mu")) {
      moveMarker(0);
    } else if (command.equals("md")) {
      moveMarker(1);
    } else if (command.equals("A")) {
      drawA();
      
    }
}
