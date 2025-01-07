#ifndef ButtonPress
#define ButtonPress

#include <Arduino.h>

// Adjust as needed
#define numberOfButtons 3

char ButtonPressed(int buttonNumber, uint8_t pin, int confidenceLevel);

// Track button states and confidence levels for each button
char Pressed[numberOfButtons];
int Pressed_Confidence_Level[numberOfButtons];
int Released_Confidence_Level[numberOfButtons];


char ButtonPressed(int buttonNumber, uint8_t pin, int confidenceLevel)
{
    // Read the button state: LOW = pressed, HIGH = not pressed
    int reading = digitalRead(pin);

    // If pressed
    if (reading == LOW) {
        Pressed_Confidence_Level[buttonNumber]++;
        Released_Confidence_Level[buttonNumber] = 0; 

        // If our confidence threshold is exceeded
        if (Pressed_Confidence_Level[buttonNumber] > confidenceLevel) {
            // Only return "pressed = 1" once until released
            if (Pressed[buttonNumber] == 0) {
                Pressed[buttonNumber] = 1;
                return 1; // Button just got pressed
            }
            // Reset so we can detect another press next time
            Pressed_Confidence_Level[buttonNumber] = 0;
        }
    }
    // If not pressed
    else {
        Released_Confidence_Level[buttonNumber]++;
        Pressed_Confidence_Level[buttonNumber] = 0; 

        // If we exceed the release threshold
        if (Released_Confidence_Level[buttonNumber] > confidenceLevel) {
            // Mark button as fully released
            Pressed[buttonNumber] = 0;
            Released_Confidence_Level[buttonNumber] = 0;
        }
    }
    return 0; 
}

#endif 