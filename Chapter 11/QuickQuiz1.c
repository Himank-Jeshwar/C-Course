#include <stdio.h>
#include <stdlib.h>
int main(){
    float *arr;
    arr = (float *)malloc(5*sizeof(float));
    // accepting elements
    printf("Enter 5 real numbers :-\n");
    for (int i = 0;i<5;i++){
        scanf("%f",&arr[i]);
    }
   

    // printing the elements
    printf("OUTPUT :\n");
    for (int j = 0;j<5;j++){
        printf("%f\n",arr[j]);
    }
    return 0;
}