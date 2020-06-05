float x = 0 ;
float y = 0;
float z = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int valores = analogRead(A2);
  x = valores/4; //Dan diferentes intensidades de un color 
  y = valores/2; // combinacion de los tres colores
  z = valores/3;
  analogWrite(11,x);
  analogWrite(12,y);
  analogWrite(13,z);
}
