void setup() {
  Serial.begin(115200);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
}

void loop() {
  digitalWrite(32, HIGH); // forward
  delay(2000);
  digitalWrite(32, LOW);
  digitalWrite(33, HIGH); // reverse
  delay(2000);
  digitalWrite(33, LOW);
}
