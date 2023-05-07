#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter size = ");
    scanf("%d",&n);
    // using calloc
    int *arr = (int *)calloc(n,sizeof(int));

    // using malloc
    // int *arr = (int *)malloc(n*sizeof(int));
    //taking input 
    
    printf("Enter %d natural numbers below :\n",n);
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

     for (int i = 0;i<n;i++){
        printf("%d ",*arr);
        arr++;
    }
    return 0;
}