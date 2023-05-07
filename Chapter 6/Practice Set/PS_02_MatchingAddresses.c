#include <stdio.h>
void address(int i);
int main(){
    int i = 5;
    printf("Address of i is %u\n",&i);
    address(i);
    return 0;
}
void address(int i){
    printf("Address of i is %u",&i);
}