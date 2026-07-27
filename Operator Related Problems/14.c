/* Program that will take a floating point number X as input and evaluate A,B,C where- 
A = Value when X is rounded up to the nearest integer 
B = Value when X is rounded down to the nearest integer 
C = Absolute value of X   */



#include <stdio.h>
#include <math.h>
int main(){
    float x;
    printf("Enter a float value");
    scanf("%f", &x);
    printf("A = %.0f, B = %.0f, C = %.1f", ceil(x), floor(x), fabs(x));

    return 0;
}

   //OR//

#include <stdio.h>
int main() {
    double X;
    int A, B;
    double C;

    printf("Enter value of X: ");
    scanf("%lf", &X);

    A = (int)(X + 0.5);
    B = (int)(X - 0.5);
    C = (X < 0) ? -X : X;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %.1lf\n", C);

    return 0;
}



