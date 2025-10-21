/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: water charges 
*/

#include <stdio.h>

float calculateFare(float distance);

int main (){
float distance,fare;

printf("Enter distance covered \n");
scanf("%f",&distance);

fare=calculateFare(distance);

printf("Your fare is KES :%.2f",fare);

return 0;
}

    float calculateFare(float distance){
    
    float fare;
        
    fare=distance*50;
    
    return fare;
    }