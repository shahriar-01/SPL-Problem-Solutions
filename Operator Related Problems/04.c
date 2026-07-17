/* Program that will increment and decrement a number X by 1 inside the printf function. (Use 
++ and - - operators) */

#include <stdio.h>
int main(){
    int x,x1,x2,x3,x4;
    printf("Enter a value: ");
    scanf("%d",&x);

    x1 = x;
    printf("X++: %d\n", x1++);
    x2 = x;
    printf("++X: %d\n", ++x2);
    x3 = x;
    printf("X--: %d\n", x3--);
    x4 = x;
    printf("--X: %d", --x4);

  return 0;
}