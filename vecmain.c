/* Library Imports */
#include "veclib.h"

/* Function for taking input. */
void inputVec(vector vecA) {
    printf("Enter four space seprated values for the vector in R^4:\n");
    for (int i = 0; i < 4; i++)
    scanf("%f", &vecA[i]);
}

/* Print vector */
void printVec(vector vecA) {
    printf("[ ");
    for (int i = 0; i < 4; i++)
        printf("%f ", vecA[i]);
    printf("]");
    printf("\n");
}

/* Main Function */
int main() {
/* Vector Declaration */
    vector vecA, vecB, vecC;
/* Input Vector 1 */
    inputVec(vecA);
/* Input Vector 2 */
    inputVec(vecB);

/* Element product of two vectors */
    eleProd(vecA, vecB, vecC);
    printf("Element product of two vectors:\n");
    printVec(vecC);


/* Addition of two vectors */
    add(vecA, vecB, vecC);
    printf("Addition of two vectors:\n");
    printVec(vecC);

/* Dot product of two vectors */
    float dotp = dotprod(vecA, vecB);
    printf("Dot product of two vectors: %f\n", dotp);

/* Norm of two vectors*/
    float normv = norm(vecA, vecB);
    printf("norm of two vectors: %f\n", normv);	

/*Angle between two vectors*/
    float angle_v = angle(vecA, vecB);
    printf("Angle between two vectors: %f\n", angle_v);
}