#include <stdio.h>
struct Student{
    char *name,section;
    int class , roll;
};

void show(struct Student stud){
    printf("Name : %s\n",stud.name);
    printf("Class : %d\n",stud.class);
    printf("Section : %c\n",stud.section);
    printf("Roll number : %d\n",stud.roll);
}
int main(){
    struct Student stud;
    struct Student *ptr = &stud;
    ptr->name = "Himank Jeshwar";
    ptr->section = 'A';
    ptr->class = 9;
    ptr->roll = 22;
    show(stud);
    return 0;
}