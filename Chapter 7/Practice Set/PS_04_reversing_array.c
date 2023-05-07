#include <stdio.h>
void reverse(int arr[],int length){
    for (int i = 0;i<length/2;i++){
        int temp = arr[i];
        arr[i]=arr[length-i-1];
        arr[length-i-1]=temp;
    }
}
int main(){
    int num [] ={5,3,12,7,8,9};
    reverse(num,sizeof num/4);
    for (int i = 0;i<sizeof num/4;i++){
        printf("%d  ",num[i]);
    }
    return 0;
}