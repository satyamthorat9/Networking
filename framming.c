#include <stdio.h>
#include <string.h>

int main() {
    char data[50];
    int i, len;

    printf("Enter data: ");
    scanf("%s", data);

    len = strlen(data);

    printf("\nFramed Data: %d%s\n", len, data);

    return 0;
}