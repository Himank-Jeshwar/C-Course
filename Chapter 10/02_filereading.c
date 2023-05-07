#include <stdio.h>

int main(){
    int n1,n2;
    FILE *file;
    file = fopen("this.txt","r");
    fscanf(file,"%d",&n1);
    fscanf(file,"%d",&n2);
    fclose(file);

    printf("The value of n1 is %d\n",n1);
    printf("The value of n2 is %d",n2);
    
    return 0;
}