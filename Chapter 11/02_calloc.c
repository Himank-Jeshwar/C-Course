#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(6,sizeof(int));
    //taking input 
    // printf("Enter 6 numbers :-\n");
    // for (int i = 0;i<6;i++){
    //     scanf("%d",&ptr[i]);
    // }

    // calloc initializes every element as 0.
    for (int i = 0;i<6;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}