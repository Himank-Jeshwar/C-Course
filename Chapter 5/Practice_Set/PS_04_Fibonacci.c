#include <stdio.h>
int fib(int n);
int main(){
    int el;
    printf("Enter element number : ");
    scanf("%d",&el);
    printf("fib(%d) = %d",el,fib(el));
    return 0;
}
int fib(int n){
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}