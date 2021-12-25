
const int ledPin = 13; // Es una variable global, podra ser invocado en cualquier sector del programa.
void setup() {
  Serial.begin(9600); //Inicia la comunicacion con el monitor
  pinMode(ledPin, OUTPUT); //hace referencia, y lo determina como output.

}

void loop() {
  // put your main code here, to run repeatedly:
  static int delayPeriod = 100; //variable local //static: pone ese valor solo una vez.
  static int countDir = 1;
  
  digitalWrite(ledPin, HIGH); //HIGH = ENCENDIDO
  delay(delayPeriod);
  digitalWrite(13, LOW); // LOW = APAGADO
  delay(delayPeriod);

  countDir = checkDirChange(delayPeriod, countDir);

  delayPeriod += 100 * countDir;
  Serial.print("New Wait Time :");
  Serial.println(delayPeriod);
}

int checkDirChange(int delayPeriod, int countDir){
  if((delayPeriod == 1000) || (delayPeriod == 0)){     //aumentar el tiempo de blink || = or
    countDir *= -1; 

      if(countDir < 0){
        Serial.println("Going Down");
      } else {
        Serial.println("Going Up");
      }
  }
  return countDir;
}
