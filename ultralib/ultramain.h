#ifndef ultramain_h
#define ultramain_h

#include "Arduino.h"

class ultramain
{
  public:
    ultramain(int trig, int echo);
    int dist();
  private:
    int _trig;
    int _echo;
};

#endif