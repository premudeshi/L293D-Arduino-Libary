#ifndef L293D_h
#define L293D_h

#include "Arduino.h"


class L293D
{
  public:
    Motor1A(int pin);
    Motor1B(int pin);
    Motor2A(int pin);
    Motor2B(int pin);
    void drive();
    void reverse();
  private:
    int _pin;
};

#endif