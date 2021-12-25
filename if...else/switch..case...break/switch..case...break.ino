int button_pressed = 26;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 switch(button_pressed)
 {
  case 1:
   Serial.println("Button 1 pressed");
   break;
  case 2:
   Serial.println("Button 2 pressed");
   break;
  default:
  Serial.println("I do not know which button was pressed");
  break; 
 }
}

void loop() {
  // put your main code here, to run repeatedly:

}
