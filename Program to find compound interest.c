/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: Program to calculate compound  interest 
*/

#include<stdio.h>
int main(){
float amount, principle ,rate, time ,number_of_times_interest_is_compounded_per_year,compound_interest;

printf("enter principle");
scanf("%f",&principle);

printf("enter rate ");
scanf("%f",&rate);

printf("enter time");
scanf("%f",&time);

printf("enter number_of_times_interest_is_compounded_per_year");
scanf("%f",&number_of_times_interest_is_compounded_per_year);

amount =principle*pow((1+(rate/(100*number_of_times_interest_is_compounded_per_year))),number_of_times_interest_is_compounded_per_year *time);

 
 compound_interest=amount-principle;
 
 printf("amount = %f\n",amount );
 printf(" compound _interest = %f",compound_interest);
 
 
return 0;
}