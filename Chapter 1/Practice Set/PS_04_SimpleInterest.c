#include <stdio.h>
int main(){
    // declaration
    float p,r,t,si = 0.0;

    // inputs
    printf("Enter the sum of money (in Rs.) = ");
    scanf("%f",&p);
    printf("Enter the rate = ");
    scanf("%f",&r);
    printf("Enter the time (in years) = ");
    scanf("%f",&t);

    // calculation
    si = p*r*t/100;

    // output
    printf("Simple interest = Rs. %.2f",si);
    return 0;
}