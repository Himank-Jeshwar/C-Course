#include <stdio.h>
void readContent(FILE *file,char content[]){
    int i = 0;
    char ch;
    while(ch!=EOF){
        ch = fgetc(file);
        content[i]=ch;
        i++;
    }
    content[i]='\0';
}

void writeInFile(FILE *file,char content[]){
    for (int i = 0;content[i]!=EOF;i++){
        putc(content[i],file);
        putc(content[i],file);
    }
}
int main(){
    FILE *textfile1 = fopen("this.txt","r");
    FILE *textfile2 = fopen("sample.txt","w");
    char content[100000];
    readContent(textfile1,content);
    writeInFile(textfile2,content);
    fclose(textfile1);
    fclose(textfile2);
    return 0;
}