/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description:Withdrawal 
*/

    #include <stdio.h>
    
    int main (){
    
    float balance=1000, amount;
    
    printf("Your current balance is %.2f\n",balance);
    
    while(balance>0){
    
    printf("Enter the amount to withdraw\n");
    scanf("%f", &amount);
    balance -=amount;
    printf("Remaining balance : %.2f\n",balance);
    
    }
    
    printf("Insufficient balance");
    
    return 0;
    }