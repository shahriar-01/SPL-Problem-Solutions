/* Program that will categorize a single character that is entered at the terminal, whether it is 
an alphabet, a digit or a special character. 
 
(Restriction: Without math.h) */

#include <stdio.h>
int main (){
 char c;
 printf ("Enter a single character: ");
 scanf ("%c", &c);

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	printf ("Alphabetic\n");
  }else if ( c >= '0' && c <= '9' ) {
	printf ("Digit\n");
  }else{
	printf ("Special\n");
 }
 return 0;
}