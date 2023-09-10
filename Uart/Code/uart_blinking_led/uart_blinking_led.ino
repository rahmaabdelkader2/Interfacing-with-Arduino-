const int ledPin = 13;  // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // Initialize serial communication at 9600 bps
  digitalWrite(ledPin, LOW);  // Turn off the LED initially
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();  // Read the character from the Serial Monitor

    if (command == '1') {
      digitalWrite(ledPin, HIGH);  // Turn on the LED when '1' is received
      Serial.println("LED is ON");
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);  // Turn off the LED when '0' is received
      Serial.println("LED is OFF");
    }
  }
}
