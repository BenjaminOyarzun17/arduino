void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  int potValue = analogRead(A0);//possible values 0...1023
  int mappedValue = map(potValue, 0, 1023, 0, 255); 
  analogWrite(6, potValue);//possible values 0...255
}
