#include<Servo.h>
Servo myservo;
const int l=13;
const int b=11;
const int sp=A0;
int sv=0;
void setup(){
  pinMode(l,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(sp,INPUT);
  Serial.begin(9600);
}
void loop()
{
  sv=analogRead(sp);
  Serial.println(sv);
  if(sv<50)
  {
    Serial.println("Fire Detected");
    digitalWrite(l,HIGH);
    digitalWrite(b,HIGH);
    for(int pos=0;pos,180;pos+=1)
    {
      Serial.println("Fire Extinguisher:ON");
      myservo.write(pos);
    }
  }
  else
  {
    Serial.println("Fire Detected");
    digitalWrite(l,LOW);
    digitalWrite(b,LOW);
    for(int pos=180;pos=0;pos-=1)
    {
      Serial.println("Fire Extinguisher:OFF");
      myservo.write(pos);
    }
  }
  
}
