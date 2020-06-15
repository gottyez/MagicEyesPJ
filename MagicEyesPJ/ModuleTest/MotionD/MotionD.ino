int ledPin = 2;
int digitalPin = 8;
int val = 0;
void setup() {
    pinMode(ledPin, OUTPUT);    // sets the pin as output
    pinMode(digitalPin, INPUT); // sets the pin as input
    Serial.begin(9600);
}

 
void loop() {
    val = digitalRead(digitalPin); //read digital pin 8
    Serial.print("val = ");        // print "val = "
    Serial.println(val);           // print result of val
    if (val == 0) {                // val = 0 open LED
        digitalWrite(ledPin, HIGH); // LED ON
    }
    else {
        digitalWrite(ledPin, LOW); // LED OFF
    }
    delay(100);
}
