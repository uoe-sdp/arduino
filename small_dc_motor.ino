const int motor1 = 10; 
const int motor2 = 11; 
void setup() { 
  pinMode(motor1,OUTPUT); 
  pinMode(motor2,OUTPUT); 
} 
 
void loop() { 
  analogWrite(motor1,128); 
  analogWrite(motor2,0); 
  delay(1000); 
  analogWrite(motor1,0);
  // 255 is the maximum value
  analogWrite(motor2,255);
  delay(1000);  
}
