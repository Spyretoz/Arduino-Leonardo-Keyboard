#include <Keyboard.h>

void setup() 
{
  pinMode(2, INPUT_PULLUP); // use pin 2 as input
  pinMode(3, INPUT_PULLUP); // use pin 3 as input
  // pinMode(PIN_OF_YOUR_CHOICE, INPUT_PULLUP);

  Serial.begin(9600);

}

void loop() 
{
  Keyboard.begin();

  if(digitalRead(2) == 0) // if button pushed
  {
    Keyboard.write(0x4E); // 4E = N
    delay(200);
  }
  else if(digitalRead(3) == 0) // if button pushed
  {
    Keyboard.write(0x56); // 56 = V
    delay(200);
  }
//  else if(digitalRead(PIN_OF_YOUR_CHOICE) == 0) // if button pushed
//  {
//    Keyboard.write(0xHEX_VALUE);
//    delay(200);
//  }

  Keyboard.end();

}
