#include <Joystick.h>
#include "Constants.h"

Constants c;
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,15,0,
false,false,false,false,false,false,
false,false,false,false,false);


void setup() {
  // put your setup code here, to run once:
c.setupButtons();
Serial.begin(9600);
Joystick.begin();

}

int lastButtonState[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=15;i++){
  int currentButtonState = !digitalRead(c.getButtonPin(i));
  if (currentButtonState != lastButtonState)
  {
    Joystick.setButton(c.getButton(i), currentButtonState); // 0 equals number #1 button in joystick
    lastButtonState[c.getButton(i)] = currentButtonState;
    
    
  }
  
  
}
}
