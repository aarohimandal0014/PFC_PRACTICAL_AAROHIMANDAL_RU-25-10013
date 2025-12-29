//PRACTICAL 7 
//2. Hourglass of length 2n-1
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int a=2*n-1;
    for(int i=1;i<=a;i++){
        int k=(i<=n)?(i-1):(a-i);
        int stars=a-2*k;
    for(int c=0;c<k;c++)
        printf(" ");
    for(int d=0;d<stars;d++)
        printf("*");
    printf("\n");
    }return 0;}
// OUTPUT 
// AAROHI MANDAL 
// RU-25-10013
// Enter number: 4
// *******
//  *****
//   ***
//    *
//   ***
//  *****
// *******