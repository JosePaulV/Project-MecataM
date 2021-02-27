#include<HCSR04.h>

HCSR04 ultrasonicx(5,3);
HCSR04 ultrasonicy(9,6);
const int b1=10;
const int b2=11;
int bstate1=0;
int bstate2=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
}

void loop() 
{
   bstate1=digitalRead(b1);
   bstate2=digitalRead(b2);
   if(bstate1==HIGH)
     { Serial.print("a"); 
       Serial.print(" "); }
    else
     { Serial.print("c");
       Serial.print(" "); }
   delay(100);
   if(bstate2==HIGH)
     { Serial.print("b"); 
       Serial.print(" "); }
    else
     { Serial.print("d");
       Serial.print(" "); }
   delay(100);
   Serial.print(ultrasonicx.dist());
   Serial.print(" ");
   Serial.println(ultrasonicy.dist());
   delay(100);
}
