/* Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ 
at the keyboard.  */


#include <stdio.h>
int main() {
    char input;
    int count = 0;

    do {
        count++;
        printf("Enter input: ");
        scanf(" %c", &input);

        if (input != 'A') {
            printf("Input %d: %c\n", count, input);
        }
    } while (input != 'A');

    return 0;
}