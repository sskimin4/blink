#include <Arduino.h>
#include "Blink.h"

Blink::Blink(int p){
    pin=p;
    pinMode(p,OUTPUT);
}
void Blink::on(int k){
   digitalWrite(pin,HIGH);
   delay(k);
 }
void Blink::off(int k){
    digitalWrite(pin,LOW);
    delay(k);
  }
