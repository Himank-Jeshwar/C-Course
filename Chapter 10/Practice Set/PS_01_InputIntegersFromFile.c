#include <stdio.h>
void readInt (FILE *file,int *n1,int *n2,int *n3){
    fscanf(file,"%d",n1);
    fscanf(file,"%d",n2);
    fscanf(file,"%d",n3);
    fclose(file);
}

int main(){
    int num1,num2,num3;
    FILE *file = fopen("input.txt","r");
    readInt(file,&num1,&num2,&num3);
    printf("Numbers are :- \n%d\n%d\n%d",num1,num2,num3);
    return 0;
}