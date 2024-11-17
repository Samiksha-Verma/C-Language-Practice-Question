#include<stdio.h>
// Write a program to take the Sale amount as input and provide the commission according to the 
// following table 
// Sale Amount Commission :
// Less than 500 Rs. 35 
// From 500 to 2000 10%  of Sale Amount 
// From 2001 to 5000 15%  of Sale Amount 
// More than 5000 20%  of Sale Amount 

int main(){
    int Sale_amount;
    printf("Enter Sale Amount to get Commission : ");
    scanf("%d",&Sale_amount);

    if(Sale_amount<500){
        printf("your commision is : Rs. 35");
    }else if(Sale_amount>=500 && Sale_amount<=2000){
        printf("your commission is : Rs. %d", Sale_amount*10/100);
    }else if(Sale_amount>=2001 && Sale_amount<=5000){
        printf("your commission is : Rs. %d", Sale_amount*15/100);
    }else if(Sale_amount>5000){
        printf("your commission is : Rs. %d", Sale_amount*20/100);
    }else{
        printf("Thankyou for your Cooperation");
    }

    return 0;
}