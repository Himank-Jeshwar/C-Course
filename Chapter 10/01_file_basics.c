#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("this.txt","w"); // reads the file
    // ptr = fopen("this.txt","w"); // writes a file
    return 0;
}