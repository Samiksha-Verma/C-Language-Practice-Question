#include<stdio.h>
// Write a C program to convert specified days into years, weeks and days.     
// (Note: Ignore leap year.) 
// Test Data : 
//             Number of days : 1329 
//             Expected Output : 
//             Years: 3 
//             Weeks: 33 
//             Days: 3

int main(){
    int days;

    printf("Enter number of days: ");
    scanf("%d",&days);
    printf("\nNumber of days : %d", days);
    printf("\nYears: %d",days/365);
    printf("\nWeeks: %d",(days%365)/7);
    printf("\nDays: %d", (days/365)%7);

    return 0;
}