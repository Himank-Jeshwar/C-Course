#include <stdio.h>
typedef struct ComplexNumber{
    float real,img;
}complexNum;

void display(complexNum compNo[]){
    for (int i = 0;i<5;i++){
        printf("Real value : %f\n",compNo[i].real);
        printf("Imaginary value : %f\n\n",compNo[i].img);
    }
}
int main(){
    complexNum num[5];
    for (int i = 0;i<5;i++){
        printf("Enter the real value : ");
        scanf("%f",&num[i].real);
        printf("Enter the imaginary value : ");
        scanf("%f",&num[i].img);
    }
    printf("\n\n");
    display(num);
    return 0;
}