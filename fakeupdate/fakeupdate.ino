#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  //DigiKeyboard.print("https://youtu.be/_nQU_8Nm0Yk?t=4550");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
 // DigiKeyboard.delay(5000);
 // DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 // DigiKeyboard.delay(3000);
  DigiKeyboard.print("http://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
