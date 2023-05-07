// header files
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

// methods used
char getUserChoice();
char getComputerChoice();
int roundDecision(char userCh,char compCh);
void play();

int main(){
    // method to play the game
    int ch;
    FILE *file;
    char content;
    while (1){
        printf("\nPRESS 1 TO PLAY THE GAME\nPRESS 2 TO READ INSTRUCTIONS\nPRESS 3 TO EXIT\n\n");
        scanf("%d",&ch);
        fflush(stdin);

        switch(ch){
            case 1:
                play();
                break;
            case 2:
                file = fopen("instructions.txt","r");
                printf("\n");
                ch = fgetc(file);
                while(1){
                    ch = fgetc(file);
                    if (ch==EOF)
                        break;
                    printf("%c",ch);
                }
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("INVALID CHOICE !\n\tPlease try again.");
      }
    }
    return 0;
}
void play(){
    // game logic
    Computer comp; 
    User user;
    comp.points = 0; user.points = 0; // initializing points of the players as 0
    int round = 1,roundNum; // keeping record of the round number
    char *userMsg, *compMsg;
        do{
        //     // players making choice
            roundNum = round;
            printf("ROUND - %d\n",roundNum);
            comp.choice = getComputerChoice();
            user.choice = getUserChoice();
            if (user.choice=='r')
                userMsg = "Rock";
            else if (user.choice=='s')
                userMsg = "Scissor";
            else 
                userMsg = "Paper";

            if (comp.choice == 'r')
                compMsg = "Rock";
            else if (comp.choice=='s')
                compMsg = "Scissor";
            else
                compMsg = "Paper";  
            
            if (roundDecision(user.choice,comp.choice)==0){
                printf("ALAS ! You have lost the round.\n");
                comp.points++;
            }
            else if (roundDecision(user.choice,comp.choice)==1){
                printf("HURRAY ! You have won the round.\n");
                user.points++;
            }
            else if (roundDecision(user.choice,comp.choice)==2||comp.points==user.points){
                printf("Its a tie !\n\tThis round will be played again\n");
                printf("Computer chose - %s\n",compMsg);
                printf("You chose : %s\n\n",userMsg);
                printf("Your points - %d\nComputer points - %d\n\n",user.points,comp.points);
                roundNum++;
                continue;
            }
            
            printf("Computer chose - %s\n",compMsg);
            printf("You chose : %s\n\n",userMsg);
            printf("Your points - %d\nComputer points - %d\n\n",user.points,comp.points);
            round++;
        }while(round<=2);

    // final decision
    if (comp.points<user.points)
        printf("CONGRATULATIONS ! YOU HAVE WON THE MATCH.");
    else 
        printf("ALAS ! YOU HAVE LOST THE MATCH.");
}

char getUserChoice(){
    char userCh;
    printf("\nSelect your choice :-\n\'r\' for Rock\n\'p\' for Paper\n\'s\' for Scissor\n\n");
    scanf("%c",&userCh);
    fflush(stdin);
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
    else 
        printf("\nINVALID INPUT !\n");
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

int roundDecision(char userCh,char compCh){
    /* if returns 0 - computer wins
    if returns 1 - user wins
     if returns 2 - tie */
    int decision;
    if (userCh=='r'){
        if (compCh=='p')
            decision = 0;
        else if (compCh=='s')
            decision = 1;
        else
            decision = 2;
    }
    else if (userCh=='p'){
        if (compCh=='s')
            decision = 0;
        else if (compCh=='r')
            decision = 1;
        else
            decision = 2;
    }
    else{
        if (compCh=='r')
            decision = 0;
        else if (compCh=='p')
            decision = 1;
        else 
            decision = 2;
    }
    return decision;
}