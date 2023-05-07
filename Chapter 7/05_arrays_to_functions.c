#include <stdio.h>

/*void printArray(int *arr,int size){
    for (int i = 0;i<size;i++){
        printf("%d  ",*arr);
        arr++;
    }
}*/
void printArray(int arr [],int size){
    for (int i = 0;i<size;i++){
        printf("%d  ",arr[i]);
    }
}

int main(){
    int marks [] = {9,2,3,2,1};
    printArray(marks,sizeof(marks)/4);
    return 0;
}