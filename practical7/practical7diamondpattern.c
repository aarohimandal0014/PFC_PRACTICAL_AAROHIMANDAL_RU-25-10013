//PRACTICAL 7 
//1. Diamond of length 2n-1
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int rows=2*n-1;
    for(int i=1;i<=rows;i++){
        int stars,spaces;
        if(i<=n){
            stars=2*i-1;spaces=n-i;}
        else{stars=2*(rows-i)+1;spaces=i-n;}
        for(int j=0;j<spaces;j++)
        printf(" ");
        for(int j=0;j<stars;j++)
        printf("*");
        printf("\n");
        }return 0;
    }