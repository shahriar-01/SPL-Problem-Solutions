/* Write a program (WAP) that will calculate the result for the first Nth terms of the 
following series.  [In that series sum, dot sign (.) means multiplication] 
12.2 + 22.3 + 32.4 + 42.5 + ……. */


#include <stdio.h>
int main() {
    int i, N, result = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i++) {
        result += i * i * (i + 1);
    }
    printf("Result: %d\n", result);

    return 0;
}