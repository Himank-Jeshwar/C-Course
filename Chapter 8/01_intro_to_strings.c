#include <stdio.h>

int main(){
    char str[] = {'H','i','m','a','n','k','\0'};
    char *address = str;
    for (int i = 0;i<sizeof str;i++,address++){
        printf("%u ",address);
    }
    // char str[] = "Himank"; // convenient way

    return 0;
}