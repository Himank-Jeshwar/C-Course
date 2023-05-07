#include <stdio.h>

int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    int i = 1,factorial = 1;
    while (i<=num){
        factorial*=i;
        i++;
    }
    printf("%d! = %d",num,factorial);
    return 0;
}