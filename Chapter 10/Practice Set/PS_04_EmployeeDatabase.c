#include <stdio.h>
typedef struct Employee{
    char name[1000];
    float salary;
}Employee;

int main(){
    Employee emp1,emp2;
    FILE *file = fopen("employeesInfo.txt","w");
    printf("Enter your first name = ");
    scanf("%s",emp1.name);
    printf("Enter your salary (in Rs.) = ");
    scanf("%f",&emp1.salary);

    printf("Enter your first name = ");
    scanf("%s",emp2.name);
    printf("Enter your salary (in Rs.) = ");
    scanf("%f",&emp2.salary);

    fprintf(file,"%s , Rs.%.2f\n",emp1.name,emp1.salary);
    fprintf(file,"%s , Rs.%.2f",emp2.name,emp2.salary);
    fclose(file);
    return 0;
}