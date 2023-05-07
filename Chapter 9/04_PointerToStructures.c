#include <stdio.h>
struct Student{
    char *name;
    int class;
    char section;
    int roll;
};
int main(){
    struct Student stud1;
    struct Student *ptr;
    ptr = &stud1;
    // (*ptr).name = "Himank Jeshwar";
    ptr->name = "Himank Jeshwar"; // alternative way
    printf("Name : %s",stud1.name);
    return 0;
}