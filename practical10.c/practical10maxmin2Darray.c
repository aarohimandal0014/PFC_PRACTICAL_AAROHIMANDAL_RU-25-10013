// PRACTICAL 10
// 1.Max and Min element in 2D array
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
int a[10][10], r, c;
int max, min;
    printf("Enter rows and columns:");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the array:\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
    scanf("%d", &a[i][j]);}
   }max=min=a[0][0];
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
if(a[i][j]>max)
    max=a[i][j];
if(a[i][j]<min)
    min=a[i][j];}
   }printf("Maximum element =%d\n", max);
    printf("Minimum element =%d\n", min);
return 0;
}
//OUTPUT
//AAROHI MANDAL 
//RU-25-10013
//Enter rows and columns:3 3
//Enter elements of the array:
//2 51 21
//12 14 93
//83 22 10
//Maximum element =93 
//Minimum element =10
//Minimum element =10
