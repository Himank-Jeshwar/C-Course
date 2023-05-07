#include <stdio.h>
#include <string.h>
int main(){
    char str [100];
    printf("Enter a string :");
    scanf("%s",str);

    for (char i = 'A';i<='Z';i++){
        for (int j = 0;j<strlen(str);j++){
            if (i==str[j])
                printf("%c",str[j]);
        }
    }
}