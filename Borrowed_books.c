/*
Name: David Msenya Mwita
Registration no: CT101/G/26419/25
Description: borrowed books
*/



#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char title[100];
    char line[100]; 
    const char *filename = "C:\\Users\\STEVO\\OneDrive\\Documents\\borrowed_books.txt";

    printf("Adding Book Title \n");
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    printf("Enter book title (or type 'exit' to stop):\n");
    while (1) {
        printf("Title: ");
        
        fgets(title, sizeof(title), stdin); 

        if (strncmp(title, "exit", 4) == 0) { 
            break;
        }

        fputs(title, fp); 
        printf("Book title successfully stored!\\n");
        break; 
    }

    fclose(fp);
    printf("File for appending closed.\\n\n");

    printf("Books in File \n");
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    printf("File for reading closed.\\n");
    return 0;
}