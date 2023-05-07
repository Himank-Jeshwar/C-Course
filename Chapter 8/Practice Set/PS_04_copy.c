#include <stdio.h>
void copy(char target[],char source[]){
    int i = 0;
    while (source[i]!='\0'){
        target[i]=source[i];
        i++;
    }
    target[i]='\0';
}
int main(){
    char source[] = "Himank";
    char target[12];
    copy(target,source);
    puts(target);
    return 0;
}