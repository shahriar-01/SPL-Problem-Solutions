/* Write a program (WAP) for the described scenario:  
Player-1 picks a number X and Player-2 has to guess that number within N tries. For each 
wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at 
any time successfully guesses the number, the program prints “Right, Player-2 wins!” and 
terminates right away. Otherwise after the completion of N wrong tries, the program 
prints “Player-1 wins!” and halts. 
 
(Hint: Use break/continue) */

#include <stdio.h>
int main() {
    int i, X, N, guess;
    printf("Player-1 picks a number X: ");
    scanf("%d", &X);
    printf("Player-2 enter the number of tries N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; ++i) {
        printf("Enter guess #%d by Player-2: ", i);
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            int choicesLeft = N - i;
            printf("Wrong, %d Choice(s) Left!\n", choicesLeft);

            if (choicesLeft == 0) {
                printf("Player-1 wins!\n");
                break;
            }
        }
    }

    return 0;
}