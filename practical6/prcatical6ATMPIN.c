//PRACTICAL 6 
//3. ATM Pin authenticaton
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int correctPIN=1122;
    int pin;
    int attempts=0;
    while (attempts<3){
        printf("Enter yoy 4 digit PIN: ");
        scanf("%d",&pin);
    if(pin==correctPIN){
        printf("PIN Matched! Access Granted.\n");
        return 0;}
        else{attempts++;
        printf("Wrong PIN! Attempts left: %d\n",3-attempts);}}
        printf("Too many wrong attempts. Your account is locked!\n");
        return 0;    
    }
