#include <stdio.h>

int main(){
    // int i = 3;
    // int *ptr = &i;
    // char ch = 'A';
    // char *ptr = &ch;
    float num = 1.333f;
    float *ptr = &num;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u",ptr);
    return 0;
}