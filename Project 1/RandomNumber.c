#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    // generating random number from 1 to 100
    srand(time(NULL));
    int randNum = rand()%100;
    int attempts = 0;
    int userInput;

    // game logic
    do{
        printf("\nGuess a number between (1-100) : ");
        scanf("%d",&userInput);
        if (userInput>randNum)
            printf("Lower number please.\n");
        else if (userInput<randNum)
            printf("Higher Number please.\n");
        attempts++;
    }while(userInput!=randNum);
    printf("\nCongratulations ! You guessed the correct Number.\nNumber of attempts made : %d",attempts);
}