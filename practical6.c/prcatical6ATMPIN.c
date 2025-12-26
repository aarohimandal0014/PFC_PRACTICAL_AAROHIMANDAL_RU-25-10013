//PRACTICAL 6 
//3. ATM Pin authenticaton
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int correctPIN=1122;
    int pin;
    int attempts=0;
    while (attempts<3){
        printf("Enter 4 digit PIN: ");
        scanf("%d",&pin);
    if(pin==correctPIN){
        printf("PIN Matched! Access Granted.\n");
        return 0;}
        else{attempts++;
        printf("Wrong PIN! Attempts left: %d\n",3-attempts);}}
        printf("Too many wrong attempts. Your account is locked!\n");
        return 0;    
    }
//OUTPUT
//AAROHI MANDAL 
//RU-25-10013
//Enter 4 digit PIN: 1234
// Wrong PIN! Attempts left: 2
// Enter yoy 4 digit PIN: 2234
// Wrong PIN! Attempts left: 1
// Enter yoy 4 digit PIN: 1122
// PIN Matched! Access Granted.
