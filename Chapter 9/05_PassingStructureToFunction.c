#include <stdio.h>
struct Employee{
    int id;
    float salary;
    char *name;
};

void show(struct Employee emp);
int main(){
    struct Employee e1 = {128,80000,"Himank Jeshwar"};
    struct Employee e2 = {129,81000,"Ravi Gupta"};
    struct Employee e3 = {130,82000,"Peter Fernandeiz"};
    struct Employee e4 = {131,83000,"Rohan Jaiswal"};
    show(e1); // copy of e1 goes to the function
    show(e2); // copy of e2 goes to the function
    show(e3); // copy of e3 goes to the function
    show(e4); // copy of e4 goes to the function
    return 0;
}

void show(struct Employee emp){
    printf("Name of the employee : %s\n",emp.name);
    printf("ID of the employee : %d\n",emp.id);
    printf("Salary of the employee : %f\n\n",emp.salary);
}