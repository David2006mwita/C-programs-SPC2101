/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: Data program 
*/

#include <stdio.h>

int main() {
        
        int choice;        
        
        printf("1. 100MB    @50KES\n");
        printf("2. 500MB    @200KE\n");
        printf("3. 1GB      @350\n");
        printf("4. 2GB      @600\n");
        
        printf("Enter your choice(1-4)\t");
        scanf("%d",&choice);
        
        switch(choice){
        case 1:
        printf("You selected 100MB. cost=50KES");
        
        
        break;
        case 2:
        printf("You selected 500MB. cost=200KES");
        
        break;
        case 3:
        printf("You selected 1GB. cost=350KES");
             
        break;
        case 4:
        printf("You selected 2GB. cost=600KES");
        
        break;
        default:
        printf("Invalid choice!");
        }
        
        
        
    return 0;
}