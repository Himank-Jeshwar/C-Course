#include <stdio.h>

int main(){
    int num,factorial;
    printf("Enter a number = ");
    scanf("%d",&num);
    for (int i = 1;i<=num;i++){
        factorial*=i;
    }
    printf("%d! = %d",num,factorial);
    return 0;
}