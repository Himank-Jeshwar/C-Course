#include <stdio.h>

int main(){
    // declaration
    float inc ,tax;

    // input
    printf("Enter income amount (in Rs.) = ");
    scanf("%f",&inc);

    // decision
    if (inc>=250000&&inc<=500000)
        tax = 5*(inc-250000)/100;
    else if (inc>500000&&inc<=1000000)
        tax = 20*(inc-500000)/100;
    else if (inc>1000000)
        tax = 30*(inc-1000000)/100;
    else 
        tax = 0.0;

    // output
    printf("Tax paid = Rs. %.2f",tax);
    return 0;
}