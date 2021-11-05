

// change this to whichever pin you want to use
int buzzer = 11;



void setup() {
  //put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(buzzer, OUTPUT);
  
  
  
}

void loop() {
  //put your main code here, to run repeatedly:
  
  
  if((analogRead(A0) < 900)) {
    digitalWrite(buzzer, HIGH);
    delay(150);
    
  }
   


  else {
    digitalWrite(buzzer, LOW);
  }
}
