#include <stdio.h>

typedef struct BankAccount{
    int accNo,cvv,ifsc;
    char *name,*address,*upiPin,*atmPin;
    float balance;
}bankAccount;

void showDetails(bankAccount person){
    printf("Account holder's name : %s\n",person.name);
    printf("Account holder's address : %s\n",person.address);
    printf("Account number : %d\n",person.accNo);
    printf("CVV : %d\n",person.cvv);
    printf("UPI Pin : %s\n",person.upiPin);
    printf("ATM Pin : %s\n",person.atmPin);
    printf("IFSC code : %d\n",person.ifsc);
    printf("Bank Balance : Rs.%.2f\n\n",person.balance);
}
int main(){
    bankAccount himank = {3400021,911,045402,"Himank Jeshwar","Kolkata","1111","1234",15000};
    bankAccount rahul = {7888100,988,321111,"Rahul Mishra","Mumbai","9999","0000",30000};
    showDetails(himank);
    showDetails(rahul);   
    return 0;
}