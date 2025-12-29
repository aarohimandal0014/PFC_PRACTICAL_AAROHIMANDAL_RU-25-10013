// PRACTICAL 9
// 1.Reverse an Array
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int n, i, a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
int arr[n];
    printf("Enter %d elements:\n", n);
for(i=0;i<n;i++){
    scanf("%d", &arr[i]);}
for(i=0;i<n/2;i++){
    a=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=a;}
    printf("Reversed Array:");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}return 0;
}
// OUTPUT 
// AAROHI MANDAL 
// RU-25-10013
// Enter the number of elements in the array: 6
// Enter 6 elements:
// 12 98 34 14 66 24
// Reversed Array:24 66 14 34 98 12 
