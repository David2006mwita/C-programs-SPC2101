/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description:Eligibility for exam 
*/

#include <stdio.h>

int main() {
    
    int attendance, average_marks;
    
    printf("enter your attendance\n");
    scanf("%d",&attendance);
    
    printf("enter your average_marks\n");
    scanf("%d",&average_marks);
    
    if(attendance>=75&&average_marks>=40){
    printf("eligible for final exam ");
    }
    else {
    printf("not eligible");
    }
    
        
    return 0;
}