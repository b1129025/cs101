#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 2; i++) {
        printf("*");
        for (int j = 1; j <= 2 * (n - 2) - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
