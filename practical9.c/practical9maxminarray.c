// PRACTICAL 9
// 2.Max and Min element of an array
#include<stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
int arr[100]; 
int n, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
for (i=0;i<n;i++){
    printf("Element - %d : ", i + 1);
    scanf("%d", &arr[i]);}
    min = arr[0];
    max = arr[0];
for (i=1;i<n;i++){
if (arr[i]>max){
    max=arr[i];}
if (arr[i]<min){
    min = arr[i];}
   }printf("\nMinimum number in the array is: %d\n", min);
    printf("Maximum number in the array is: %d\n", max);
return 0;
}
//OUTPUT 
//AAROHI MANDAL 
//RU-25-10013
//Enter number of elements: 5
//Enter array elements:
//Element - 1 : 19
//Element - 2 : 22
//Element - 3 : 14
//Element - 4 : 07
//Element - 5 : 93
//Minimum number in the array is: 7
//Maximum number in the array is: 93
