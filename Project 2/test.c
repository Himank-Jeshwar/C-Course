#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct User{
    int points;
    char choice;
}User;

typedef struct Computer{
    int points;
    char choice;
}Computer;

char getUserChoice();
char getComputerChoice();
int roundDecision(char userCh,char compCh);
void play();

int main()
{   
    play();
    // printf("Computer choice = %c",getComputerChoice());
    // printf("User choice - %c",getUserChoice());
    return 0;
}
void play(){
    // game logic
    Computer comp; 
    User user;
    int round = 1;
    do{
        // players making choice
        comp.choice = getComputerChoice();
        user.choice = getUserChoice();
        if (roundDecision(user.choice,comp.choice))
            comp.points++;
        else if (roundDecision(user.choice,comp.choice)==1)
            user.points++;
        else
            continue;
        printf("Computer chose - "+comp.choice);
        printf("You chose : "+user.choice);
        round++;
    }while(round<=2);
}
int roundDecision(char userCh,char compCh){
    /* if returns 0 - computer wins
    if returns 1 - user wins
     if returns 2 - tie */
    if (userCh=='r'){
        if (compCh=='p')
            return 0;
        else if (compCh=='s')
            return 1;
        else
            return 2;
    }
    else if (userCh=='p'){
        if (compCh=='s')
            return 0;
        else if (compCh=='r')
            return 1;
        else
            return 2;
    }
    else{
        if (compCh=='r')
            return 0;
        else if (compCh=='p')
            return 1;
        else 
            return 2;
    }
}
char getUserChoice(){
    char userCh;
    printf("\nSelect your choice :-\n\'r\' for Rock\n\'p\' for Paper\n\'s\' for Scissor\n\n");
    scanf("%c",&userCh);
    // fflush(stdin);
    // making choice case - insensitive
    switch(userCh){
        case 'R':
            userCh = 'r';
            break;
        case 'S':
            userCh = 's';
            break;
        case 'P':
            userCh = 'p';
            break;
    }

    if (userCh=='r'||userCh=='p'||userCh=='s'){
        return userCh;
    }
    else {        
        printf("\nINVALID INPUT !\n");
        exit(0);
    }
}
char getComputerChoice(){
    // generating random number
    srand(time(NULL));
    int randNum = rand()%3;
    char compCh;

    // converting random number into choice
    switch(randNum){
        case 0:
            compCh = 'r';
            break;
        case 1:
            compCh = 'p';
            break;
        case 2:
            compCh = 's';
    }
    return compCh;
}
