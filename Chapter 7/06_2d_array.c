#include <stdio.h>

int main(){
    int students = 3;
    int subjects = 5;
    int marks[3][5];
    // printf("%d",sizeof (marks));
    for(int i = 0;i<students;i++){
        printf("Enter marks for student %d of 5 subjects :- \n",i+1);
        for (int j = 0;j<subjects;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i = 0;i<students;i++){
        printf("Student %d - ",i+1);
        for (int j = 0;j<subjects;j++){
            printf("%d  ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}