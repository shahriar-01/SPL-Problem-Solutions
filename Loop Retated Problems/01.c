/* Write a program (WAP) that will print following series upto Nth terms. 
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, ……. */

#include <stdio.h>
int main() {
    int i,N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N)
            printf(",");
    }
    return 0;
}