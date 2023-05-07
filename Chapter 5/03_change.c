#include <stdio.h>
void change(int a);
int main(){
    int a = 12;
    printf("Value of a = %d\n",a);
    change(a);
    printf("Value of a = %d",a);
    return 0;
}
void change(int a){
    a = 77;
}