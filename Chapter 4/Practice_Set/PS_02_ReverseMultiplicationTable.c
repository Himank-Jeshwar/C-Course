#include <stdio.h>

int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    int i = 10;
    while(i){
        printf("%d x %d = %d\n",n,i,n*i);
        i--;
    }
    return 0;
}