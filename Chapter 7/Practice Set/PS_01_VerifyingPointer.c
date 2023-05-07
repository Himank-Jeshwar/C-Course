#include <stdio.h>
int main(){
    int num [10] = {45,12,33,80,13,4,1,8,9,10};
    int *ptr = num;
    printf("Element is : %d",*(ptr+2));
    return 0;
}