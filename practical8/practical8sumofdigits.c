//PRACTICAL 8
//1. Write a function sum of digits that take n as input and return sum of its digits.
#include <stdio.h>
int sumOfDigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;n/=10;}
        return sum;
}
int main(){
printf("AAROHI MANDAL \nRU-25-10013\n");
int n;
printf("Enter a number: ");
scanf("%d",&n);
int result=sumOfDigit(n);
printf("Sum of digits of %d=%d\n", n, result);
return 0;}
// OUTPUT 
// AAROHI MANDAL 
// RU-25-10013
// Enter a number: 345
// Sum of digits of 345=12