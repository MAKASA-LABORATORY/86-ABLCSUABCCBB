// C++ code
//

int sensorState = 0;
void setup()
{
 pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  sensorState = digitalRead(2);
  if (sensorState == HIGH) {
    digitalWrite(12, HIGH);
    Serial.println("LED HIGH");
  } else {
    digitalWrite(12, LOW);
    Serial.println("LED LOW");
  }
  delay(10); // Delay a little bit to improve simulation performance
}