#include <stdio.h>
void printPattern(int lines);
int main(){
    printPattern(3);
    return 0;
}
void printPattern(int lines){
    for (int i = 1;i<=lines;i++){
        for (int j = 1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}