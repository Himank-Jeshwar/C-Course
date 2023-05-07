#include <stdio.h>
void display(int x,int y,int arr [x][y]){
    for (int i = 0;i<x;i++){
        for (int j = 0;j<y;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr [3][2] = {{1,4},{7,9},{11,22}};
    display(3,2,arr);
    return 0;
}