#if !defined(ARDUINO)
// #define ARDUINO
// #define ARDUINO_ARCH_ESP8266
#include <string.h>
#include <stdlib.h>
#include "tinytest.ino"

int main(int argc, char const *argv[]){
  setup();
  while(1) {
    loop();
  }
}

#endif