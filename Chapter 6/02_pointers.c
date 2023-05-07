#include <stdio.h>

int main(){
    int k = 3;
    int *ptr = &k; // stores the address of k to ptr
    // ptr = &k; --> alternative way
    printf("Address of k : %u\n",&k);
    printf("Address of k : %u\n",ptr);
    printf("Address of ptr : %u\n",&ptr);
    printf("Value of k : %d\n",*(&k));
    printf("Value of k : %d\n",*ptr);
    printf("Value of k : %d\n",k);
    printf("Value of ptr : %d\n",*(&ptr));
    return 0;
}