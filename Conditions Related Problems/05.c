// Program that will read from the console a random positive nonzero number and determine if it is a power of 2.

#include<stdio.h>
int main ()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);

  if(a > 0) {

    if(log2(a) == (int)log2(a)){
     printf("Yes");

    } else{
      printf("No");
     }
  }
  return 0;
}