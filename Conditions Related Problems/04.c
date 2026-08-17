/* Program that will check whether a triangle is valid or not, when the three angles (angle value 
should be such that, 0 < value < 180) of the triangle are entered through the keyboard.  
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.] */

#include<stdio.h>
int main ()
{
  int angle1, angle2, angle3;
  printf("Enter three angles: ");
  scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
       printf("Yes");

    } else {
      printf("No");
    }
  return 0;
}
