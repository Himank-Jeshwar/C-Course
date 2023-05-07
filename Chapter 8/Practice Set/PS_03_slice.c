#include <stdio.h>
void slice(char *str,int m,int n){
    int i = 0;
    for (;(i+m)<n;i++){
        str[i] = str[i+m];
    }
    str[i]='\0';
}
int main(){
    char str[] = "Windows";
    slice(str,3,6);    
    printf("%s",str);
    return 0;
}