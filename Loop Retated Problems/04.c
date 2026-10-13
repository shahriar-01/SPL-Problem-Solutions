/* Write a program (WAP) that will take N numbers as inputs and compute their average.  
(Restriction: Without using any array) */

#include <stdio.h>
int main() {
    int i,N;
    double num, avg, sum = 0;

    printf("Enter the number of inputs: ");
    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%lf", &num);
        sum += num;
    }
    avg = sum / N;
    printf("AVG of %d inputs: %lf", N, avg);

    return 0;
}


