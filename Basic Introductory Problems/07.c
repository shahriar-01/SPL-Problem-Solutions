/*Program that will receive the values of an integer, a floating point number, a character from the keyboard and print those values.*/

#include<stdio.h>
int main()
{
 int a;
 float b;
 char c;

 printf("Enter an integer, a float and a character: ");
 scanf("%d %f %c", &a, &b, &c);

 printf("The integer value: %d\n", a);
 printf("The floating point value: %f\n", b);
 printf("The character value: %c\n", c);

 return 0;
}
