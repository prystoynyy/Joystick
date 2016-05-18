#include "Joystick.h"

const int Joystick::xAliasCenterValue = 522;
const int Joystick::yAliasCenterValue = 495;

Joystick::Joystick(int sw_pin, int x_pin,int y_pin){
  this->sw_pin_ = sw_pin;
  this->x_pin_ = x_pin;
  this->y_pin_ = y_pin;
  pinMode(this->sw_pin_, INPUT);
  digitalWrite(this->sw_pin_, HIGH);
}

int Joystick::getAliasPosition(int aliasValue, int aliasCenterValue){
  return aliasValue - aliasCenterValue;
}

JoystickState Joystick::getState(){
  bool sw = digitalRead(this->sw_pin_) == 1;
  int x = analogRead(this->x_pin_);
  int y = analogRead(this->y_pin_);
  JoystickState state = JoystickState();
  state.X = this->getAliasPosition(x, this->xAliasCenterValue);
  state.Y = this->getAliasPosition(y, this->yAliasCenterValue);
  state.SW = sw;
  return state;
}
