#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("demo.txt","r");
    char ch;
    do{
        ch = fgetc(file);
        printf("%c",ch);
    }while(ch!=EOF);
    return 0;
}