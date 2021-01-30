const int motor = 9 ;
int i;

void setup() {

  // stop motor
  pinMode(motor,  OUTPUT);

  // serial inizializated
  Serial.begin(9600);

  analogWrite(motor,0);

}

void loop() {

  for(int i=0; i<=10; i++){
    analogWrite(motor, i);
    Serial.print("Velocidad: ");
    Serial.println(i);
    delay(500);
  }

  

  for(int i=10; i>=0; i--){
    analogWrite(motor, i);
    Serial.print("Velocidad: ");
    Serial.println(i);
    delay(500);
  }

 

  


}
