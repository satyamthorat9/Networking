#include <stdio.h>
#include <string.h>

int main() {
    char ip[20];

    printf("---- Network Verification Tool ----\n");

    // Simulate show running-config
    printf("\nRunning Configuration:\n");
    printf("Hostname: Router1\n");
    printf("Interface: 192.168.1.1\n");
    printf("Subnet Mask: 255.255.255.0\n");

    // Simulate ping
    printf("\nEnter IP address to ping: ");
    scanf("%s", ip);

    printf("Pinging %s...\n", ip);
    printf("Reply from %s: bytes=32 time=10ms TTL=64\n", ip);

    printf("\nConfiguration Verified Successfully!\n");

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char ip[20];

//     printf("=== Network Configuration Verification ===\n");

//     printf("\nRunning Configuration:\n");
//     printf("Hostname: Router1\n");
//     printf("IP Address: 192.168.1.1\n");

//     printf("\nEnter IP to ping: ");
//     scanf("%s", ip);

//     if(strcmp(ip, "192.168.1.1") == 0) {
//         printf("Ping successful!\n");
//     } else {
//         printf("Ping failed!\n");
//     }

//     return 0;
// }