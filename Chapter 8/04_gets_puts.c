#include <stdio.h>

int main(){
    char name[100];
    printf("Enter your name :");
    gets(name); // receives only multi - word string
    // printf("%s",name);
    puts(name); // the cursor goes to next line.
    printf("Cursor is here.");
    return 0;
}