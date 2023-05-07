#include <stdio.h>
int length(char *str){
    int len = 0;
    for (;*str!='\0';str++,len++);
    return len;
}
int main(){
    char *st = "Harry";
    printf("Length of the string is : %d",length(st));
    return 0;
}