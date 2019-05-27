#include <string.h>

void setup() {
  /* Set Serial Baud rate to 9600 */
  Serial.begin(9600);
  /* Set Bluetooth Baud rate to 9600 
   * it uses Serial 3
   */
  Serial3.begin(9600);
  Serial.println("Starting");

  /* test if connected to the Bluetooth, should see:
   * >AT
   * <OK
   */
  Serial.println(">AT");
  Serial3.write("AT");
  Serial.println("<" + Serial3.readString());
  Serial.println();
}

/* flag to indicate that an AT command is transmitted
 * should be cleared when the response is read
 */
int ATflag;

void loop() {
  /* when Serial input becomes available */
  while (Serial.available()) {
    Serial.print(">");
    String input = Serial.readStringUntil('\n');
    ATflag = 1;           /* set the flag */
    Serial.println(input); /* display the input AT command*/
    Serial3.print(input); /* transmit to the Bluetooth */
  }

  /* when Bluetooth input becomes available */
  while (Serial3.available()) {
    Serial.print("<");
    if (ATflag) {
      /* display as a String if the AT flag is set */
      String input = Serial3.readStringUntil('\0');
      Serial.println(input);
      ATflag = 0;
    }else {
      /* display as a byte if the AT flag is not set */
      byte data = Serial3.read();
      Serial.println(data); 
    }
  }
}
