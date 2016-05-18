#include "../src/Joystick.h"
#include <Joystick.h>


// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output
Joystick* joystick;

void setup() {
  Serial.begin(9600);
  joystick = new Joystick(SW_pin, X_pin, Y_pin);
}

void loop() {
  JoystickState state = joystick->getState();
  Serial.print("Switch:  ");
  Serial.print(state.SW);
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(state.X);
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(state.Y);
  Serial.print("\n\n");
  delay(500);
}
