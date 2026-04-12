const int buzzerPin = 2; // Define the pin for the active buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
}

void loop() {
  digitalWrite(buzzerPin, HIGH); // Turn buzzer ON
  delay(100);                   // Wait for 1 second
  digitalWrite(buzzerPin, LOW);  // Turn buzzer OFF
  delay(100);                   // Wait for 1 second
}
