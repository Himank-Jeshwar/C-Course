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
    for (int j = 0;j<6;j++){
        printf("%d ",ptr[j]);
    }

    // reallocating ptr using realloc()
    ptr = realloc(ptr,10*sizeof(int));
    printf("\nEnter 10 numbers :-\n");
    for (int i = 0;i<10;i++){
        scanf("%d",&ptr[i]);
    }

    printf ("OUTPUT : \n");
    for (int j = 0;j<10;j++){
        printf("%d ",ptr[j]);
    }
    return 0;
}