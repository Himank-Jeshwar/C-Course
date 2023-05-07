#include <stdio.h>
void change(int a);
int main(){
    int a = 7;
    printf("Value of a before function call : %d\n",a);
    change(a);
    printf("Value of a after function call : %d ",a);
    return 0;
}
void change(int a){
    a = 11;
}