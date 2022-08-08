# ⚙ Button
Button library for ESP32 created to build a simple object related to a push button. This library avoid to know how to create the logic to get the button working. Instead, it allows to define a simple code to set the button code.

## ⚡ Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## 🔧 Library details

Public functions:

- `Button(int pin)`

    Contructor, inform the `pin` to set up an `INPUT_PULLUP` button

- `void isPressed()`

    Return `true` if the button is pressed.


## 🖌 Example

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


## 🙋‍♂️ Support & Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request if you have a way to improve this project.

Make sure your request is meaningful and you have tested the app locally before submitting a pull request.

💙 If you like this project, give it a ⭐ and share it with friends!
