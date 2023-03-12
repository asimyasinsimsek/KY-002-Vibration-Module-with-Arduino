int sensor= 2;
int led= 3;
int buzzer= 4;
int re = 293;
int mi = 331;
int fa = 350;

void setup() {
  Serial.begin(9600);
pinMode(buzzer,OUTPUT);
}

void loop() {
  if(digitalRead(sensor) == HIGH )
  {
    digitalWrite(led,LOW);
  } else{
    Serial.print("BLOW!!   BLOW!!   BLOW!!");
    Serial.println(" ");
    digitalWrite(led,HIGH);
    tone(buzzer, re);
    delay(100);
    noTone(buzzer);
    delay(10);
 
    tone(buzzer, mi);
    delay(100);
    noTone(buzzer);
    delay(10);
  }

}
