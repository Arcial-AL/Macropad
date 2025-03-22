



void preset1() {
if (digitalRead(a) == LOW)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  updisplay();
  delay(300);
}


else if (digitalRead(b) == LOW)
{
  farm();
  updisplay();
  delay(300);
}


else if (digitalRead(c) == LOW)
{
  Mouse.press(MOUSE_MIDDLE);
}

else if (digitalRead(d) == LOW)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(300);
}


else if (digitalRead(e) == LOW)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(300);
}


else if (digitalRead(f) == LOW)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(300);
}


//--------------------------------------------------------------------------------------------------------
else if (digitalRead(con) == LOW)
{
  clear();
  updisplay();
  delay(10);
}
else if (digitalRead(t1) == LOW)
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F1);
  Keyboard.releaseAll();
  delay(200);
}
else if (digitalRead(t2) == LOW)
{
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_F12);
  Keyboard.releaseAll();
  delay(300);
}
else if (digitalRead(t3) == LOW)
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.print("d");
  Keyboard.releaseAll();
  delay(300);
  }
else if (digitalRead(ps) == LOW)
{
  upps();
  delay(300);
  }




}