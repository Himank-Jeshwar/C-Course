#include <stdio.h>
struct Employee{
    int id;
    float salary;
    char *name;
};
void display(struct Employee emp){
    printf("Salary of employee : Rs.%.2f\n",emp.salary);
    printf("Name of employee : %s\n",emp.name);
    printf("id of employee : %d\n\n",emp.id);
}
int main(){
    struct Employee emp[100];
    emp[0].id = 100;
    emp[0].salary = 34000;
    emp[0].name = "Himank Jeshwar";

    emp[1].id = 101;
    emp[1].salary = 45000;
    emp[1].name = "Rohan Jaiswal";

    emp[2].id = 102;
    emp[2].salary = 55000;
    emp[2].name = "Aditya Pandey";

    emp[0].id = 100;
    emp[0].salary = 34000;
    emp[0].name = "Himank";
    display(emp[0]);
    display(emp[1]);
    display(emp[2]);
    return 0;
}