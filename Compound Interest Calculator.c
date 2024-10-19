#include<stdio.h>
#include<math.h>

int main()
{
    printf("Assignment 5 : Compound Interest Calculator\n\n");
    printf("Task : Write a C program that takes principal, rate, time, and number of times interest is compounded per year as user input and calculates the compound interest.");
    
    float principal, rate, Time, n, amount, compound_interest;
    
    printf("\n\nEnter the principal amount : ");
    scanf("%f", &principal);
    
    printf("\nEnter the rate of interest : ");
    scanf("%f", &rate);
    
    printf("\nEnter the time : ");
    scanf("%f", &Time);
    
    printf("\nEnter the number of times interest is compounded per year : ");
    scanf("%f", &n);
    
    rate = rate/100;
    amount = principal*pow((1+rate/n),n*Time);
    compound_interest = amount - principal;
    
    printf("\n\nThe calculated Compound Interest is : %.2f", compound_interest);
    
    return 0;
}
