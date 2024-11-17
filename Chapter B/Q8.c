#include<stdio.h>
// Write a program in C to calculate and print the Electricity bill of a given customer. The 
// customer id., name and unit consumed by the user should be taken from the keyboard and 
// display the total amount to pay to the customer. The charge are as follow :   
//    Unit                             Charge/unit 
// upto 199                             @1.20 
// 200 and above but less than 400      @1.50 
// 400 and above but less than 600      @1.80 
// 600 and above                        @2.00 
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill 
// should be of Rs. 100/- 
// Test Data : 
// 1001 
// Raman Chatterjee 
// 800 
// Expected Output : 
// Customer IDNO :1001 
// Customer Name : Raman Chatterjee 
// unit Consumed :800 
// Amount Charges @Rs. 2.00 per unit : 1600.00 
// Surchage Amount : 240.00 
// Net Amount Paid By the Customer : 1840.00 

int main(){
    int Id, unit,charge,surcharge;
    char name[20];
    printf("Enter customer Id no :");
    scanf("%d",&Id);
     printf("Enter units :");
     scanf("%d",&unit);
     printf("Enter customer name :");
     scanf("%s",name);

     if(unit<=199){
        charge = 1.20;
     }else if(unit>=200 && unit<400){
        charge = 1.50;
     }else if(unit>=400 && unit<600){
        charge = 1.80;
     }else if(unit>=600){
        charge = 2.00;
     }

printf("Customer IDNO : %d\n",Id);
printf("Customer Name : %s\n",name);
printf("unit Consumed : %d\n",unit);
printf("Amount Charges @Rs. %d per unit : %d\n",charge,unit*charge);
if(unit>400){
    surcharge = (unit*charge)*15/100;
    printf("Surcharge amount : %d\n",surcharge);
    printf("Net Amount Paid By the Customer : %d\n",(unit*charge)+surcharge);
}

     
    return 0;
}