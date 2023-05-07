#include <stdio.h>
#include <math.h>
// n = 625
// s = 390625 
// i = 1000

// d = 625

int findMatchingDigits(int n){
    int i = 10,sq = pow(n,2.0),copy = n;
    int d = sq%i;
    while(copy>0){
        
        if (n==d)
            return d;
        
        else{
            i*=10; 
            d = sq%i;
        }
        copy/=10;
    }
    return 0;
}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    if (findMatchingDigits(n)==n)
        printf("Automorphic Number.");
    else 
        printf("Not Automorphic Number.");
    return 0;
}