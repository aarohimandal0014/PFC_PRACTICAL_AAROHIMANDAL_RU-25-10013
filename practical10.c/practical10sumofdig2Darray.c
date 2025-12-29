// PRACTICAL 10
// 2.Sum of digonal elements of 2D array
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
int a[10][10], n, sum = 0;
    printf("Enter rows and columns:");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    scanf("%d", &a[i][j]);
if(i==j){
    sum=sum+a[i][j];}}
   }printf("Sum of diagonal elements =%d\n", sum);
return 0;
}
//OUTPUT 
//AAROHI MANDAL 
//RU-25-10013
//Enter rows and columns:3
//Enter elements of the matrix:
//22 12 09
//32 14 11
//07 82 02
//Sum of diagonal elements =38
