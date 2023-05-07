#include <stdio.h>
int main(){
    // Size of Array = Size of 1 element x Number of elements
    // length of array = Size of Array/Size of 1 element
    float cgpa [] = {45.3,22,12.4,11};
    char name [] = {'H','i','m','a','n','k'};
    for (int i = 0;i<sizeof (cgpa)/sizeof (cgpa[i]);i++){
        printf("%f\n",cgpa[i]);
    }
    for (int j = 0;j<sizeof(name)/sizeof(name[j]);j++){
        printf("%c",name[j]);
    }
    return 0;
}