#include <stdio.h>
void printPattern(int n);
int main(){
    printPattern(3);    
    return 0;
}
void printPattern(int n){
    if (n==1)
        printf("*\n");
    else{
        printPattern(n-1);
        for (int j = 1;j<=2*n-1;j++){
            printf("*");
        }
        printf("\n");
    }
}