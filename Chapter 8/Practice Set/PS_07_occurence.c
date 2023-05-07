#include <stdio.h>
int occurence(char str [],char letter){
    int i = 0,occur = 0;
    while (str[i]!='\0'){
        if (str[i]==letter)
            occur++;
        i++;
    }
    return occur;
}
int main(){
    char st [] = "Hello World";
    printf("Occurence of 'o' in st is %d",occurence(st,'o'));
    return 0;
}