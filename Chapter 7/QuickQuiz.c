#include <stdio.h>

int main(){
    int students = 5;
    float marks[students]; // allocates space for 4 integers 
    for (int i = 0;i<students;i++){
        printf("Enter marks for Student %d = ",i+1);
        scanf("%f",&marks[i]);
    }
    printf("\n");
    for (int i = 0;i<students;i++){
        printf("Marks of Student %d - %f\n",i+1,marks[i]);
    }
    return 0;
}