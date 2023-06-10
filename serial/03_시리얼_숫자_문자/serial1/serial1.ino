// 시리얼 통신으로 데이터 송·수신1
void setup() {
  Serial.begin(9600);                     // 속도 설정  
  Serial.println("Please input data");
}

void loop() {
  if (Serial.available()) {               // 시리얼 통신 가능시 
    // int c = Serial.read();             // 숫자로 읽어 옴 
    char c = Serial.read();               // 문자로 읽어 옴
    Serial.print("data: ");
    Serial.println(c);
  }
}
