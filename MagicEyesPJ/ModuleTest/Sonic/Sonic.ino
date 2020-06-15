#include <NewPing.h>

#define TRIGGER_PIN  12  // define trigger pin
#define ECHO_PIN     11  // define echo pin
#define MAX_DISTANCE 200 // Maximum distance

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup

void setup() {
  Serial.begin(9600); // Open serial monitor

void loop() {
  delay(50);                     // Wait 50ms between pings
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm()); // Send ping in cm
  Serial.println("cm");
}
