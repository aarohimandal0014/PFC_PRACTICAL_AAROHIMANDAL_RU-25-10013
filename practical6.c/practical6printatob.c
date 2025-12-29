//PRACTICAL 6 
//1. Print numbers from a to b using loops
#include <stdio.h>
int main(){
printf("AAROHI MANDAL \nRU-25-10013\n");
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Number between %d and %d are:\n",a,b);
for(int i=a;i<=b;i++){
    printf("%d\n",i);}
    printf("\n");
return 0;
}
//OUTPUT
// AAROHI MANDAL 
// RU-25-10013
// Enter the first number: 12
// Enter the second number: 17
// Number between 12 and 17 are:
// 12
// 13
// 14
// 15
// 16
// 17
