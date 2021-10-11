/**
 * @file Button.ino
 * @author meirarc (you@domain.com)
 * @brief Simple example of Button library use
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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