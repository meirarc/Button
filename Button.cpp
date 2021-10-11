/**
 * @file Button.cpp
 * @author meirarc
 * @brief Button library
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Button.h>

/**
 * @brief Construct a new Button:: Button object
 * 
 * @param pin 
 */
Button::Button(int pin){
    _buttonPin = pin;
    pinMode(_buttonPin, INPUT_PULLUP);
}

/**
 * @brief isPressed(). Return true if button is pressed.
 * 
 * @return true 
 * @return false 
 */
bool Button::isPressed(){
    return !digitalRead(_buttonPin);
}
    
   
    