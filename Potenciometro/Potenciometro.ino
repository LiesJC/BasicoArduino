int lectura = A0;  

void setup() {
  Serial.begin(9600);
}

void loop() {
  int x = analogRead(lectura);
  Serial.println(x);
  delay(1000); 
}
