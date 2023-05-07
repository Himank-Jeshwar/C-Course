#include <stdio.h>
struct Employee{
    char name[1000];
    int id;
    float salary;
};
int main(){
    struct Employee e1,e2,e3;
    printf("Enter the name of employee 1 : ");
    scanf("%s",e1.name);
    printf("Enter the id of employee 1 : ");
    scanf("%d",&e1.id);
    printf("Enter the salary of employee 1 : ");
    scanf("%f",&e1.salary);

    printf("Enter the name of employee 2 : ");
    scanf("%s",e2.name);
    printf("Enter the id of employee 2 : ");
    scanf("%d",&e2.id);
    printf("Enter the salary of employee 2 : ");
    scanf("%f",&e2.salary);

    printf("Enter the name of employee 3 : ");
    scanf("%s",e3.name);
    printf("Enter the id of employee 3 : ");
    scanf("%d",&e3.id);
    printf("Enter the salary of employee 3 : ");
    scanf("%f",&e3.salary);

    printf("Name of employee 1 : %s\n",e1.name);
    printf("ID of employee 1 : %d\n",e1.id);
    printf("Salary of employee 1 : Rs.%.2f\n\n",e1.salary);

    printf("Name of employee 2 : %s\n",e2.name);
    printf("ID of employee 2 : %d\n",e2.id);
    printf("Salary of employee 2 : Rs.%.2f\n\n",e2.salary);

    printf("Name of employee 3 : %s\n",e3.name);
    printf("ID of employee 3 : %d\n",e3.id);
    printf("Salary of employee 3 : Rs.%.2f\n\n",e3.salary);
    return 0;
}