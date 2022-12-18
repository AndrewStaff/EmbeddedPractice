#ifndef __DELAY_H__
#define __DELAY_H__

/**
  ******************************************************************************
  * @file           : delay.h
  * @brief          : Header file for the delay.c source file
  *           
  ******************************************************************************
**/

// simple sleep function
// Will make the CPU stay in a while loop until CounterValue is reached
void delay(int aCounterValue);

#endif // __DELAY_H__
