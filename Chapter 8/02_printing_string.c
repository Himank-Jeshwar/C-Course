#include <stdio.h>
void print(char *arr){
    while (*arr!='\0'){
        printf("%c",*arr);
        arr++;
    }
}
int main(){
    // char str[] = "Himank";
    char *str  = "Himank";
    printf("%s",str);
    // return 0;
}