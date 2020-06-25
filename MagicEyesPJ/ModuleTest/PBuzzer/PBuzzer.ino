const int buzzer = 8; //buzzer to arduino pin 8

void setup(){
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 8 as an output
}

void loop(){
  tone(buzzer, 300); // Send 1KHz sound signal
  delay(100);        // wait 1 sec  
  tone(buzzer, 500); // Send 1KHz sound signal
  delay(100);        // wait 1 sec
  tone(buzzer, 300); // Send 1KHz sound signal
  delay(100);        // wait 1 sec
  noTone(buzzer);     // Stop sound
  delay(1000);        // wait 1 sec
}