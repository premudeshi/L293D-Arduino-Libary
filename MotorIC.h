#ifndef MotorIC_h
#define MotorIC_h

#include "Arduino.h"


class Motor_IC
{
  public:
    Motor1A(int pin1);
    Motor1B(int pin2);
    Motor2A(int pin3);
    Motor2B(int pin4);
    void drive();
    void reverse();
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
};

#endif