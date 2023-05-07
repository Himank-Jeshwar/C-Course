#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));

    printf("Enter 6 numbers :-\n");
    for (int i = 0;i<6;i++){
        scanf("%d",&ptr[i]);
    }

    printf ("OUTPUT : ");
    for (int j = 1;j<=6;j++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}