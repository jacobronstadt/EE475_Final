#define LPIN1 (14)//2
#define LPIN2 (15)//3
#define RPIN1 (16)//8
#define RPIN2 (17)//7


//#include <SoftwareSerial.h>
#define BTSerial (Serial2)

void setup() {
  // put your setup code here, to run once:
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

byte command;
int i = 0;
char commandArr[5] = {0,0,0,0,0};

void loop() {
  if(BTSerial.available() > 0 ){
    command = BTSerial.read();
    
    if(i < 5){
        if (command == 254) {
          //start
          for(int k = 0; k < 5; k++) {
            commandArr[k] = 0;
          }
          i=0;
        } else if(command == 253) {
          //end
           commandArr[i+1] = '\n';
            
           for (int j=0; j < i; j++){
            Serial.print(commandArr[j]);
           }
           Serial.println();
           Serial.println("length: ");
           Serial.println(i);
           String str(commandArr);
           Serial.print("string: ");
           Serial.println(str);

           commands(str);
           
        } else {
          commandArr[i] = command;
          i++;
      }
    }
  
    
    Serial.print("recieved: ");
    Serial.println(command);
    
  }
 
}

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
        delay(200);
        digitalWrite(RPIN1, LOW);
        digitalWrite(RPIN2, HIGH);
        digitalWrite(LPIN1, HIGH);
        digitalWrite(LPIN2, LOW);
        delay(557);
        
        digitalWrite(RPIN1, HIGH);
        digitalWrite(RPIN2, LOW);
        digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, HIGH);
        delay(2);
        
        digitalWrite(RPIN1, LOW);
        digitalWrite(RPIN2, LOW);
        digitalWrite(LPIN1, LOW);
        digitalWrite(LPIN2, LOW);
    }
}
   
    
  
 
