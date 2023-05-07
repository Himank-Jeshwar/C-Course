#include <stdio.h>
typedef struct StoreDate{
    int dateNum,month,year;
}Date;

int compareDate(Date d1,Date d2){
    /*  1) returns 0 if dates are equal

        2) returns 1 if the first mismatching part of the date in the 1st argument 
          is greater than that in second argument
        
        3) returns -1 if the first mismatching part of the date in the 1st argument
           is less than that in second argument. 
    */
   
    if (d1.dateNum>d2.dateNum)
        return 1;
    else if (d1.dateNum<d2.dateNum)
        return -1;

    if (d1.month>d2.month)
        return 1;
    else if (d1.month<d2.month)
        return -1;

    if (d1.year>d2.year)
        return 1;
    else if (d1.year<d2.year)
        return -1;
    return 0;
}

int main(){
    Date dt1 = {12,11,21};
    Date dt2 = {5,4,22};
    printf("Comaparison result : %d",compareDate(dt1,dt2));
    return 0;
}