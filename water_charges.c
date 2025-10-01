/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: water charges 
*/

#include <stdio.h>

int main() {
        
        float water_units, charges;
        
        printf("enter water_units\t");        
        scanf("%f",&water_units);
        
        if(water_units<=30){
        charges=water_units *20;
        }
        else if (water_units>30&&water_units<=60){
        charges =water_units *25;
        }
        else if(water_units>60){
        charges=water_units *30;
        }
        
        printf("charges is %.2fKES",charges);
        
    return 0;
}