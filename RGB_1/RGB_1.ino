
#define RED_PIN   3
#define GREEN_PIN 5
#define BLUE_PIN  6
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}
void loop() 
{
 digitalWrite(GREEN_PIN, LOW);
 digitalWrite(RED_PIN, HIGH);
 delay(1000);
 digitalWrite(RED_PIN,LOW);
 digitalWrite(BLUE_PIN, HIGH);
 delay(1000);
 digitalWrite(BLUE_PIN,LOW);
 digitalWrite(GREEN_PIN, HIGH);
 delay(1000);
}
