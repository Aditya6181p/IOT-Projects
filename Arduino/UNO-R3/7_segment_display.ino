// Define pins for segments a-g
const int segments[7] = {2, 3, 4, 5, 6, 7, 8};

// Binary map for numbers 0-9 (Common Cathode)
// Format: {a, b, c, d, e, f, g}
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
    displayNumber(i);
    delay(1000); // Wait 1 second between numbers
  }
}
