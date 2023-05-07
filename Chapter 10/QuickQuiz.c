#include <stdio.h>

int main(){
    int n1,n2;
    FILE *file;
    char *filename = "this.txt";
    file = fopen(filename,"r");
    if(file!=NULL){
        fscanf(file,"%d",&n1);
        fscanf(file,"%d",&n2);
        fclose(file);

        printf("The value of n1 is %d\n",n1);
        printf("The value of n2 is %d",n2);
    }
    else
        printf("FileNotFoundError : The file \"%s\" does not exist in the directory.",filename);
    return 0;
}