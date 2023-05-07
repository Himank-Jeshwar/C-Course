#include <stdio.h>
#include <string.h>
int main(){
    char ptr[100];
    printf("Enter string : ");
    scanf("%s",ptr);

    for (int i = 0;i<strlen(ptr);i++){
        for (int j = 0;j<=i;j++){
            printf("%c ",ptr[j]);
        }
        printf("\n");
    }
    return 0;
}