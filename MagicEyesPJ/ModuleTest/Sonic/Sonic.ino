#include <NewPing.h>

#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);                     // Wait 50ms between pings
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping, get in cm
  Serial.println("cm");
}