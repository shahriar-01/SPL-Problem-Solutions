// Program that will multiply and divide a number X by Y. (Use *= and /= operators) 

#include <stdio.h>
int main(){
    int X,Y;
    printf("Enter two values: ");
    scanf("%d %d",&X,&Y);

    int a = X;
    printf("Multiplication: %d\n",a*= Y);
    int b = X;
    printf("Division: %d\n",b /= Y);

    return 0;
}