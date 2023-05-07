#include <stdio.h>

int main(){
    int x = 9;
    printf("Address of x : %u\n",&x);
    printf("Value of x : %d\n",*(&x));
    return 0;
}