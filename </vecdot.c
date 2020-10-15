/* Custom Library Imports */
#include "veclib.h"

/* Function for dot product of two vectors. */
float dotprod(vector vecA, vector vecB) {
	float ans=0;
	for(int i=0;i<4;i++) {
		ans+=vecA[i]*vecB[i];
	}
	return ans;
}
