#include "Key_commands.h"



void clear()
{
  Keyboard.releaseAll();
  Mouse.release(MOUSE_MIDDLE);
  Mouse.release(MOUSE_LEFT);
  Mouse.release(MOUSE_RIGHT);
}

void farm()
{
static int i = 0;
  if (i == 0) {
    Keyboard.releaseAll();
    Keyboard.press('d');
    Mouse.press(MOUSE_LEFT);
    i = 1;
  }
  else {
    Keyboard.releaseAll();
    Keyboard.press('a');
    Keyboard.press('w');
    Mouse.press(MOUSE_LEFT);
    i = 0;
  }
}


//rick roll
void troll()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.print("d");
  Keyboard.releaseAll();
  delay(10);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('l');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(10);
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  Keyboard.releaseAll();
  Keyboard.press(KEY_KP_ENTER);
  Keyboard.releaseAll();
  delay(300);
}

