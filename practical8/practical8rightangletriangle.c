//PRACTICAL 8
//2. Write a function to print a right angle triangle of stars of height n.
#include<stdio.h>
void Triangle(int height){
    for(int i=1;i<=height;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}int main(){
    printf("AAROHI MANDAL \nRU-25-10013\n");
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    Triangle(height);
    return 0;
}
