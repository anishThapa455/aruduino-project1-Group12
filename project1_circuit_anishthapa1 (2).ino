// C++ code
//
int ledPin = 8; // The LED is connected to digital pin 8

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin 8 as an output
}
void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}