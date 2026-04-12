const int buzzerPin = 3; // Connected to the passive buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // --- UPWARD SWEEP ---
  // Frequency increases from 600Hz to 1200Hz
  for (int freq = 600; freq <= 1200; freq++) {
    tone(buzzerPin, freq);
    delay(2); // Controls the speed of the "climb"
  }

  // --- DOWNWARD SWEEP ---
  // Frequency decreases from 1200Hz to 600Hz
  for (int freq = 1200; freq >= 600; freq--) {
    tone(buzzerPin, freq);
    delay(2); // Controls the speed of the "fall"
  }
}
