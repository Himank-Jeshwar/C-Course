#include <stdio.h>

int main(){
    // declaration
    int n1,n2,n3,n4,max = 0;

    // inputs
    printf("Enter 4 numbers :- \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    // finding greatest
    if (n1>n2 && n1>n3 && n1>n4)
        max = n1;
    else if (n2>n1 && n2>n3 && n2>n4)
        max = n2;
    else if (n3>n1 && n3>n2 && n3>n4)
        max = n3;
    else 
        max = n4;

    printf("Greatest number - %d",max);
    return 0;
}