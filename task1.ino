int led1=2;
int led2=3;
int led3=4;
int button1=7;
int button2=6;
int mod=1;
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<=4;i++)
{
  pinMode(i,OUTPUT);
  }
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button2)==HIGH)
  {
    if(mod==1) mod=2;
    else if(mod==2) mod=1;
    while(digitalRead(button2)==HIGH); }
  if(digitalRead(button1)==HIGH)
{
  if(mod==1){for(int i=2;i<=4;i++)
    {
    digitalWrite(i,HIGH);
    delay(400);
      }
    for(int i=4;i>=2;i--)
    {
      digitalWrite(i,LOW);
    delay(400);
      }   }
   else if(mod==2){
    for(int i=0;i<3;i++)
      {
        for(int j=2;j<=4;j++)
        { digitalWrite(j,HIGH); }
        delay(400);
        for(int j=4;j>=2;j--)
        { digitalWrite(j,LOW); }
        delay(400);
        
        }
   }   
      
  while(digitalRead(button1)==HIGH);

  }
}
