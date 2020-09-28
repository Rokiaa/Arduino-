int led =3;
int b=0;
int x=0;
int butn=7;
int mod=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(butn,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(butn)==HIGH)
  {
    if(mod==1) mod=2;
  else if(mod==2) mod=1;
  while(digitalRead(butn)==HIGH);}  
    if(mod==1)
    { 
      x=analogRead(A0);
      b=map(x,0,1023,0,255);
      analogWrite(led,b);
     }
   else if(mod==2)
    { 
      x=analogRead(A0);
      digitalWrite(led,HIGH);
      delay(x);
     digitalWrite(led,LOW); 
     delay(x);
   }
  
 
}
