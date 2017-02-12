/*
  MotrorIC.h - Library for using the L293D Motor IC with Arduino. This is the software part. 
  Hardware can be found on our website : arduinocracker.uphero.com
  Created by Prem P. Udeshi Febuary 12, 2017.
  Released into the public domain.
*/


#ifndef MotorIC_h
#define MotorIC_h

#include "Arduino.h"


class MotorIC
{
  public:
    Motor1A(int pin1);
    Motor1B(int pin2);
    Motor2A(int pin3);
    Motor2B(int pin4);
    void drive();
    void reverse();
    void stop();
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
};

#endif