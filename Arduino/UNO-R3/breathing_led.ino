const int ledPin = 3; // Must be a PWM pin (~ symbol)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Fade in: from 0 (off) to 255 (full brightness)
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(5); // Adjust this to change breathing speed
  }
  // Fade out: from 255 (full brightness) down to 0 (off)
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(5); // Adjust this to change breathing speed
  }
}
