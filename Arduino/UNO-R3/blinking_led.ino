const int led=2;
void setup() {
  pinMode(led, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(1000);                       // Wait for a second (1000 milliseconds)
  
  digitalWrite(led, LOW);    // Turn the LED off by making the voltage LOW
  delay(1000);                       // Wait for a second
}
