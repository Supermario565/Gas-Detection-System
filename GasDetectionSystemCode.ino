const int doPin = 2;        
const int greenLed = 3;  
const int redLed = 4;    
const int buzzer = 13;    

void setup() {
  pinMode(doPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
 
  int gasDetected = digitalRead(doPin);

  if (gasDetected == LOW) {
  
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);

 
     for (int i = 0; i < 5; i++) {  
      tone(buzzer, 1000); 
      delay(150);  
      noTone(buzzer);  
      delay(150); 

    }


  } else {
    
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);  

  }

  delay(250); 
}