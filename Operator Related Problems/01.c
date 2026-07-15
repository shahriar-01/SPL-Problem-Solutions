/* Program that will take two numbers X and Y as inputs, then calculate and print the values 
of their addition, subtraction, multiplication, division (quotient and reminder). */

#include <stdio.h>
int main(){

  float x,y;
  printf("Enter two values: ");
  scanf("%f %f",&x,&y);

  printf("Addition: %.2f \n",x+y);
  printf("Subtraction: %.2f \n",x-y);
  printf("Multiplication: %.2f \n",x*y);

  if (y != 0){
  int quotient = (int)x/y;
  int remainder = (int)x%(int)y;
  printf("Quotient: %d\n",quotient);
  printf("Remainder: %d\n",remainder);

  } else {
    printf("E\tR\tR\tO\tR\n");}

 return 0;
}