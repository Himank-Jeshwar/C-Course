#include <stdio.h>

void readInt(int *num){
    FILE *file = fopen("test.txt","r");
    fscanf(file,"%d",num);
    fclose(file);
}

void modifyInt(int n){
    FILE *file = fopen("test.txt","w");
    fprintf(file,"%d",(2*n));
    fclose(file);
}
int main(){
    int n;
    readInt(&n);
    modifyInt(n);
    return 0;
}