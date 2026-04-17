#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nBus Topology:\n");

    for(i = 1; i <= n; i++) {
        printf("[Node%d]", i);
        if(i < n)
            printf(" --- ");
    }

    printf("\n");

    return 0;
}