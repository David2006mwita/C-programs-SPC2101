/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description:Password 
*/ 
#include <stdio.h>

int main() {
    int password;
    
    do{
    
    printf("Enter your password\n");
    scanf("%d",&password);
    
    if (password==1234){
    printf("Access granted");
    }
    else {
    printf("Incorrect password!Try again \n");
    }
    }
    while (password !=1234);
    
    
    return 0;
}