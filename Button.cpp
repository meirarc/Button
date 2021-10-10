#include <Button.h>

  
Button::Button(int pin){
    _buttonPin = pin;
    pinMode(_buttonPin, INPUT_PULLUP);
}

bool Button::isPressed(){
    return !digitalRead(_buttonPin);
}
    
   
    