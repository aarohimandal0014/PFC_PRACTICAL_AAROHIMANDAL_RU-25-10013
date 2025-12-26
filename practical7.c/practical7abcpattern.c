//PRACTICAL 7 
//2. Hourglass of length 2n-1
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int rows=4;
    for(int i=1;i<=rows;i++){
        char ch='A';
    for(int j=1;j<=i;j++){
        printf("%c",ch);
        ch++;}
        printf("\n");}
        return 0;
    }
//OUTPUT
//AAROHI MANDAL 
//RU-25-10013
//A
//AB
//ABC
//ABCD 