/* Program that will declare and initialize an integer and a floating point number. Then it will 
perform floating to integer and integer to floating conversions using 
(a) Assignment operation 
(b) Type casting */

#include <stdio.h>
int main(){
    int a;
    float b;
    printf("Enter an integer and a float: ");
    scanf("%d %f",&a,&b);

    int c = b;
    float d = a;
    printf("Assignment: %f assigned to an int produces %d\n", b, c);
    printf("Assignment: %d assigned to a float produces %f\n", a, d);
    printf("Type casting:(float) %d produces %f\n", a, (float)a);
    printf("Type casting:(int) %.3f produces -%d\n", b, (int)b);

    return 0;
}