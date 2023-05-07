#include <stdio.h>

int main(){
    int a;
    printf("Enter a - ");
    scanf("%d",&a);
    int answer = (a<5)?a*a:a*a*a;
    printf((a<5)?"A is less than 5":"A is greater than 5");
    // printf("%d",answer);
    return 0;
}