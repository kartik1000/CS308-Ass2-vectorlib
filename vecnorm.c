#include "veclib.h"
#include <math.h>
// taking norm of two vectors
float norm(vector vec_a,vector vec_b){
	
	float norm_ = 0.0;

    for (int i=0;i<DIM;i++) {
        norm_ += ( vec_a[i] - vec_b[i])*( vec_a[i] - vec_b[i]);
    }
    return sqrt(norm_);

}
