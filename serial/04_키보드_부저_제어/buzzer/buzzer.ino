// 키보드 문자로 부저 제어
#define BUZZER 13                           // 13번 핀에 부저 연결 

void setup() {
  pinMode(BUZZER, OUTPUT);                  // 출력 핀 설정 
  Serial.begin(9600);
  Serial.println("Please type k, i, m");
}

void loop() {
  if (Serial.available()) {                 // 시리얼 통신 가능할 때 
    char c = Serial.read();                 // 수신 데이터(문자)가 있을 때
    if (c == 'k') {
      tone(BUZZER, 262, 500);               // 부저 울림(주파수, 지속시간) 
    } else if (c == 'i') {
      tone(BUZZER, 330, 500);
    } else if (c == 'm') {
      tone(BUZZER, 392, 500);
    }
  }
}
