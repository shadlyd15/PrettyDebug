#include "TinyTest.h"

ADD_TINY_TEST(test_0){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 1);
}

ADD_TINY_TEST(test_1){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i == 2);
}

ADD_TINY_TEST(test_2){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 3);
}

ADD_TINY_TEST(test_3){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 4);
}

ADD_TINY_TEST(test_4){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 5);
}

ADD_TINY_TEST(test_5){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 6);
}

ADD_TINY_TEST(test_6){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 7);
}

ADD_TINY_TEST(test_7){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 8);
}

ADD_TINY_TEST(test_8){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 9);
}

ADD_TINY_TEST(test_9){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 10);
}

ADD_TINY_TEST(test_10){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 11);
}

ADD_TINY_TEST(test_11){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 12);
}

ADD_TINY_TEST(test_12){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 13);
}

ADD_TINY_TEST(test_13){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 14);
}

ADD_TINY_TEST(test_14){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 15);
}

ADD_TINY_TEST(test_15){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 16);
}

ADD_TINY_TEST(test_16){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 17);
}

ADD_TINY_TEST(test_17){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 18);
}

ADD_TINY_TEST(test_18){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 19);
}

ADD_TINY_TEST(test_19){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 20);
}

ADD_TINY_TEST(test_20){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 21);
}

ADD_TINY_TEST(test_21){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 22);
}

ADD_TINY_TEST(test_22){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 23);
}

ADD_TINY_TEST(test_23){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 24);
}

ADD_TINY_TEST(test_24){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 25);
}

ADD_TINY_TEST(test_25){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 26);
}

ADD_TINY_TEST(test_26){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 27);
}

ADD_TINY_TEST(test_27){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 28);
}

ADD_TINY_TEST(test_28){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 29);
}

ADD_TINY_TEST(test_29){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 30);
}

ADD_TINY_TEST(test_30){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 31);
}

ADD_TINY_TEST(test_31){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 32);
}

ADD_TINY_TEST(test_32){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 33);
}

ADD_TINY_TEST(test_33){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 34);
}

ADD_TINY_TEST(test_34){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 35);
}

ADD_TINY_TEST(test_35){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 36);
}

ADD_TINY_TEST(test_36){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 37);
}

ADD_TINY_TEST(test_37){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 38);
}

ADD_TINY_TEST(test_38){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 39);
}

ADD_TINY_TEST(test_39){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 40);
}

ADD_TINY_TEST(test_40){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 41);
}

ADD_TINY_TEST(test_41){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 42);
}

ADD_TINY_TEST(test_42){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 43);
}

ADD_TINY_TEST(test_43){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 44);
}

ADD_TINY_TEST(test_44){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 45);
}

ADD_TINY_TEST(test_45){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 46);
}

ADD_TINY_TEST(test_46){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 47);
}

ADD_TINY_TEST(test_47){
  int i = rand()%50;
  ASSERT_TEST_RESULT(i != 48);
}

ADD_TINY_TEST(test_48){
  int i = 2;
  ASSERT_TEST_RESULT(i == 49);
}

ADD_TINY_TEST(test_49){
  int index = rand()%50;
  DEBUG_VALUE("%02X", index);
  const int length = 100;

  uint8_t array_1[length];
  memset(array_1, 0x00, length*sizeof(array_1[0]));
  array_1[0]  = 1;
  array_1[50] = 1;
  array_1[99] = 1;
  // DEBUG_ARRAY(array_1, length, "%d");
  // DEBUG_DIVIDER("*", DEBUG_DIVIDER_LENGTH);

  unsigned int array_2[length];
  memset(array_2, 0x00, length*sizeof(array_2[0]));
  array_2[0]  = 3;
  array_2[50] = 3;
  array_2[99] = 3;
  // DEBUG_ARRAY(array_2, length, "%0d");
  // DEBUG_DIVIDER("*", DEBUG_DIVIDER_LENGTH);


  int array_3[length];
  memset(array_3, 0x00, length*sizeof(array_3[0]));
  array_3[0]  = 3;
  array_3[50] = 3;
  array_3[99] = 3;
  // DEBUG_ARRAY(array_3, length, "%d");
  // DEBUG_DIVIDER("*", DEBUG_DIVIDER_LENGTH);

  ASSERT_ARRAY(array_3, array_2, length, sizeof(array_3[0]));

  ASSERT_TEST_RESULT(index != 50);
}

ADD_TEST_SUITE(test_suit){
  RUN_TINY_TEST(test_0);
  RUN_TINY_TEST(test_1);
  RUN_TINY_TEST(test_2);
  /*
  RUN_TINY_TEST(test_3);
  RUN_TINY_TEST(test_4);
  RUN_TINY_TEST(test_5);
  RUN_TINY_TEST(test_6);
  RUN_TINY_TEST(test_7);
  RUN_TINY_TEST(test_8);
  RUN_TINY_TEST(test_9);
  RUN_TINY_TEST(test_10);
  RUN_TINY_TEST(test_11);
  RUN_TINY_TEST(test_12);
  RUN_TINY_TEST(test_13);
  RUN_TINY_TEST(test_14);
  RUN_TINY_TEST(test_15);
  RUN_TINY_TEST(test_16);
  RUN_TINY_TEST(test_17);
  RUN_TINY_TEST(test_18);
  RUN_TINY_TEST(test_19);
  RUN_TINY_TEST(test_20);
  RUN_TINY_TEST(test_21);
  RUN_TINY_TEST(test_22);
  RUN_TINY_TEST(test_23);
  RUN_TINY_TEST(test_24);
  RUN_TINY_TEST(test_25);
  RUN_TINY_TEST(test_26);
  RUN_TINY_TEST(test_27);
  RUN_TINY_TEST(test_28);
  RUN_TINY_TEST(test_29);
  RUN_TINY_TEST(test_30);
  RUN_TINY_TEST(test_31);
  RUN_TINY_TEST(test_32);
  RUN_TINY_TEST(test_33);
  RUN_TINY_TEST(test_34);
  RUN_TINY_TEST(test_35);
  RUN_TINY_TEST(test_36);
  RUN_TINY_TEST(test_37);
  RUN_TINY_TEST(test_38);
  RUN_TINY_TEST(test_39);
  RUN_TINY_TEST(test_40);
  RUN_TINY_TEST(test_41);
  RUN_TINY_TEST(test_42);
  RUN_TINY_TEST(test_43);
  RUN_TINY_TEST(test_44);
  RUN_TINY_TEST(test_45);
  RUN_TINY_TEST(test_46);
  RUN_TINY_TEST(test_47);
  RUN_TINY_TEST(test_48);
  RUN_TINY_TEST(test_49);
  // RUN_TINY_TEST(test_300);
  // RUN_TINY_TEST(test_301);
  */
}

int popup(const char * input){
  if(!strncmp(input, "Y", strlen("Y"))){
    DEBUG_DIVIDER("*", TEST_DIVIDER_LENGTH);
    DEBUG_OK("Tiny Test Starting");  
    RUN_TEST_SUITE(test_suit);
    TINY_TEST_REPORT();
    DEBUG_INPUT(NULL, "Press Enter To Exit", 0);
    return 1;
  }
  return 0;
}

void setup(){
  SET_CLOCK_SOURCE(&millis);
  ARDUINO_ONLY(Serial.begin(115299));
  ATTACH_DEBUG_STREAM(&Serial);
  printf("\r\n");
  DEBUG_DIVIDER("*", TEST_DIVIDER_LENGTH);
  DEBUG_INPUT(&popup, "Run Test? (Y/N)", 0);
  DEBUG_OK("Going To Loop");
}

void loop(){

}
