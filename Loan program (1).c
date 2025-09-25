/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: Loan program 
*/

#include<stdio.h>
int main() {
    int age ;
    float income ;
    printf("enter age");
    scanf ("%d",&age);
    
    printf ("enter income ");
    scanf ("%f",&income);
    
    
    if(age>=21 && income >=21000){
    printf ("you qualify for the loan\n");
    }else {
    
   printf ("skip");
    }
    
    return 0 ;
    }