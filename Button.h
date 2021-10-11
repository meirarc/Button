/**
 * @file Button.h
 * @author meirarc
 * @brief Button library
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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
