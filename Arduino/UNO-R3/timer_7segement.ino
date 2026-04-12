// Define pins for segments a-g
const int segments[7] = {2, 3, 4, 5, 6, 7, 8};
const int buzz = 12;
byte digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  pinMode(buzz, OUTPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void displayNumber(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], digits[num][i]);
  }
}

void loop() {
  for (int i = 9; i >=0; i--) {
    digitalWrite(12,HIGH);
    delay(250); // Wait 1 second between numbers
    digitalWrite(12,LOW);
    delay(250);
    displayNumber(i);
  }
  digitalWrite(buzz, HIGH); // Turn buzzer ON
  delay(3000);                   // Wait for 1 second
  digitalWrite(buzz, LOW);
}
