/* Program that will construct a menu for performing arithmetic operations. The user will give 
two real numbers (a, b) on which the arithmetic operations will be performed and an integer 
number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, 
subtraction, multiplication, division (quotient) respectively. */

#include<stdio.h>
int main (){
  float a, b;
    int choice;

    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);

    printf("\nSelect an operation:\n");
     printf("1. Addition\n");
     printf("2. Subtraction\n");
     printf("3. Multiplication\n");
     printf("4. Division\n");
    printf("Enter your choice: ");
     scanf("%d", &choice);

    if(choice == 1){
        printf("Addition: %.0f", a+b);
    }else if(choice == 2){
        printf("Subtraction: %.0f", a-b);
    }else if(choice == 3){
        printf("Multiplication: %.0f", a*b);
    }else if(choice == 4){
        if(b == 0){
            printf("Quotient: Zero as divisor is not valid!");
        }else{
            printf("Quotient: %.0f", a/b);
        }
    }
return 0;
}