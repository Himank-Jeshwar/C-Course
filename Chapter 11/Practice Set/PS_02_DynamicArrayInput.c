#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = (int *)malloc(6*sizeof(int));
    printf("Enter 6 numbers below :-\n");
    for (int i = 0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    //output
    printf("\nOUTPUT :");
    for (int j = 0;j<6;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}