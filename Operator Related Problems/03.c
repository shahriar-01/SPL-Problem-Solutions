/* Program that will take two numbers (a, b) as inputs and compute the value of the equation – (Without using math.h) 
X =  (3.31 * a^2 + 2.01 * b^3) / (7.16 * b^2 + 2.01 * a^3)  */

#include <stdio.h>
int main(){
    double a,b,X;
    printf("Enter two values: ");
    scanf("%lf %lf",&a ,&b);

    X = (3.31 * a * a + 2.01 * b * b * b) / (7.16 * b * b + 2.01 * a * a * a);
    printf("X= %f", X);

    return 0;
}