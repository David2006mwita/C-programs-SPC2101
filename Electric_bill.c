/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: water charges 
*/

#include <stdio.h>
//Function Prototype
float calculateElectricBill(float unit);

int main() {
    float unit, total_bill;
    
    printf("Enter unit consumed:");
    scanf("%f", &unit);
    
    total_bill = calculateElectricBill(unit);
    
     printf("Total bill: KES %.2f\n", total_bill);

    return 0;
}

//Function Declaration
float calculateElectricBill(float unit) {
    float total_bill;
    if(unit <= 100) {
        total_bill = unit * 10;
    }
    else if(unit <= 200) {
        total_bill = ((unit-100) * 15) + 1000;
    }
    else {
        total_bill = ((unit-200) * 20) + 2500;
    }
    return total_bill;
}