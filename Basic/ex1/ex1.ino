void setup() {
  Serial.begin(9600);

  int num = 1234; 
  Serial.println(num);

  num = -1234; 
  Serial.println(num);

  num = 32767;
  Serial.println(num);

  num = 32768;
  Serial.println(num);
}

void loop() {
  // put your main code here, to run repeatedly:

}
