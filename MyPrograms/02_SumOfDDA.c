#include <stdio.h>
int main(){
    int arr [3][4];
    int sum = 0;
    for (int i = 0;i<3;i++){
        printf("Array %d :-\n",i+1);
        for (int j = 0;j<4;j++){
            printf("Element %d - ",j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe numbers of the matrix are : -\n");
    for (int i = 0;i<3;i++){
        for (int j = 0;j<4;j++){
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("\n");
    }

    printf("\nSum = %d",sum);
}