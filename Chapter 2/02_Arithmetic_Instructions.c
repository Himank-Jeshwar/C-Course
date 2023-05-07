#include <stdio.h>
#include <math.h>
int main(){
    int a = 14, b = 8;
    printf("The value of a+b = %d\n",a*b);
    printf("The value of a-b = %d\n",a-b);
    printf("The value of a*b = %d\n",a*b);
    printf("The value of a/b = %d\n",a/b);
    printf("The remainder of a/b = %d\n",a%b); 
    printf("The remainder of a/b = %d\n",-a%b);// sign of a%b depends on sign of a
    printf("The value of 2 to the power 3 = %f\n",pow(2,3));
    printf("The value of 5/2 = %f",5.0/2);
    return 0;
}