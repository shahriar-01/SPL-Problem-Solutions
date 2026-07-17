// Program that will increment and decrement a number X by Y. (Use += and -= operators)

#include <stdio.h>
int main(){
   int X,Y;
   printf("Enter two values: ");
   scanf("%d %d",&X,&Y);

   int a = X;
   printf("Incremented Value: %d\n", a+= Y);
   int b = X;
   printf("Decremented Value: %d\n", b-= Y);

 return 0;
}
