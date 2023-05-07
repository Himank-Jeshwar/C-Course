#include <stdio.h>

int main(){
    int var = 8;
    int var1 = 18;
    int var2 = 272;
    int *ptr = &var;
    int *ptr2 = &var1;
    int *ptr3 = &var2;

    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr-=12;
    // printf("ptr = %u\n",ptr);
    if (ptr2==ptr)
        printf("Both the pointer points at the same variable\n");
    else
        printf("The pointers point at different variables.\n");
    
    int n = ptr-ptr3;
    printf("%d integer(s) values lie between these pointers\n",n);
    printf("ptr3 = %u\n",ptr3);
    printf("ptr2 = %u\n",ptr2);
    ptr3++;
    printf("value at ptr2 = %u",*ptr3);
    return 0;
}