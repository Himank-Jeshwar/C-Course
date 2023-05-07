#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = (int *)malloc(6*sizeof(int));
    arr[0]=99;
    arr[1]=12;
    arr[2]=33;
    arr[3]=44;
    arr[4]=22;
    arr[5]=12;
    printf("Elements are :-\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}