/*
 * SimpleSD - A tool for working with SD module for Arduino
 * By Vasyl Prystoynyy
 */

#ifndef __Joystick_H__
#define __Joystick_H__

#include <SPI.h>
#include <SD.h>


struct JoystickState{
  int X;
  int Y;
  bool SW;
};

//Class for working with SD module.
class Joystick {
private:
        const static int xAliasCenterValue;
        const static int yAliasCenterValue;
        int sw_pin_;
        int x_pin_; // analog pin connected to X output
        int y_pin_;
        int getAliasPosition(int aliasValue, int aliasCenterValue);
public:
        Joystick(int sw_pin, int x_pin,int y_pin);
        JoystickState getState();
};
#endif
