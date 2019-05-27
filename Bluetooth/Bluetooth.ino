#include <string.h>

void setup() {
  /* Set Serial Baud rate to 9600 */
  Serial.begin(9600);
}

void loop() {
  /* when Serial input becomes available */
  while (Serial.available()) {
//   long input = Serial.read();
    String input = Serial.readStringUntil('\n');
    Serial.println(input); /* transmit to the bluetooth */
  }
}
