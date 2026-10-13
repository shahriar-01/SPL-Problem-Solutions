/* Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print 
the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If 
and when X is equal to Y, the program prints “Reached!” */


#include <stdio.h>
 int main() {
    int X, Y;
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &X, &Y);

    while (X != Y) {
        printf("%d,", X * X);
        if (X < Y) {
            X++;
        } else {
            X--;
        }
    }
    printf("Reached!\n");

    return 0;
}