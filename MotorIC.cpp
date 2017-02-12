/*
  MotrorIC.cpp - Library for using the L293D Motor IC with Arduino. This is the software part. 
  Hardware can be found on our website : arduinocracker.uphero.com
  Created by Prem P. Udeshi Febuary 12, 2017.
  Released into the public domain.
*/

#include "Arduino.h"
#include "MotorIC.h"

MotorIC::Motor1A(int pin1)
{
  pinMode(pin1, OUTPUT);
  _pin1 = pin1;
}

MotorIC::Motor1B(int pin2)
{
  pinMode(pin2, OUTPUT);
  _pin2 = pin2;
}

MotorIC::Motor2A(int pin3)
{
  pinMode(pin3, OUTPUT);
  _pin3 = pin3;
}

MotorIC::Motor1A(int pin4)
{
  pinMode(pin4, OUTPUT);
  _pin4 = pin4;
}

void MotorIC::drive()
{
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin3, HIGH);
}

void MotorIC::stop()
{
  digitalWrite(_pin1, LOW);
  digitalWrite(_pin2, LOW);
  digitalWrite(_pin3, LOW);
  digitalWrite(_pin4, LOW);
}


void MotorIC::reverse()
{
  digitalWrite(_pin2, LOW);
  digitalWrite(_pin4, LOW);
}