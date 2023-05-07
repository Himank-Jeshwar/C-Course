#include <stdio.h>

int main(){
    char fruit [] = {'M','a','n','g','o','\0'};
    char *ptr = fruit;
    while (*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}