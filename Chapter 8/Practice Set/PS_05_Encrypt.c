#include <stdio.h>
#include <string.h>
void encrypt(char str[]){
    for (int i = 0;i<strlen(str);i++){
        str[i]++;
    }
}
int main()
{
    char st[] = "Computer";
    encrypt(st);
    printf("%s",st);
    return 0;
}
