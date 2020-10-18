#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7
#define sensorL 8
#define sensorR 9
int sl=0;
int sr=0;
void setup () {
for (int i=5; i<= 10; i++)
{
pinMode (i , OUTPUT );
}
pinMode(sensorR , INPUT);
pinMode(sensorL , INPUT);
}

void forword()
{
digitalWrite(IN1 , HIGH);
digitalWrite(IN2 , LOW );
digitalWrite(IN3 , HIGH );
digitalWrite(IN4 , LOW);

}
void backword()
{
digitalWrite(IN1 , LOW);
digitalWrite(IN2 , HIGH );
digitalWrite(IN3 , LOW );
digitalWrite(IN4 , HIGH);
}
void left()
{
digitalWrite(IN1 , LOW);
digitalWrite(IN2 , LOW );
digitalWrite(IN3 , HIGH );
digitalWrite(IN4 , LOW );

}
void right()
{
digitalWrite(IN1 , HIGH);
digitalWrite(IN2 , LOW );
digitalWrite(IN3 , LOW );
digitalWrite(IN4 , LOW);
}
void stopp(){
digitalWrite(IN1 , LOW);
digitalWrite(IN2 , LOW );
digitalWrite(IN3 , LOW );
digitalWrite(IN4 , LOW );

}
void loop(){
sl= digitalRead(sensorL);
sr=digitalRead (sensorR);
if (sl==0&& sr==0)
forword();
else if(sl==0&&sr==1)
right();
else if (sl== 1&& sr== 0)
left();
else if(sl== 1&& sr== 1)
stopp();}
