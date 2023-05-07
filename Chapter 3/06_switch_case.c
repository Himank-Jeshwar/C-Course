#include <stdio.h>

int main(){
    int rating;
    printf("Enter your rating (1-5) = ");
    scanf("%d",&rating);

    switch (rating)
    {
        case 1:
            printf ("Very Bad");
            break;
        case 2:
            printf("Bad");
            break;
        case 3:
            printf("Fair");
            break;
        case 4:
            printf("Good");
            break;
        case 5:
            printf("Very Good");
            break;
    
       default:
            printf("INVALID RATING !");
    }
    return 0;
}