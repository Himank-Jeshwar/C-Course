#include <stdio.h>
int factorial(int n/*initialization*/){
    if (n==1||n==0)// base condition, if true -> recursion terminates.
        return 1;

    return n*factorial(n-1/*update*/);
}
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("%d! = %d",num,factorial(num));
    return 0;
}