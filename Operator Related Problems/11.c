/* Program that will take a, b & c as inputs and decide if the statements are True (1) of False(0)
   
1) (𝑎+𝑏)≤80 && 𝑐≥0 
2) (𝑎−𝑏)==0 |  |  𝑐!=0 
3) 𝑎!=𝑏 | | !(𝑏<𝑐) && 𝑐>0 
4) (𝑎!=𝑏 | | !(𝑏<𝑐) ) && 𝑐>0   */


#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("1) %d\n", (a + b) <= 80 && c >= 0);
    printf("2) %d\n", (a - b) == 0 || c != 0);
    printf("3) %d\n", a != b || !(b < c) && c > 0);
    printf("4) %d", (a != b || !(b < c)) && c > 0);

    return 0;
}