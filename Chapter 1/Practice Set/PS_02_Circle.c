#include <stdio.h>
int main(){
    // declaration
    float radius,height,vol = 0.0,area = 0.0;
    
    // taking inputs
    printf("Enter radius (in cm) = ");
    scanf("%f",&radius);

    printf("Enter height (in cm) = ");
    scanf("%f",&height);

    // calculating area and volume
    area = 3.1416*radius*radius;
    printf("Area of circle = %f sq cm.\n",area);
    vol = 3.1416*radius*radius*height;
    printf("Volume of cylinder = %f cubic cm.\n",vol);

    return 0;
}