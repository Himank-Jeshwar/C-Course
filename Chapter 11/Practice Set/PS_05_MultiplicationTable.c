#include <stdio.h>
#include <stdlib.h>
int main(){
    int *multable = (int *)malloc(10*sizeof(int));
    for (int i = 0;i<10;i++){
        multable[i]=7*(i+1);
    } 
    printf("OUTPUT 1:-\n");
    for (int j = 0;j<10;j++){
        printf("%d x %d = %d\n",7,j+1,multable[j]);
    }

    multable = realloc(multable,15*sizeof(int));
     for (int i = 0;i<15;i++){
        multable[i]=7*(i+1);
    } 
    printf("\nOUTPUT 2:-\n");
    for (int j = 0;j<15;j++){
        printf("%d x %d = %d\n",7,j+1,multable[j]);
    }
    return 0;
}