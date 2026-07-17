/* Program that will take two numbers as inputs and print the maximum value. (Using 
conditional operator - ?) */

#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two values: ");
    scanf("%d %d",&num1 ,&num2);

    if(num1>num2){
        printf("MAX: %d",num1);
    }else{
        printf("MAX: %d",num2);
    }
  return 0;
}