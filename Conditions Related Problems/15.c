/* Program for “Guessing Game”: 
Player-1 picks a number X and Player-2 has to guess that number within N = 3 tries. For each 
wrong guess by Player-2, the program prints “Wrong, N-1 Chance(s) Left!” If Player-2 
successfully guesses the number, the program prints “Right, Player-2 wins!” and stops 
allowing further tries (if any left). Otherwise after the completion of N = 3 wrong tries, the 
program prints “Player-1 wins!” and halts. 
 
[ Restriction: Without using loop/break/continue 
 Hint: Use flag ] */


#include<stdio.h>
int main ()
{
  int x, n1, n2, n3, flag=3;

  scanf("%d", &x);
  scanf("%d", &n1);

    if(x == n1){
        printf("Right, Player-2 wins!\n");
    }else{
        flag--;
        printf("Wrong, %d chance(s) left!\n", flag);
        scanf("%d", &n1);

        if(x == n1){
            printf("Right, Player-2 wins!\n");
        }else{
            flag--;
            printf("Wrong, %d chance(s) left!\n", flag);
            scanf("%d", &n1);

    if(x == n1){
        printf("Right, Player-2 wins!\n");

        }else{
            flag--;
            printf("Wrong, %d chance(s) left!\n", flag);
            printf("Player-1 wins!");
            }
        }
    }
  return 0;
}
