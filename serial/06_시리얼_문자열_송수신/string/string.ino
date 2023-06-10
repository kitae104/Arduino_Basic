// 키보드 문자열로 LED 점멸 제어
#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter <on> or <off>");
}

void loop() {
  if (Serial.available()) {
    String s = Serial.readStringUntil('\n');
    if (s.equals("on")) {
      digitalWrite(LED, 1);
    }
    if (s.equals("off")) {
      digitalWrite(LED, 0);
    }
  }
}