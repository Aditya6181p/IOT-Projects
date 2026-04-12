// Define pins for HC-SR04
const int trigPin = 9;
const int echoPin = 10;
const int detectionThreshold = 100; // Distance in cm to trigger detection
bool isPersonPresent = false;       // Flag to prevent spamming the message

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Serial.println("System Active: Scanning for presence...");
}

void loop() {
  long duration;
  int distance;

  // Pulse the Trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the Echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Logic for person detection
  // If distance is > 0 (to ignore errors) and less than our threshold
  if (distance > 0 && distance < detectionThreshold) {
    if (!isPersonPresent) {
      Serial.println("ALARM: A person is detected!");
      isPersonPresent = true; // Set flag so it only prints once
    }
  } else {
    if (isPersonPresent) {
      Serial.println("Area Clear: Person has left.");
      isPersonPresent = false;
    }
  }

  delay(500);
}
