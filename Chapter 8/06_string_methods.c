#include <stdio.h>
#include <string.h>
int main(){
    // strlen () -> calculates the length of string
    char *st = "Red";
    int length = strlen(st);
    printf("Length of st = %d",length);
    printf("\n");

    // strcpy () -> stores the copy of second argument(string) in the first argument(string)
    char copyOfst[strlen(st)];
    strcpy(copyOfst,st);
    puts(copyOfst);

    // strcat() - concatenate two strings and stores it in the first argument (string).
    char str1[50] = "Good";
    char *str2 = "Morning";
    strcat(str1,str2);
    puts(str1);
    
    // strcmp () - compares two strings
    char *n1 = "Apple";
    char *n2 = "Mango";
    
    int compare = strcmp(n1,n2);
    printf("%d",compare);
    return 0;
}