// Arduino pin numbers
const int pinJoyButton = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

void setup() {
  // put your setup code here, to run once:
  pinMode(pinJoyButton , INPUT_PULLUP);   //activar resistencia pull up
  Serial.begin(9600);


}

void loop() {
  int Xvalue = 0;
  int Yvalue = 0;
  bool buttonValue = false;

  //leer valores
  Xvalue = analogRead(X_pin);
  delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
  Yvalue = analogRead(Y_pin);
  buttonValue = digitalRead(pinJoyButton);

  //mostrar valores por serial
  Serial.print("X:" );
  Serial.print(Xvalue);
  Serial.print(" | Y: ");
  Serial.print(Yvalue);
  Serial.print(" | Pulsador: ");
  Serial.println(buttonValue);
  delay(1000);

}
