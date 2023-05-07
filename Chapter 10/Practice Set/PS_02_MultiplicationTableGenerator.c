#include <stdio.h>
void input(int *num){
    printf("Enter a number : ");
    scanf("%d",num);
}

void writeInFile(int n){
    FILE *file;
    file = fopen("Multiplication table.txt","w");
    for (int i = 1;i<=10;i++){
        fprintf(file,"%d x %d = %d",n,i,(n*i));
        if (i<10)
            fprintf(file,"\n");
    }
    fclose(file);
}
int main(){
    int n;
    input(&n);
    writeInFile(n);        
    return 0;
}