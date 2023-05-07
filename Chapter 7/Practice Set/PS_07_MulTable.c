#include <stdio.h>

void takeDimensions(int *m,int *n){
    printf("For how many numbers you want to print the multiplication table :");
    scanf("%d",n);  
    printf("Till where you want to print the multiplication table :");
    scanf("%d",m);   
}
void takeNumber(int numbers[],int n){
    printf("Enter %d numbers below :-\n",n);
   for (int i = 0;i<n;i++){
        scanf("%d",&numbers[i]);
   }
}
int main(){
    int m,n;
    takeDimensions(&m,&n);
     int mulTable[m][n];
    int numbers[n];
    takeNumber(numbers,n);
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            mulTable[i][j]=numbers[j]*(i+1);
            printf("%d x %d = %d\t",numbers[j],i+1,mulTable[i][j]);
        }
        printf("\n");
    }
    return 0;
}