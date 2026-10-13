/* Write a program (WAP) that will print following series upto Nth terms. 
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, ……. */



#include <stdio.h>
int main() {
    int i,N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        printf("%d", i % 2);
        if (i < N)
            printf(",");

    }
    return 0;
}