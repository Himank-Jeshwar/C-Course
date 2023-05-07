#include <stdio.h>
#include <string.h>
int isPresent(char str[],char letter){
    for (int i = 0;i<strlen(str);i++){
        if (letter==str[i])
            return 1;
    }
    return 0;
}
int main(){
    char st [] = "Hello";
    char letter = 'H';
    if (isPresent(st,letter))
        printf("The letter '%c' is present in the string.",letter);
    else
        printf("The letter '%c' is not present in the string.",letter);
    return 0;
}