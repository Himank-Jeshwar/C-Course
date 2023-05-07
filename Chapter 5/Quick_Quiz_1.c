#include <stdio.h>
void goodMorning();
void goodAfterNoon();
void goodNight();
int main(){
    goodMorning();
//     goodAfterNoon();
//     goodNight();
    return 0;
}
void goodMorning(){
    printf("Good Morning\n");
    goodAfterNoon();
    goodNight();
}
void goodAfterNoon(){
    printf("Good Afternoon\n");
}
void goodNight(){
    printf("Good Night\n");
}