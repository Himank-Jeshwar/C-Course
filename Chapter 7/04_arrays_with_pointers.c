#include <stdio.h>

int main(){
    // marks => &marks[0]
    int marks[4] ;
    int *ptr;
    ptr = marks;
    for (int i = 0;i<4;i++){
        printf("Enter marks :");
        scanf("%d",ptr);
        ptr++;
    }
    ptr = marks;
    for (int j = 0;j<4;j++){
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}