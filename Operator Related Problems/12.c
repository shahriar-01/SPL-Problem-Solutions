/* Program that will take calculate the roots of a quadratic equation (a.x2 + b.x + c = 0) from 
the formula, (here, dot (.) stands for multiplication) - 

     root = (-b ± sqrt(b^2 - 4ac)) / 2a     */


#include <stdio.h>
int main(){
    double a,b,c,root1,root2,dis;
    printf("Enter a, b & c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    dis = b * b - 4 * a * c;
    if (dis >= 0) {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("%.2lf  %.2lf", root1, root2);
    }else{
        printf("Imaginary");
    }

    return 0;
}
