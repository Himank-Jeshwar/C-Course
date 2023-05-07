#include <stdio.h>

int main(){
    int i = 2;
    int *ptr1 = &i;
    int **ptr2 = &(ptr1); // pointer to a pointer
    int ***ptr3;
    ptr3 = &ptr2; // address of ptr2 
    printf("Address of ptr1 : %u\n",ptr2);
    printf("Address of ptr2 : %u",ptr3); 
    return 0;
}