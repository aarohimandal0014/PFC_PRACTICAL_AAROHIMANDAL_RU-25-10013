// PRACTICAL 10
// 3.Row wise sum of 2D array
#include<stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
int a[10][10], r, c, sum;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the array:\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
    scanf("%d", &a[i][j]);}}
for(int i=0;i<r;i++){
    sum=0;
for(int j=0;j<c;j++){
    sum +=a[i][j];}
    printf("Sum of row %d =%d\n", i + 1, sum);
}return 0;
}
//OUTPUT 
//AAROHI MANDAL 
//RU-25-10013
//Enter number of rows and columns:3 2
//Enter elements of the array:
//23 12
//14 22
//32 10
//Sum of row 1 =35
//Sum of row 2 =36
//Sum of row 3 =42
