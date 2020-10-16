#include "veclib.h"
#include <math.h>

float squaredLength(vector vec_a) {
	float sqLength = 0.0;
	for (int i = 0; i < DIM; i++)
		sqLength += ((vec_a[i]) * (vec_a[i]));
	return sqLength;
}

float angle(vector vec_a, vector vec_b) {
	float distA = squaredLength(vec_a);
	float distB = squaredLength(vec_b);
	float dotProduct = dotprod(vec_a, vec_b);
	float ans = acos(dotProduct/sqrt(distA*distB));
	return ans*(180/M_PI);
}