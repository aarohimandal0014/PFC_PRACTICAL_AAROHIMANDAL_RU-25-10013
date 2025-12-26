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
