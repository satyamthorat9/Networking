// Write a program to version that saves output to a text file
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("output.txt", "w");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Network Configuration:\n");
    fprintf(fp, "IP Address: 192.168.1.10\n");
    fprintf(fp, "Subnet Mask: 255.255.255.0\n");
    fprintf(fp, "Gateway: 192.168.1.1\n");

    fclose(fp);

    printf("Data successfully written to file.\n");

    return 0;
}