int first_number = 5;//declarar algo GLOBALMENTE

void setup() {
 Serial.begin(9600);
 int second_number ;
 second_number = 6;//darle un valor a una varible (forma 2)
 
 Serial.println(do_a_calculation(second_number));//llamar a la función do_a_calculation a aparecer en el monitor serial.
}

void loop() {
  

}
int do_a_calculation( int number_2){
 int result = first_number +number_2;//Determinar una operación
 return result; //pedir el resultado
}
