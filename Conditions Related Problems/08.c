/* Program that will decide whether a year is leap year or not. 
 
Yes, if ( Year % 4 == 0 && year % 100 != 0 )   ||  ( Year % 400 ==0 )  */


#include<stdio.h>
int main (){
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  if (year%400 == 0) {
    printf("%d is a leap year", year);
  }else if (year%100 == 0) {
    printf("%d is not a leap year", year);
  }else if (year%4 == 0) {
    printf("%d is a leap year", year);
  }else{
    printf("%d is not a leap year", year);
  }
 return 0;
}