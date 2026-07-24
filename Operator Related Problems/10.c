/* Program that will take a, b & c as inputs and decide if the statements are True (1) of False(0) 
a) (𝑎+𝑏)≤80  
b) !(𝑎+𝑏) 
c) 𝑐!=0 
*/

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("a) %d\n", (a + b) <= 80);
    printf("b) %d\n", !(a + b));
    printf("c) %d", c != 0);

    return 0;
}