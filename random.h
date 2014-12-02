
#ifndef _RANDOM_H_
#define _RANDOM_H_

#include "gpio.h"

uint32_t state;

//long int random (int min, int max);		//unable to overload currently
long int random (int max);

void randomSeed (long int seed);


#endif
