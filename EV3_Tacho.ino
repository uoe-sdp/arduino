int tacho0 = 2;
int tacho1 = 3;

void setup() {
  Serial.begin(9600); // init serial to 9600b/s
  pinMode(tacho0, INPUT);     
  pinMode(tacho1, INPUT);  

}

void loop() {
  // read the input pin:
  int ForwardState = digitalRead(tacho0);
  int BackwardState = digitalRead(tacho1);
  Serial.print("Tacho0's value is: ");
  Serial.println(ForwardState);
  Serial.print("Tacho1's value is: ");
  Serial.println(BackwardState);
  delay(100);
}
