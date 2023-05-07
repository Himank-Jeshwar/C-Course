#include <stdio.h>

int main(){
    char name[100];
    printf("Enter your name :");
    scanf("%s",name); // receives only one word string
    printf("%s",name);
    return 0;
}