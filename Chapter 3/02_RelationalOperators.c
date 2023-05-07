#include <stdio.h>

int main(){
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);

    if (age>70){
        printf("You cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }
    return 0;