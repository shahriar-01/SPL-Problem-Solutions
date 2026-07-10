/*Program that will declare a variable from each data type: double, boolean. Then it will initialize them with values and print them.*/

#include <stdio.h>
#include <stdbool.h>
int main()

{
    double a;
    bool b ;

    a = 3.140000e+00;
    b = true;
    printf("The double value: %e \nThe boolean value: %d\n",a,b);

    double c;
    bool d;

    c = 1.618039;
    d = false;
    printf("The double value: %f \nThe boolean value: %d\n",c,d);

    return 0;
}

