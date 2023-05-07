#include <stdio.h>
float average(float num1,float num2,float num3);
int main(){
    float n1,n2,n3,avg = 0.0;
    printf("Enter 3 numbers :-\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3); 
    avg = average(n1,n2,n3);
    printf("Average = %.2f",avg);
    return 0;
}
float average(float num1,float num2,float num3){
    float avg = (num1+num2+num3)/3;
    return avg;
}