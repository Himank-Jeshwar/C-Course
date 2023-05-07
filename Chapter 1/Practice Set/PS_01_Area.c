#include <stdio.h>
int main(){
    // Hardcoded input
    float l = 4.0 ,b = 3.0;
    float ar = l*b;
    printf("Area of Rectangle 1 = %f sq.cm\n",ar);

    // User input
    float length,breadth,area = 0.0;
    printf("Enter length (in cm) = ");
    scanf("%f",&length);
    printf("Enter breadth (in cm) = ");
    scanf("%f",&breadth);
    area = length*breadth;
    printf("Area of Rectangle 2 = %f sq.cm",area);
    return 0;
}