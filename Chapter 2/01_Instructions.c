#include <stdio.h>

int main(){
    int a = 4,b,c; // Type declaration instruction
    b = c = 9; // Allowed
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

    float a1 = 1.1;
    float b1 = a1+8.9;
    printf("Value of b1 = %f",b1);
    return 0;
}