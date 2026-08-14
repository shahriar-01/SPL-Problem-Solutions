// Program that will decide whether a number is even or odd.

#include<stdio.h>
int main ()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n%2 == 0) {
    printf("Even \n", n);
  } else {
    printf("Odd\n", n);
  }
 return 0;
}