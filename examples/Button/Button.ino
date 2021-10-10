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