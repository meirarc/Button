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
#include <Led.h>        // https://github.com/meirarc/Led.git
#include <Button.h>     // https://github.com/meirarc/Button.git

Led led_built_in(LED_BUILTIN);
Button buttom(0);

void setup() {
}

void loop() {

  if(buttom.isPressed()) led_built_in.on();
  else led_built_in.off();
}
```
