#include <stdio.h>

int main(){
    int i = 1;int sum1,sum2;
    sum1=sum2=0;
    // do while loop
    do{
        sum1+=i;
        i++;
    }while(i<=10);
    printf("Sum of first 10 natural numbers using do while loop is = %d\n",sum1);
    
    // for loop
    for (int j = 1;j<=10;j++){
        sum2+=j;
    }
    printf("Sum of first 10 natural numbers using for loop is = %d",sum2);
    return 0;
}