#include <stdio.h>
float convertInfahrenheit(float celsius);
int main(){
    float tempInCelsius;
    printf("Enter temperature in celsius = ");
    scanf("%f",&tempInCelsius);
    printf("Temperature in Fahrenheit = %.2f",convertInfahrenheit(tempInCelsius));
    return 0;
}
float convertInfahrenheit(float celsius){
    float f = (celsius*9/5)+32;
    return f;
}