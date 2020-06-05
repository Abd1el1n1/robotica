void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(14,OUTPUT);
pinMode(15,INPUT);
}

void loop() {
  long duracion,distanciaCm;
  digitalWrite(13,LOW);
  delayMicroseconds(2);
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
  duracion =pulseIn(14,HIGH);
  //convertthetimeintoadistance
  distanceCm =duracion /29.1/2;
  if(distanciaCm <=0){
    Serial.println("Outofrange");
    }
  else{
    Serial.print(distanciaCm);
    Serial.print("cm");
    Serial.println();
    }
    delay(1000);
}
