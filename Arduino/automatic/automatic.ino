#include <Servo.h>
Servo myservo;
int pos=0;
long FISHFEEDER=5000;
long endtime;
long now;
void setup()
{
  myservo.attach(7);
  myservo.write(0);
  delay(15);
}

void loop()
{
  now=millis();
  endtime=now+FISHFEEDER;
  while(now<endtime)
  {
    myservo.write(0);
    delay(10000);
    now=millis();
  }
  for(pos=0;pos<180;pos+=1)
  {
    myservo.write(pos);
    delay(15);
  }
  for(pos=180;pos>=1;pos-=1)
  {
    myservo.write(pos);
    delay(15);
  }

}
