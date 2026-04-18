// Write a program to implements Static Routing Simulation
#include <stdio.h>

int main() {
    printf("Static Routing Configuration\n");

    printf("\nRouter(config)# ip route 192.168.2.0 255.255.255.0 10.0.0.2\n");
    printf("Router(config)# ip route 172.16.0.0 255.255.0.0 10.0.0.3\n");

    printf("\nRoutes configured successfully!\n");

    return 0;
}