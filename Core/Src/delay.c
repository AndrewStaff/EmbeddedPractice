/**
  ******************************************************************************
  * @file           : delay.c
  * @brief          : Source file containing the delay functions
  *           
  ******************************************************************************
**/

// simple sleep function
void delay(int aCounterValue) {
  volatile int counter = 0; //if counter is not volatile then the SP is not used
  while(counter < (aCounterValue)) {
    ++counter;
  }
}
