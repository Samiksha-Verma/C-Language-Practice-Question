#include<stdio.h>

//write a program in C to accept two integer numbers with proper message. Perform different operations using the following operators :
//+,-,*,/,%
//Expected Output:
//First Number = 15
//Second Number = 4
//Summation = 19
//Multiplication = 60 
//Subtraction = 11
//Division = 3
//Remainder = 3

int main(){
    int num1,num2,Summation = 0, Multiplication, Subtraction, Division, Remainder; 
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    Summation = num1 + num2;
    Subtraction = num1- num2;
    Multiplication = num1 * num2;
    Division = num1 / num2;
    Remainder = num1 % num2;

    printf("Summation = %d\n", Summation);
    printf("Multiplication = %d\n", Multiplication);
    printf("Subtraction = %d\n", Subtraction);
    printf("Division = %d\n", Division);
    printf("Remainder = %d\n", Remainder);

    return 0;
}