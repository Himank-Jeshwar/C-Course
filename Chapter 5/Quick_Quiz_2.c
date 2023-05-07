#include <stdio.h>
#include <math.h>
float squareArea(float side);
int main(){
    float s,area = 0.0f;
    printf("Enter side : ");
    scanf("%f",&s);
    area = squareArea(s);
    printf("Area of square = %.2f sq.cm",area);
    return 0;
}
float squareArea(float side){
    return pow(side,2); 
}