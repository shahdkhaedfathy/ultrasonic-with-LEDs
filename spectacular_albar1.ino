int trig=12;
int echo=11;
long t;
long d;

void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(trig,0);
delayMicroseconds(1)
;
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
t=pulseIn(echo,1);
d=0.0343*(t/2);
Serial.println(d);
delay(250);
  if(d<=50){
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
}
else if(d<=100){
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
}
else if(d<=150){
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
}
else if(d<=200){
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,0);
}
else if(d<=250){
  digitalWrite(6,1);
  digitalWrite(7,0);
}
 else if(d<=300){
  digitalWrite(7,1);
} 
}