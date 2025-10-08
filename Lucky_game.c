/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description:Guess game 
*/ 
#include <stdio.h>

int main() {
    int secret_number, guess, attempts =0;

    
    srand(time(0));  
    secret_number = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number (between 1 and 20):\n");

    
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high!\n");
        } 
        else if (guess < secret_number) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations!🥳🥳🥳\n");
            printf("It took you %d attempts.\n", attempts);
            break;  
        }
    }

    return 0;
}