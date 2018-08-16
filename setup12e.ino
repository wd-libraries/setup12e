const uint8_t BUILTIN_LED2 = 2; //GPIO2

void setup() {
  pinMode(BUILTIN_LED2, OUTPUT);
  pinMode(D7, OUTPUT);
}

void loop() {
  digitalWrite(D7, HIGH);
  digitalWrite(BUILTIN_LED2, HIGH);
  delay(1000);
  digitalWrite(D7, LOW);
  digitalWrite(BUILTIN_LED2, LOW);
  delay(1000);
  Serial.println("blink!");
}
