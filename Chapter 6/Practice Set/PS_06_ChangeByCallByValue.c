#include <stdio.h>
void changeVal(int x);
int main(){
    int y = 78;
    printf("Before function call y is = %d\n",y);
    changeVal(y);
    printf("After function call y is = %d",y);

    return 0;
}
void changeVal(int x){
    x*=10;
}