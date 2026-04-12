const int tiltPin = 2; // Pin connected to the tilt sensor

void setup() {
  pinMode(tiltPin, INPUT_PULLUP); // Use internal pull-up resistor
  Serial.begin(9600);
  Serial.println("Tilt Sensor Active...");
}

void loop() {
  int sensorState = digitalRead(tiltPin);
  // When the sensor is upright, the balls bridge the pins (LOW)
  // When tilted, the circuit opens (HIGH) due to the pull-up resistor
  if (sensorState == HIGH) {
    Serial.println("STATUS: Tilted!");
  }
  delay(500); // Small delay to prevent serial monitor spam
}
