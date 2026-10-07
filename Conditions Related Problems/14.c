/* Program that will construct a menu for performing arithmetic operations. The user will give 
two real numbers (a, b) on which the arithmetic operations will be performed and an integer 
number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, 
subtraction, multiplication, division respectively.  
 
If Choice-4 is selected, the program will check if b is nonzero.  
 
If the check is true, the program will ask for another choice (1 <= Case <=2), where Case-1, 2 
evaluate quotient and reminder respectively. If the check is false, it will print an error 
message “Error: Divisor is zero” and halt.  */

#include<stdio.h>
int main ()
{
  float num1, num2;
  int a, choice;

    scanf("%f %f", &num1, &num2);
    scanf("%d", &choice);

    if(choice == 1){
        printf("Addition: %.0f", num1+num2);
    }else if(choice == 2){
        printf("Subtraction: %.0f", num1-num2);
    }else if(choice == 3){
        printf("Multiplication: %.0f", num1*num2);
    }else if(choice == 4){

        if(num2 != 0){
         scanf("%d", &a);

          if(a == 1){
            printf("Quotient: %.0f", num1/num2);
          }else if(a == 2){
            printf("Reminder: %d", (int)num1%(int)num2);
            }
          }else{
           printf("Error: Divisor is zero");
          }
    }
  return 0;
}