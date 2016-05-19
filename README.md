Joystick
=========

Joystick is library for working with Joystick module.

How use
-----------------------

**1. Connect joystick module to arduino**:


<img src="https://brainy-bits.com/wp-content/uploads/2014/12/schematic-joystick1.png" height=200>

**2. Write code**:

```cpp
#include "Joystick.h"

Joystick* joystick = new Joystick(SW_pin, X_pin, Y_pin);
JoystickState state = joystick->getState();
```
