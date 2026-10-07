/* Program that will evaluate simple expressions of the form-   
 
<number1>   <operator>   <number2> ; where operators are (+, - , *, /)  
 
And if the operator is “/”, then check if <number2> nonzero or not. */


#include<stdio.h>
int main (){
  float num1, num2;
  char op; // op = operator
  scanf("%f %c %f", &num1, &op, &num2);

    if(op == '+'){
        printf("Summation: %.2f\n", num1+num2);
    }else if(op == '-'){
        printf("Subtraction: %.2f\n", num1-num2);
    }else if(op == '*'){
        printf("Multiplication: %.0f\n", num1*num2);
    }else if(op == '/'){
        if(num2 == 0){
            printf("Division: Zero as divisor is not valid!");
        }else{
            printf("Division: %f\n", num1/num2);
        }
      }
  return 0;
} 