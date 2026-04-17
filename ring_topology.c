#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nRing Topology:\n");

    for(i = 1; i <= n; i++) {
        printf("[Node%d] -> ", i);
    }

    printf("[Node1]\n"); // Complete ring

    return 0;
}