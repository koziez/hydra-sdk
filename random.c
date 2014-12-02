#include "random.h"

long int random (int max)
{
	state = state * 1103515245 + 12345;
	return state % (max + 1);
}

/*
long int random (int min, int max)
{
	int range = max - min;
	return random(range) + min;
}
*/

void randomSeed(long int seed)
{
	state = seed;
}
