/*Program that will take an floating point number as input from the keyboard and use printf function to perform the followings: 
 
(a) Print the number right justified within 10 columns 
(b) Print the number to be right justified to 2 columns (Assuming the input has more 
than 2 digits) 
(c) Print the number rounded to two decimal places 
(d) Print the number rounded to integer (without using conversion or type casting) 
(e) Prints the number in exponential notation/scientific notation*/

#include <stdio.h>
int main()
{
    float a;
    printf("Enter a float value: ");
    scanf("%f",&a);

    printf("(a) Val:%*.*f\n", 14, 6, a);
    printf("(b) Val:%*.*f\n", 6, 6, a);
    printf("(c) Val:%.2f\n", a);
    printf("(d) Val:%.0f\n", a);
    printf("(e) Val:%e", a);

    return 0;
}

   // OR //

#include <stdio.h>
int main() {
    float inputNumber;

    printf("Enter a floating-point number: ");
    scanf("%f", &inputNumber);

    printf("(a) Val: %14.6f\n", inputNumber);
    printf("(b) Val:%6.6f\n", inputNumber);
    printf("(c) Val:%.2f\n", inputNumber);
    printf("(d) Val:%.0f\n", inputNumber);
    printf("(e) Val:%e\n", inputNumber);

    return 0;
}


