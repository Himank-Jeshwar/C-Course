#include <stdio.h>
typedef struct TwoDimensionalVector{
    int x,y;
}TwoDimVector;
int main(){
    TwoDimVector vec = {2,-2};
    vec.x = 4;
    vec.y = 5;
    return 0;
}