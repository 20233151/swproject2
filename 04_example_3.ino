const int ledPinL = 13; 
const int ledPinTX = 1; 

void setup() {
  pinMode(ledPinL, OUTPUT);
  pinMode(ledPinTX, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPinL, HIGH);
  Serial.println("L LED ON"); 
  delay(1000);
  digitalWrite(ledPinL, LOW);
  Serial.println("L LED OFF");
  delay(1000);
}
