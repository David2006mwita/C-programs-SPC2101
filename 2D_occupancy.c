/*

Name: David Mwita
Registration no:CT101/G/26419/25
Description:2D array 

*/

#include <stdio.h>
int main(){

int i,j;
	
int occupancy[5][10];
    int occupied,vacant;
	
	
printf("Welcome to David's Hotel \n");
printf("========================\n");
    printf("\nRoom Occupancy Data\n");

    printf("Enter occupancy data (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < 5; i++) {
        printf("Floor [%d]:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("  Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    printf("\nYour data is :\n");
    for (i = 0; i < 5; i++) {
    vacant=0;
    occupied =0;
        
        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1){
                occupied++;
                }
            else{
                vacant++;
                }
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }
    
    return 0;
}