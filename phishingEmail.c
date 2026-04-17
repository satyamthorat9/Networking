// Write a C program that reads an email from a file and performs phishing pattern detection.
#include <stdio.h>
#include <string.h>

int main() {
    char email[200];

    printf("Enter email:\n");
    scanf(" %[^\n]", email);

    if(strstr(email, "urgent") || 
       strstr(email, "password") || 
       strstr(email, "click here") || 
       strstr(email, "bank")) {
        printf("Phishing Email Detected!\n");
    } else {
        printf("Safe Email\n");
    }

    return 0;
}