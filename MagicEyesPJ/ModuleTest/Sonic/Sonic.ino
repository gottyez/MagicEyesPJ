const int trigPin = 12;
const int echoPin = 11;

long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delay(0.02);
 
  digitalWrite(trigPin, HIGH);
  delay(0.1);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}