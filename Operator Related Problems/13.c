/* Program that will evaluate the equation  
 
2𝑐𝑜𝑠2𝑥− √3sin𝑥 + 𝑙𝑜𝑔 𝑥/2 
; where 1 <= x <= 180 [No checking needed] */



#include <stdio.h>
int main(){
  int x;
  printf("Enter an angle: ");
  scanf("%d",&x);

  double x1 = x * 3.1416 / 180;
  double equation = 2 * (cos(x1)) * (cos(x1)) - (sqrt(3)*(sin(x1))) + (log (x1 / 2));
  printf("%lf",equation );

  return 0;
}


