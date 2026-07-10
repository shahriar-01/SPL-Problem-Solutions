/*Program that will declare a variable from each data type: long int, long long int, long double, short int. Then it will initialize them with values and print them.*/

#include <stdio.h>
int main()
{
    long int a = 2147483647;
    long long int b = 9223372036854775807;
    long double c = 1.1E+4932;
    short int d = 32767;
    printf("The long int value: %ld\n", a);
    printf("The long long int value: %lld\n", b);
    printf("The long double value: %Lf\n", c);
    printf("The short int value: %hd\n", d);

    long int e = -2147483648;
    long long int f = -9223372036854775808;
    long double g = 3.4E-4932;
    short int h = -32768;
    printf("\nThe long int value: %ld\n", e);
    printf("The long long int value: %lld\n", f);
    printf("The long double value: %Lf\n", g);
    printf("The short int value: %hd\n", h);

    return 0;
}
