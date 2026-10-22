/* Write a program (WAP) that will find nCr where n >= r; n and r are integers. */

#include <stdio.h>
int main() {
    int i, n, r, nCr=1;
    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    for ( i = 1; i <= r; i++) {
        nCr *= (n - i + 1);
        nCr /= i;
    }
    printf("%d\n",nCr);

    return 0;
}

