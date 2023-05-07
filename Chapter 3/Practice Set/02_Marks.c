#include <stdio.h>

int main(){
    // declaration 
    float marks1,marks2,marks3;
    float totalPercent = 0.0;

    // input
    printf("Enter marks for Subject 1 = ");
    scanf("%f",&marks1);
    printf("Enter marks for Subject 2 = ");
    scanf("%f",&marks2);
    printf("Enter marks for Subject 3 = ");
    scanf("%f",&marks3);

    // calculation
    totalPercent = (marks1+marks2+marks3)*100/300;

    // decision
    if (marks1>=33&&marks2>=33&&marks3>=33&&totalPercent>=40)
        printf("Congratulations ! You have passed.");
    else 
        printf("Alas ! You failed.");
    return 0;
}