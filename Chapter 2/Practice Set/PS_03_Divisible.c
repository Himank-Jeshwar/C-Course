#include <stdio.h>

int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if (n%97==0)
        printf("It is divisible by 97");
    else
        printf("It is not divisible by 97");
    return 0;
}