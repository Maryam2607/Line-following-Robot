  float A,B,C,D,E,output;
  int SHARP_RIGHT,RIGHT,F,LEFT,SHARP_LEFT,REVERSE;
 
  
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT); 
  pinMode(8,OUTPUT); 
  pinMode(4,OUTPUT); 
  pinMode(9,OUTPUT); 
   
  
  Serial.begin(9600);
 
 
}
void loop() {
  // put your main code here, to run repeatedly:
 SHARP_LEFT =((!A*B*!D)+(A*C*D*!E));
 LEFT=((A*!C*!E)+(A*B*!D)) ;
  F = ((!B*C*!D) + (!A*B*D*!E));
  RIGHT=((A*!C*!E)+(A*B*!D)); 
  SHARP_RIGHT=((!B*D*!E)+(!A*B*C*E));
 // REVERSE=B*!C*E + B*!C*D + A*!C*E + A*!C*D + !A*!B*!C*!D*!E;
   
    if(F==1){
    forward(120,120);
    output=3;
    
  }
  
   if(SHARP_LEFT==1){
    left(70,110);
    output=1;
    
    }
     if(LEFT==1){
    left(140,140);
    output=2;}
    
   
    if(RIGHT==1){
    right(100,0);
    output=4;
    
    }
     if(SHARP_RIGHT==1){
     right(140,140);
    output=5;
    
    }
      if(REVERSE==1){
    backward(100,100);
    output=6;
    
    }
 
  
  /*if(output==1)
  forward(0,255);
  if(output==2)
  left(255,255);
  if(output==3)
  forward(255,255);2
  if(output==4)
  right(255,255);
  if(output==5)
  forward(255,0);
  if(output==6)
  backward(255,255);*/
  
}



void forward(int a,int b)
{
   digitalWrite(7,LOW);//anticlockwise
   digitalWrite(8,HIGH);
   analogWrite(5,a);//left motor
   digitalWrite(4,LOW);
   digitalWrite(9,HIGH);
   analogWrite(6,b);} /// right motor
   void backward(int c, int d)
{
   digitalWrite(7,HIGH);//clockwise
   digitalWrite(8,LOW);
   analogWrite(5,c);
   digitalWrite(4,HIGH);
   digitalWrite(9,LOW);
   analogWrite(6,d);}
   void left(int e,int f)
{
   digitalWrite(7,HIGH);//LEFT CLOCKWISE and right is anti clockwise
   digitalWrite(8,LOW);   
   analogWrite(5,e);
   digitalWrite(4,LOW);
   digitalWrite(9,HIGH);
   analogWrite(6,f);}
    void right(int g,int h)
{
   digitalWrite(7,LOW); //Vise versa
   digitalWrite(8,HIGH);
   analogWrite(5,g);
   digitalWrite(4,HIGH);
   digitalWrite(9,LOW);
   analogWrite(6,h);}
   
  
   void stop(int k,int l)
{
   digitalWrite(7,LOW); //Vise versa
   digitalWrite(8,LOW);
   analogWrite(5,k);
   digitalWrite(4,LOW);
   digitalWrite(9,LOW);
   analogWrite(6,l);}
  
   
   


