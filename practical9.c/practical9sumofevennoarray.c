// PRACTICAL 9
// 3.Sum of all even elements of an array
#include<stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
int arr[100],n,sum=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
if(arr[i]%2==0){
        sum+=arr[i];}
   }printf("Sum of even elements= %d", sum);
return 0;
}
//OUTPUT
//AAROHI MANDAL 
//RU-25-10013
//Enter number of elements:6
//Enter array elements:
//2 14 33 67 82 120
//Sum of even elements= 228
