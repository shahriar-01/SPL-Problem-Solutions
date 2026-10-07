// Program that will take the final score of a student in a particular subject as input and find his/her grade.  

#include<stdio.h>
int main (){
float score;
    printf("Enter Final Score: ");
    scanf("%f", &score);

    if(score>=90 && score<=100){
        printf("Grade: A");
    }
    else if(score>=86 && score<=89){
        printf("Grade: A-");
    }
    else if(score>=82 && score<=85){
        printf("Grade: B+");
    }
    else if(score>=78 && score<=81){
        printf("Grade: B");
    }
    else if(score>=74 && score<=77){
        printf("Grade: B-");
    }
    else if(score>=70 && score<=73){
        printf("Grade: C+");
    }
    else if(score>=66 && score<=69){
        printf("Grade: C");
    }
    else if(score>=62 && score<=65){
        printf("Grade: C-");
    }
    else if(score>=58 && score<=61){
        printf("Grade: D+");
    }
    else if(score>=55 && score<=57){
        printf("Grade: D");
    }
    else if(score<=54){
        printf("Grade: F");
    }
 return 0;
}