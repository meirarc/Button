#ifndef Button_h
#define Button_h

#include <Arduino.h>

class Button
{
   public:
    Button(int pin);
    bool isPressed();
    
   private:
    int _buttonPin;
    
};

#endif
