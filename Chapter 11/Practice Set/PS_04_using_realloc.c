#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = (int *)malloc(5*sizeof(int));
    printf("Enter 5 numbers below :-\n");
    for (int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    //output
    printf("\nOUTPUT :");
    for (int j = 0;j<5;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    arr = realloc(arr,10*sizeof(int));
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    //output
    printf("\nOUTPUT :");
    for (int j = 0;j<10;j++){
        printf("%d ",arr[j]);
    }
    free(arr);
    return 0;
}