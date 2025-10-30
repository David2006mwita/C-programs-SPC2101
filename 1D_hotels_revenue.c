/*

Name: David Mwita
Registration no:CT101/G/26419/25
Description:1D array 

*/

#include <stdio.h>
int main () {
    int i;
    float total = 0;
    float average;
    float revenue[7];
    
    printf("Welcome to David's Hotel 🏨\n ");
    printf("----------------------------\n");
    printf("Enter the daily revenue for 7 days:\n");
    for (i=0; i<7; i++) {
        printf("Day [%d]:", i + 1);
        scanf("%f", &revenue[i]);
    }
    printf("\nDaily revenue entered:\n");
    for (i=0; i<7; i++) {
        printf("%.5f\n", revenue[i]);
        total = total + revenue[i];
        average = total/7;
    } 
    printf("\nThe total weekly revenue is: %f", total);
    printf("\nThe average daily revenue is: %f", average);
return 0;
}