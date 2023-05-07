#include <stdio.h>

typedef struct TwoDimensionalVector{
    int x,y;
}Vector2D;

Vector2D sumVector(Vector2D vec1,Vector2D vec2){
    Vector2D result;
    result.x = vec1.x+vec2.x;
    result.y = vec1.y+vec2.y;
    return result;
}
int main(){
    Vector2D vec1 = {4,9};
    Vector2D vec2 = {5,4};
    Vector2D sum = sumVector(vec1,vec2);
    printf("Sum = (%d,%d)",sum.x,sum.y);
    return 0;
}