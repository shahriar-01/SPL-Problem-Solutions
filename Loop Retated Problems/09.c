/* Write a program (WAP) that will find the grade of N students. For each student, it will 
take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class 
test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the 
tables shown below, the program will output his grade.*/

#include <stdio.h>
int main() {
    int num_students, i;
    float A, HW, CT, MT, TF,score,total_marks;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (i = 1; i <= num_students; i++) {
        printf("\nEnter the marks for student %d:\n", i);

        printf("Attendance (out of 5): ");
        scanf("%f", &A);

        printf("Assignments (out of 10): ");
        scanf("%f", &HW);

        printf("Class Tests (out of 15): ");
        scanf("%f", &CT);

        printf("Midterm (out of 50): ");
        scanf("%f", &MT);

        printf("Final Exam (out of 100): ");
        scanf("%f", &TF);

        total_marks = A + HW + CT + MT + TF;
        score = (total_marks / 180) * 100;

    if(score>=90 && score<=100){
        grade = 'A';
    }
    else if(score>=86 && score<=89){
        grade = 'A-';
    }
    else if(score>=82 && score<=85){
        grade = 'B+';
    }
    else if(score>=78 && score<=81){
        grade = 'B';
    }
    else if(score>=74 && score<=77){
        grade = 'B-';
    }
    else if(score>=70 && score<=73){
        grade = 'C+';
    }
    else if(score>=66 && score<=69){
        grade = 'C';
    }
    else if(score>=62 && score<=65){
        grade = 'C-';
    }
    else if(score>=58 && score<=61){
        grade = 'D+';
    }
    else if(score>=55 && score<=57){
       grade = 'D';
    }
    else if(score<=54){
        grade = 'F';
    }
        printf("Student %d: %c\n", i, grade);
    }
    return 0;
}
