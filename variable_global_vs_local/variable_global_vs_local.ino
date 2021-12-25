const int first_number = 5;//declarar algo GLOBALMENTE, ahora es variable GLOBAL

void setup() {
 Serial.begin(9600);
 int second_number ;
 second_number = 6;//darle un valor a una varible, LOCALMENTE, ahora es variable LOCAL 
 
 Serial.println(do_a_calculation(second_number));//llamar a la función do_a_calculation a aparecer en el monitor serial.
}

void loop() {
  

}
int do_a_calculation( int number_2){
 first_number = 10;
 int result = first_number +number_2;//Determinar una operación
 return result; //pedir el resultado
}
