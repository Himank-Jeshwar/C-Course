#include <stdio.h>
#include <string.h>
void decrypt(char str[]){
    for (int i = 0;i<strlen(str);i++){
        str[i]--;
    }
}
int main(){
    char st [] = "Dpnqvufs";
    decrypt(st);
    puts(st);
    return 0;
}