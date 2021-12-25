void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 for (int counter = 0; counter < 20; counter++) 
 {
  if (counter < 10)
  {
    Serial.print(counter);
    Serial.print(",");
    Serial.println("Counter is smaller than 10");
  } else
  {
    Serial.print(counter);
    Serial.print(",");
    Serial.println("Counter is not smaller than 10");
  }
  }
  delay(500);
}
