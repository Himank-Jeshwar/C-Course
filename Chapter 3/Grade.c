#include <stdio.h>

int main(){
    // declaration
    float marks;
    char grade;

    // input
    printf("Enter marks = ");
    scanf("%f",&marks);

    // decision
    if (marks<60)
        grade = 'F';
    else if (marks<70)
        grade = 'D';
    else if (marks<80)
        grade = 'C';
    else if (marks<90)
        grade = 'B';
    else 
        grade = 'A';
    // output
    printf("Grade - %c",grade);
    return 0;
}