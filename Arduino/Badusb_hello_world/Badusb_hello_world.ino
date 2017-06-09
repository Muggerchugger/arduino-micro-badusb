
#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
 
pinMode(7, INPUT);
      
      
        digitalWrite(7, 1);
bool buttonState = digitalRead(7);
      
      
        if(buttonState == LOW) {
      
      
                 delay(100000000000000000000);
      
      
        }
  
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(1000);

  delay(400);

  Keyboard.print("Hello World");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
