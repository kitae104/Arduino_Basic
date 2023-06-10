void setup() {
  pinMode(13, OUTPUT);  // 핀번호, 핀용도 
}

void loop() {
  digitalWrite(13, 1);  // 핀번호, 출력값(HIGH)
  delay(1000);
  digitalWrite(13, 0);
  delay(1000);          // 지연 시간 ms
}
