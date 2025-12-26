//PRACTICAL 8
//2. Swap 2 numbers using pass by reference
#include<stdio.h>
void swap(int*num1,int*num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;}
    int main(){
        printf("AAROHI MANDAL \nRU-25-10013\n");
        int a;
        printf("Enter first number: ");
        scanf("%d",&a);
        int b;
        printf("Enter second number: ");
        scanf("%d",&b);
        printf("Before swapping:a=%d,b=%d\n",a,b);
        swap(&a,&b);
        printf("After swapping:a=%d,b=%d\n",a,b);
        return 0;
    }
    // OUTPUT 
    // AAROHI MANDAL 
    // RU-25-10013
    // Enter first number: 22
    // Enter second number: 14
    // Before swapping:a=22,b=14
    // After swapping:a=14,b=22
