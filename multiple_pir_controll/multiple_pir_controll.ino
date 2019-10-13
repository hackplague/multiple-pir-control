const int MOTION_PIN1 = 3; 
const int RELAY1 = 9; 
const int MOTION_PIN2 =4 ;
const int RELAY2 = 10;
const int MOTION_PIN3 =5 ;
const int RELAY3 = 11;
const int MOTION_PIN4 = 6;
const int RELAY4 = 12;
void setup() 
{
  pinMode(MOTION_PIN1, INPUT_PULLUP);
  pinMode(RELAY1, OUTPUT);
  pinMode(MOTION_PIN2, INPUT_PULLUP);
  pinMode(RELAY2, OUTPUT);
  pinMode(MOTION_PIN3, INPUT_PULLUP);
  pinMode(RELAY3, OUTPUT);
  pinMode(MOTION_PIN4, INPUT_PULLUP);
  pinMode(RELAY4, OUTPUT);
}

void loop() 
{
  int proximity1 = digitalRead(MOTION_PIN1);
    int proximity2 = digitalRead(MOTION_PIN2);
      int proximity3 = digitalRead(MOTION_PIN3);
        int proximity4 = digitalRead(MOTION_PIN4);
  if (proximity1 == HIGH && proximity2 == LOW && proximity3 == LOW && proximity4 == LOW)
  {
   digitalWrite(RELAY1, HIGH);
   digitalWrite(RELAY2, LOW);
   digitalWrite(RELAY3, LOW);
   digitalWrite(RELAY4, LOW);
  }
  if (proximity1 == LOW && proximity2 == HIGH && proximity3 == LOW && proximity4 == LOW)
  {
    digitalWrite(RELAY2, HIGH);
     digitalWrite(RELAY1, LOW);
   digitalWrite(RELAY3, LOW);
   digitalWrite(RELAY4, LOW);
  }
  if (proximity1 == LOW && proximity2 == LOW && proximity3 == HIGH && proximity4 == LOW)
  {
    digitalWrite(RELAY3, HIGH);
       digitalWrite(RELAY2, LOW);
   digitalWrite(RELAY1, LOW);
   digitalWrite(RELAY4, LOW);
  }
  if (proximity1 == LOW && proximity2 == LOW && proximity3 == LOW && proximity4 == HIGH)
  {
    digitalWrite(RELAY4, HIGH);
       digitalWrite(RELAY2, LOW);
   digitalWrite(RELAY3, LOW);
   digitalWrite(RELAY1, LOW);
  }
  if (proximity1 == HIGH && proximity2 == HIGH && proximity3 == LOW && proximity4 == LOW)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
   digitalWrite(RELAY3, LOW);
   digitalWrite(RELAY4, LOW);
    
  }

  if (proximity1 == LOW && proximity2 == HIGH && proximity3 == HIGH && proximity4 == LOW)
  {
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, LOW);
   digitalWrite(RELAY1, LOW);
   
  }

  if (proximity1 == LOW && proximity2 == LOW && proximity3 == HIGH && proximity4 == HIGH)
  {
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
  digitalWrite(RELAY2, LOW);
   digitalWrite(RELAY1, LOW);
   
  }

  if (proximity1 == HIGH && proximity2 == LOW && proximity3 == LOW && proximity4 == HIGH)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY4, HIGH);
    digitalWrite(RELAY3, LOW);
    digitalWrite(RELAY2, LOW);
  
  }

  if (proximity1 == HIGH && proximity2 == HIGH && proximity3 == HIGH && proximity4 == LOW)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, LOW);
  }
  
  if (proximity1 == LOW && proximity2 == HIGH && proximity3 == HIGH && proximity4 == HIGH)
  {
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
    digitalWrite(RELAY1, LOW);
  }
  
  if (proximity1 == HIGH && proximity2 == LOW && proximity3 == HIGH && proximity4 == HIGH)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
    digitalWrite(RELAY2, LOW);
  }
  
  if (proximity1 == HIGH && proximity2 == HIGH && proximity3 == LOW && proximity4 == HIGH)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY4, HIGH);
    digitalWrite(RELAY3, LOW);
  }
  
  if (proximity1 == HIGH && proximity2 == HIGH && proximity3 == HIGH && proximity4 == LOW)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, LOW);
  }
  if (proximity1 == HIGH && proximity2 == HIGH && proximity3 == HIGH && proximity4 == HIGH)
  {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
  }
  
  if (proximity1 == LOW && proximity2 == LOW && proximity3 == LOW && proximity4 == LOW)
  {
    digitalWrite(RELAY2, LOW);
     digitalWrite(RELAY1, LOW);
   digitalWrite(RELAY3, LOW);
   digitalWrite(RELAY4, LOW);
  }
} 
