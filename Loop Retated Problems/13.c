/* Write a program (WAP) that will print the factorial (N!) of a given number N. Please see 
the sample input output. */


#include <stdio.h>
int main() {
    int i, N, factorial = 1;
    printf("Enter a number (N): ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i++) {
        factorial *= i;
    }
    printf("%d! = ", N);

    for ( i = N; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" x ");
        }
    }
    printf(" = %d\n", factorial);

    return 0;
}