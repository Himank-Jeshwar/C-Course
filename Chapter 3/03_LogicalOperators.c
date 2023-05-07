#include <stdio.h>

int main(){
    int age;
    char reply;
    int vip_pass;
    printf("Do you have the vip pass (y/n) ? ");
    scanf("%c",&reply);
    if (reply=='y')
        vip_pass = 1;
    else
        vip_pass = 0;
    printf("Enter your age = ");
    scanf("%d",&age);

    if (vip_pass==0&&(age>70||age<18)){
        printf("You cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }
    return 0;
}