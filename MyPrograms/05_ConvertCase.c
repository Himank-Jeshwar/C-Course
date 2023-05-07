#include <stdio.h>
#include <string.h>

// ASCII of Lower Case - ASCII of Upper Case = 32

int main(){
    char str[50];
    int ch;
    printf("Enter a string : ");
    scanf("%s",str);

    printf("Press 1 to convert to upper case\nPress 2 to convert to lower case\n");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for (int i = 0;i<strlen(str);i++){
                if (str[i]>=97&&str[i]<=122)
                    str[i]-=32;
            }   
            break;
        
        case 2:
            for (int i = 0;i<strlen(str);i++){
                if (str[i]>=65&&str[i]<=90)
                    str[i]+=32;
            }   
            break;

    }
    printf("%s",str);
}