#include <stdio.h>

int main(){
    int tableof5 [10];
    int *ptr = tableof5;
    printf("[");
    for (int i = 0;i<sizeof tableof5/4;i++,ptr++){
        *ptr = (i+1)*5;
        printf("%d",*ptr);
        if (i<(sizeof tableof5/4)-1)
            printf(", ");
    }
    printf("]");
    return 0;
}