#include "Arduino.h"
#include "ultramain.h"

ultramain::ultramain(int trig,int echo)
{
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  _trig = trig;
  _echo = echo;
}

    ultramain::int  dist()
    {
    digitalWrite(_trig, LOW);
    delayMicroseconds(2);


    digitalWrite(_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig, LOW);

    int duration = pulseIn(_echo, HIGH);

    int distance= duration*0.034/2;

   return distance;

}
