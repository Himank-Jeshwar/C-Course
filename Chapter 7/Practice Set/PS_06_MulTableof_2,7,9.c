#include <stdio.h>

int main(){
    int mulTable[10][3];
    for (int i = 0;i<10;i++){
        for (int j = 0;j<3;j++){
            switch(j){
                case 0:
                    mulTable[i][j]=2*(i+1);
                    printf("2 x %d = %d\t",i+1,mulTable[i][j]);
                    break;
                case 1:
                    mulTable[i][j]=7*(i+1);
                    printf("7 x %d = %d\t",i+1,mulTable[i][j]);
                    break;
                case 2:
                    mulTable[i][j]=9*(i+1);
                    printf("9 x %d = %d\t",i+1,mulTable[i][j]);
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}