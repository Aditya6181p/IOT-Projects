const int led=2;
const int led2=4;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);
  delay(70);                  
  digitalWrite(led, LOW);    
  delay(70);                 
  digitalWrite(led2, HIGH);  
  delay(70);                 
  digitalWrite(led2, LOW);   
  delay(70);                   
}
