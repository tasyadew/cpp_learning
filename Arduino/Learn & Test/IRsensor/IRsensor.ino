/* 
 * Code to learn usage of IR sensor 
 * Standard module 3 pin
 * to detect object ar certain distance
 */

int LED = 13;
int IRPin = 7;
int IRnull = HIGH; //When high' no obstacle detected

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(IRPin,INPUT);
  Serial.begin(9600);
   
}

void loop() {
  IRnull = digitalRead(IRPin);
  if(IRnull == LOW){

    Serial.println("OBSTACLE!!");
    digitalWrite(LED, HIGH);
  }
  else{

    Serial.println("null");
    digitalWrite(LED,LOW);
  }
  delay(200);

}
