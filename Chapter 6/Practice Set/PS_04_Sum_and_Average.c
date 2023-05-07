#include <stdio.h>
void calculate(int *sum,float *avg,int x,int y);
int main(){
    int i = 3, j = 12 , sum = 0;
    float avg = 0;
    calculate(&sum,&avg,i,j);
    printf("Sum = %d\n",sum);
    printf("Average is = %.1f",avg);
    return 0;
}
void calculate(int *sum,float *avg,int x,int y){
    *sum = x+y;
    *avg = *sum/2.0f;
}