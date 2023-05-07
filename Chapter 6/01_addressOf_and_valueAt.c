#include <stdio.h>

int main(){
    int a = 12;
    int b = 23;
    printf("Address of a = %u\nAddress of b = %u\n",&a,&b);
    printf("Value of a = %d",*(&a));
    return 0;
}