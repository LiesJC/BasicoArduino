#include <Servo.h>

Servo servomotor;

int posicion = 0;
void setup() {
  servomotor.attach(10);
}

void loop() {
  servomotor.write(0);
  delay(2000);
  servomotor.write(180);
  delay(2000);
  
 for(int i = 0;i<=180;i++){
    servomotor.write(i);
    delay(20);
    }
  for(int i = 180; i>=0;i--){
    servomotor.write(i);
    delay(20);
    }
}
