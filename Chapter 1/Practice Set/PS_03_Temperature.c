#include <stdio.h>
int main()
{
    // declaration
    float celsius,fahrenheit = 0.0;
    
    // input
    printf("Enter temperature in celsius = ");
    scanf("%f",&celsius);
    
    // calculation
    fahrenheit = (celsius*9/5.0)+32;

    // output
    printf("Temperature in fahrenheit = %.2f",fahrenheit);
    return 0;
}
