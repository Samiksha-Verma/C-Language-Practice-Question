#include<stdio.h>
// Write a C program to check whether a number is ODD or EVEN.  
// Test Data : 
// 25 
// Expected Output : 
// ODD 

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n % 2 == 0 ){
        printf("EVEN");
    }else{
        printf("ODD");
    }

    return 0;
}