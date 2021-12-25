void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
//calcular el voltaje real del sensor
float voltage = sensorValue * (5.0 / 1023.0);
Serial.print(sensorValue);
Serial.print(",");
//Imprimir el valor UV del indice. Dividimos por 0.1
//por especificaciones de Adafruit
Serial.println(voltage/0.1);
delay(100);
}
