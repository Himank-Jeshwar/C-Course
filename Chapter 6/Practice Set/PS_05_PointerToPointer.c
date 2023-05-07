#include <stdio.h>

int main(){
    int i = 6;
    int *j = &i;
    int **k = &j;
    printf("Value of i = %d",**k);
    return 0;
}