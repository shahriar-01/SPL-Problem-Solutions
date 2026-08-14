//Program that will decide whether a number is positive or not.

#include<stdio.h>
int main (){
   int n;
   printf("Enter Number: ");
   scanf("%d", &n);

  if (n>0){
   printf("The number is Positive");

  } else if (n<0){
   printf("The number is negative");

  } else {
   printf("The number is Zero");
  }
  return 0;
}
