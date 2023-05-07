#include <stdio.h>
struct Student{
    char *name;
    int class;
    char section;
    int roll;
};

int main(){
    struct Student himank = {"Himank Jeshwar",9,'A',22};
    // struct Student himank = {0}; // initializes every member in the structure to 0
    printf("Name : %s\n",himank.name);
    printf("Class : %d\n",himank.class);
    printf("Section : %c\n",himank.section);
    printf("Roll number : %d\n",himank.roll);
    
    return 0;
}