#include <stdio.h>

int main() {
    char msg[100];
    int i;

    printf("Enter message: ");
    scanf("%s", msg);

    for(i = 0; msg[i] != '\0'; i++) {
        msg[i] = msg[i] + 3; // Caesar Cipher
    }

    printf("Encrypted Message: %s\n", msg);

    return 0;
}