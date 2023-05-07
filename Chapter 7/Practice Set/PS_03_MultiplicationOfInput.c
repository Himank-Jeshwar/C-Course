#include <stdio.h>

int main(){
    int num;
    int mulTable [10];
    int *ptr = mulTable;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("[");
    for (int i = 0;i<sizeof mulTable/4;i++,ptr++){
        *ptr = (i+1)*num;
        printf("%d",*ptr);
        if (i<(sizeof mulTable/4)-1)
            printf(", ");
    }
    printf("]");
    return 0;
}