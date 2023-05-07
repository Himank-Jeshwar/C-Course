#include <stdio.h>

int main(){
    // declaration
    char letter;

    // input
    printf("Enter a letter = ");
    scanf("%c",&letter);

    // decision
    if (letter>=97&&letter<=122)
        printf("The letter is in lowercase.");
    else 
        printf("The letter is in uppercase.");
    return 0;
}