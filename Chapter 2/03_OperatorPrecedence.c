#include <stdio.h>
int main(){
    int x = 2 , y = 3;
    int exp = 3*x-8*y;
    printf("3x-8y = %d\n",exp);
    printf ("8y/3x = %d",8*y/3*x);
    /*
    Evaluated as:
    8*3 /3*2
    24/3 *2
    8 * 2 = 16
    */
    return 0;
}