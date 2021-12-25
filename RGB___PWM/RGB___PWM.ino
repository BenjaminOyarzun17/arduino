#define RED_PIN   3
#define GREEN_PIN 5
#define BLUE_PIN  6
void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(GREEN_PIN, 50);
  analogWrite(RED_PIN, 100);
  analogWrite(BLUE_PIN, 100);
}
