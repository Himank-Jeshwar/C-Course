#include <stdio.h>
int countPositive(int arr[],int length){
    int i = 0,positive = 0;
    while(i<length){
        if (arr[i]>0)
            positive++;
        i++;
    }
    return positive;
}
int main(){
    int num[] = {-9,-12,55,3,0,12,3,-8,44,5};
    printf("Number of positive integers in the array = %d",countPositive(num,sizeof num/4));
    return 0;
}