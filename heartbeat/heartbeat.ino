int sec = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay(500);
digitalWrite(13, LOW);
delay(500);
int time = millis();
Serial.print(time);
Serial.println(" arduino ms have elapsed");
sec++;
Serial.print(sec);
Serial.println(" sec have elapsed");

}
