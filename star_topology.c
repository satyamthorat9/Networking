#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nStar Topology:\n");

    printf("        Node1\n");
    printf("          |\n");

    for(i = 2; i <= n; i++) {
        printf("Node%d --- Hub\n", i);
    }

    return 0;
}