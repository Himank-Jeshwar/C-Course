#include <stdio.h>

int main(){
    FILE *file;
    int num = 145;
    file = fopen("info.txt","w");
    fprintf(file,"The number is %d",num);
    fclose(file);
    return 0;
}