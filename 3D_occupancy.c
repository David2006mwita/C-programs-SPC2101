/*

Name: David Mwita
Registration no:CT101/G/26419/25
Description:3D array 

*/

   #include <stdio.h>
int main(){

int i,j,k;
	
int occupancy[3][5][10];
    int occupied,vacant;
	
printf("Welcome to David's Hotel \n ");
printf("========================\n");
    printf("Enter occupancy data (1 = occupied, 0 = vacant):\n");
    for(i=0;i<3;i++){
    	printf("branch [%d]\n",i+1);
    for (j = 0; j < 5; j++) {
        printf("Floor [%d]:\n", j+ 1);
        for (k = 0; k < 10; k++) {
            printf("  Room %d: ", k + 1);
            scanf("%d", &occupancy[i][j][k]);
        }
    }
	}
    printf("\Your data is :\n");
    for(i=0;i<3;i++){
    for (j= 0; j < 5; j++) {
        occupied=0;
        vacant=0;
        for (k=0;k<10;k++){
		 if(occupancy[i][j][k] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("branch[%d];-floor [%d]- Occupied: %d, Vacant: %d\n", i + 1,j+1, occupied, vacant);
    }
	}
    return 0;
} 