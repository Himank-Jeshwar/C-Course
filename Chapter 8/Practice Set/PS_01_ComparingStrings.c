#include <stdio.h>
#include <string.h>
int main(){
    char st1[34];
    char st2[34];
    char ch;
    int i = 0;
    printf("Enter string 1 :");
    scanf("%s",st1);
    printf("Enter string 2 :\n");
    while (ch!='\n'){
        fflush(stdin);// use it if there are consecutive scanf() statements
        scanf("%c",&ch);
        st2[i] = ch;
        i++;
    }
    st2[i-1]='\0';
    printf("st1 = %s\nst2 = %s\n",st1,st2);
    if (strcmp(st1,st2)==0)
        printf("Strings are equal.");
    else 
        printf("Strings are unequal.");
    return 0;
}