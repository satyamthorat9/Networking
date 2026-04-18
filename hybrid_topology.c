#include <stdio.h>

int main() {
    int i;

    printf("Hybrid Topology (Star + Bus):\n\n");

    // Star part
    printf("        PC1\n");
    printf("         |\n");
    printf("PC2 --- Switch --- PC3\n");
    printf("         |\n");
    printf("        PC4\n");

    // Bus part
    printf("\n       |\n");
    printf("       Hub\n");
    printf("-------|-------|-------\n");
    printf("     PC5     PC6     PC7\n");

    return 0;
}