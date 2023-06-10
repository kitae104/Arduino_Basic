// 정수로 LED 점멸 횟수 제어 
#define LED 13
const int time = 200;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter 2 numbers");
}

void loop() {
  if (Serial.available()) {
    int num = Serial.parseInt();
    int time = Serial.parseInt();     
    for(int i = 0; i < num; i++){
      digitalWrite(LED, 1);
      delay(time);
      digitalWrite(LED, 0);
      delay(time);      
    }    
  }
}
