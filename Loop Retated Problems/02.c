/* Write a program (WAP) that will print following series upto Nth terms. 
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 ……. */

#include <stdio.h>
int main() {
    int i,N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        printf("%d", 2 * i - 1);
        if (i < N)
            printf(",");
    }
    return 0;
}
