#include "TinyTest.h"

void setup(){

  DEBUG_DIVIDER("*", 50);
  DEBUG_OK("Pretty Debug Example Sketch");
  DEBUG_TRACE();
  DEBUG_DIVIDER("*", 50);
  
  DEBUG_OK("%d : A Sample OK Message", 1);
  DEBUG_ERROR("%d : A Sample ERROR Message", 2);
  DEBUG_ALERT("%d : A Sample ALERT Message", 3);
  DEBUG_WARNING("%d : A Sample WARNING Message", 4);
  
  int Sample_Value = 666;
  DEBUG_VALUE("%d", Sample_Value);

  int Sample_Array[] = {1, 2, 3, 4, 5};
  DEBUG_ARRAY(Sample_Array, sizeof(Sample_Array)/sizeof(Sample_Array[0]), "%02X");

  DEBUG_DIVIDER("*", 50);
  
}

void loop(){

}
