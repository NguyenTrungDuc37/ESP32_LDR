#include <Arduino.h>


void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  delay(1000);
}

void loop() {
  int ldr_value = analogRead(LDR_PIN);
   Serial.print("Light:");
   Serial.println(ldr_value);
}
