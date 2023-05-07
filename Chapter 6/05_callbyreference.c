#include <stdio.h>
void change(int *a);
void wrong_swap(int x,int y);
void correct_swap(int *x,int *y);
int main(){
    int x = 7, y = 9;
    printf("Before function call\na = %d\nb = %d\n\nAfter function call\n",x,y);
    // wrong_swap(x,y); // will not swap the values as "copy" of value goes to the function
    correct_swap(&x,&y); // copy of address goes to the function
    printf("a = %d\nb = %d",x,y);
    return 0;
}
void wrong_swap(int x , int y){
    x*=y;
    y = x/y;
    x = x/y;
}
void correct_swap(int *x,int *y){
    *x *= *y;
    *y = *x/(*y);
    *x = *x/(*y);
}