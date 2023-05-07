#include <stdio.h>

int main(){
    int n,isPrime = 0;
    printf("Enter a number = ");
    scanf("%d",&n);
    if (n==2)
        isPrime = 1;
    else{
        for (int i = 2;i<n;i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
            else
                isPrime = 1;
        }
    }
    printf((isPrime)?"%d is a Prime number.":"%d is not a Prime number.",n);
    return 0;
}