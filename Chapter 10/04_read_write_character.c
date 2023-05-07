#include <stdio.h>

int main(){
    FILE *file = fopen("demo.txt","r");
    char c = fgetc(file);
    for (int i = 0;i<10;i++){
        printf("%c",fgetc(file));
    }
    return 0;
}