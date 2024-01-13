#define sensorDigital A4
#define Motor 9
#define buzzer 5
#define sensorAnalog A1

void setup()
{
  pinMode(sensorDigital, INPUT);
  pinMode(Motor, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("");
  Serial.print("Digital value :");
  Serial.println(digital);

  if (analog >= 800)
  {
    digitalWrite(Motor, LOW);
    tone(buzzer, 3000);
  }
  else if (analog >= 650)
  {
    digitalWrite(Motor, HIGH);
    tone(buzzer, 500);
  }
  else if (analog >= 550)
  {
    digitalWrite(Motor, HIGH);
    tone(buzzer, 250);
  }
  else
  {
    digitalWrite(Motor, HIGH);
    noTone(buzzer);
  }
}
