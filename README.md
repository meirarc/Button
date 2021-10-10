# Button
Button library for ESP32

## Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## Library details

Public functions:

- `Button(int pin)`

    Contructor, inform the `pin` to set up an `INPUT_PULLUP` button

- `void isPressed()`

    Return `true` if the button is pressed.


## Example

```c++
#include <Watchdog.h>

Watchdog wdt(5);

void setup() {
  Serial.begin(9600);
  wdt.begin();
}

void loop() {
  wdt.handle();
}
```
