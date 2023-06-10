// 키보드 문자로 서보모더 제어
#include <Servo.h>
#define SERVO A0
Servo servo;

void setup() {
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
  Serial.begin(9600);
  Serial.println("키보드로 1, 2, 3을 눌러보세요.");
}

void loop() {
  if(Serial.available()){
    char c = Serial.read();
    if(c == '1'){
      servo.write(0);
    } else if(c == '2'){
      servo.write(90);
    } else if(c == '3'){
      servo.write(180);
    }
  }

}
