#include<stdio.h>
// Write a program that reads two numbers and divide the first number by second number. If 
// the division not possible print "Division not possible".     
// Test Data : 
// Input two numbers:                     Input two numbers:
// x: 25                                  x: 21
// y: 5                                   y: 5
// Expected Output: 5                   Expected Output: Division not possible 
 
 int main(){
    int x,y;
    printf("Enter two number : ");
    scanf("%d%d",&x,&y);
    
    if(x % y == 0){
        printf("Answer is : %d", x / y);
    }else{
        printf("Division not possible");
    }

    return 0;
 }
