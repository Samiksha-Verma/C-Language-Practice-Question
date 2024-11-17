#include<stdio.h>
// Write a C program to remove any negative sign in front of a number.     
// Input a value (negative): 
//  Expected Output: 
// Original value = -253 
// Absolute value = 253 

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Original value = %d\n",num);
    printf("Absolute value = %d",num - 2*num);
    
    return 0;
}