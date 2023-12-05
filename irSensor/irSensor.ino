const int irSensor = 2;
const int led = 15;

void setup()
{
  Serial.begin(9600);
  pinMode(irSensor, INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  int data = digitalRead(irSensor); 
  if(data==0){
      digitalWrite(led,HIGH);
      char turu[]="Object detected";
      Serial.println(turu);
    }
  else{
     digitalWrite(led,LOW);
     char furu[]="Object not detected";
     Serial.println(furu);
      }
  delay(100);
}
