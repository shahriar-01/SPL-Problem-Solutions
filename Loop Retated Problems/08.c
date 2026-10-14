/* Write a program (WAP) that will reverse the digits of an input integer. 


#include <stdio.h>
int main (){
  int number, digit;
  printf ("Enter number: ");
  scanf ("%d", &number);

   while ( number != 0 ) {

    digit = number % 10;
    printf ("%d", digit);
    number = number / 10;
 }
   printf ("\n");

   return 0;
}