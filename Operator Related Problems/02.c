/* Program that will calculate the area of a circle having radius r.  
Area, A = 2 * Pi * r */


#include <stdio.h>
int main(){
    double r;
    printf(" Enter the radius of a circle: ");
    scanf("%lf",&r);
    printf("Area: %.2lf",2 * 3.14 *r);
    return 0;
}