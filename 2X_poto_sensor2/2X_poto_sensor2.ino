#define SenPin 5
#define SenPin2 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SenPin,INPUT_PULLUP);
    pinMode(SenPin2,INPUT_PULLUP);
}

void loop() {
  delay(100);
  int sen1 = digitalRead(SenPin);
  int sen2 = digitalRead(SenPin2);
//
//  Serial.print("sensor1 : ");
//  Serial.println(sen1);
//  Serial.print("sensor2 : ");
//  Serial.println(sen2);

  if(sen1 == 0){
    for(;;){
      delay(100);
      int sen2 = digitalRead(SenPin2);
      if(sen2 == 0){
      Serial.println("Left");
      delay(500);
      break;
    }
    }
    
  }

   if(sen2 == 0){
    for(;;){
      delay(100);
      int sen1 = digitalRead(SenPin);
      if(sen1 == 0){
      Serial.println("Right");
      delay(500);
      break;
    }
    }
    
  }

   
}
