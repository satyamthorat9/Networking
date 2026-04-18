#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nMesh Topology Connections:\n");

    for(i = 1; i <= n; i++) {
        for(j = i + 1; j <= n; j++) {
            printf("Node %d <--> Node %d\n", i, j);
        }
    }

    return 0;
}