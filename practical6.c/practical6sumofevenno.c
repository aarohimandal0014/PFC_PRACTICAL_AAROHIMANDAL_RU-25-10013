//PRACTICAL 6 
//2. Sum of even numbers using continue
#include <stdio.h>
int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int i, num, sum = 0;
    printf("Enter the value of num (N): ");
    scanf("%d", &num);
    printf("Even numbers considered:\n");
    for (i = 1; i <= num; i++){
        if (i % 2 != 0){
        continue;}
        sum += i;
        printf("%d\n",i);}
        printf("Sum of all even numbers from 1 to %d = %d\n", num, sum);
return 0;
}
//OUTPUT
// AAROHI MANDAL 
// RU-25-10013
// Enter the value of num (N): 21
// Even numbers considered:
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20
// Sum of all even numbers from 1 to 21 = 110
