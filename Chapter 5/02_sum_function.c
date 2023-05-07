#include <stdio.h>
int sum(int a,int b);

int main(){
    printf("%d",sum(5,17));
    return 0;
}
int sum(int a,int b){
    return a+b;
}