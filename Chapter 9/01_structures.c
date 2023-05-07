#include <stdio.h>
struct Employee{
    int id;
    float salary;
    char *name;
};
void display(struct Employee emp){
    printf("Salary of e1 : Rs.%.2f\n",emp.salary);
    printf("Name of e1 : %s\n",emp.name);
    printf("id of e1 : %d",emp.id);
}
int main(){
    struct Employee e1;
    e1.salary = 34000;
    e1.name = "Himank"; 
    e1.id = 120;
    display(e1);
    return 0;
}