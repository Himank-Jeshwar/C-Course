#include <stdio.h>

int main(){
    // char name[] = "Himank Jeshwar";
    // name = "Peter Fernandeiz"; // cannot change

    char *name = "Himank Jeshwar";
    puts(name);
    name = "Peter Fernandeiz";// can change
    puts(name);
    return 0;
}