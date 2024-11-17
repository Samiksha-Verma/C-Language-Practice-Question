#include<stdio.h>
#include<math.h>
// Write a C program that accepts a real number x and prints out the corresponding value of 
// sin(1/x) using 4-decimal places.  
//    Test Data: 
// Input value of x: .6235 
// Value of sin(1/x) is 0.000160 
 
// Input value of x: 0  
// Value of sin(1/x) is “Not Possible”

int main(){

    float x;
    printf("enter a number : ");
    scanf("%f",&x);

    if(x==0){
      printf("Not Possible");
    }else{
        printf("value of sin(1/x) is %f",sin(1/x));
    }
     
    return 0;
}