#include <stdio.h>
typedef struct Student{
    char *name;
    int class;
    char section;
    int roll;
}stud;
int main(){
    stud student1; // typedef replaces the "struct Employee" with "stud"
    stud *ptr;
    ptr = &student1;
    ptr->name = "Himank Jeshwar";
    ptr->class = 9;

    printf("Name - %s",student1.name);
    return 0;
}