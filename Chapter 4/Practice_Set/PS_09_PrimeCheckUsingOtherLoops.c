#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    {
        // do while loop
        int factors = 0,i = 2;
        do{
            if (n%i==0)
                factors++;
            i++;
        }while (i<n);
        printf((factors==0)?"%d is a prime number.\n":"%d is not a prime number\n",n);
    }

    {
        // while loop
        int factors = 0,i = 2;
        while (i<n){
            if (n%i==0)
                factors++;
            i++;
        }
        printf((factors==0)?"%d is a prime number.":"%d is not a prime number",n);
    }
    return 0;
}