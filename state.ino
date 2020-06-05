void setup() {
  // put your setup code here, to run once:
    pinMode(5, INPUT_PULLUP);
    int val = digitalRead(5);
    int state = LOW;
}

void loop() {
  // put your main code here, to run repeatedly: 

  
  if (val == HIGH && state == HIGH){
    state = LOW
    
  }
  elseif(val == HIGH && state == HIGH){
    state = LOW
  }
    digitalWrite(2, state);
}
