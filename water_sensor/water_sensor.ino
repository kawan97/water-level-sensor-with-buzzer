int sensorvcc =7;
int buzzervcc =2;
void setup() {
  pinMode(sensorvcc, OUTPUT);
  pinMode(buzzervcc, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(sensorvcc, HIGH);
  int value = analogRead(A0);
  Serial.println(value);
  if(value>200){
    digitalWrite(buzzervcc, HIGH);
      delay(1000);
   digitalWrite(buzzervcc, LOW);
    }
  delay(1000);
   digitalWrite(buzzervcc, LOW);


}
