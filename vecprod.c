#include "veclib.h"

/* This function gives elementwise product of two given vectors. */
void eleProd(vector vecA, vector vecB, vector vec_c)
{
	for (int i = 0; i < 4; i++)
    {
		vec_c[i] = vecA[i] * vecB[i];
	}
}