#include <stdio.h>
typedef struct LocalTime{
    int hours,minutes,seconds;
}Time;

int compareTime(Time t1,Time t2){
    if (t1.hours>t2.hours)
        return 1;
    else if (t1.hours<t2.hours)
        return -1;

    if (t1.minutes>t2.minutes)
        return 1;
    else if (t1.minutes<t2.minutes)
        return -1;

    if (t1.seconds>t2.seconds)
        return 1;
    else if (t1.seconds<t2.seconds)
        return -1;
    return 0;
}

int main(){
    Time t1 = {20,41,2022};
    Time t2 = {20,43,23}; 
    printf("Comaparison result : %d",compareTime(t1,t2));
    return 0;
}