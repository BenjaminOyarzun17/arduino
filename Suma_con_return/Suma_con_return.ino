void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Simple Calculations using functions");
Serial.println(do_a_calc(9,6,7,15,30,55));
}

void loop() {
 

}
int do_a_calc(int number_1,int number_2, int number_3, int number_4, int number_5, int number_6) {
 //Serial.println(number_1+number_2-number_3);
 Serial.println("hello world");
 return  number_1+number_2-number_6;
}
