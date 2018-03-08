#ifndef __Blink__H__
#define __Blink__H__

#include<Arduino.h>

class Blink {
  private:
  short pin;
  public:
     Blink(int p);
     void on(int k);
     void off(int k);
 };
#endif
