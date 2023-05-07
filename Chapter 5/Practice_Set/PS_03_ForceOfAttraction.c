#include <stdio.h>
float calculateForce(float mass);
int main(){
    float force = 0.0f,m;
    printf("Enter mass of the body (in kg): ");
    scanf("%f",&m);
    printf("Force of attraction = %.1f N",calculateForce(m));
    return 0;
}
float calculateForce(float mass){
    float force = mass*9.8;
    return force;
}