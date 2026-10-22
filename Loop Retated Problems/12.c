/* Write a program (WAP) that will print Fibonacci series upto Nth terms. 
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….  */

#include <stdio.h>
int main() {
    int N, first = 1, second = 1, next;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d", first);

        if (i < N) {
            printf(",");
        }
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}