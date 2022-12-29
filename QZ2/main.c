#include <stdio.h>

void print_spaces(int r, int rows) {
    for (int i = 0; i < rows - r; i++) {
        printf("  ");
    }
}

void print_stars(int r) {
    printf(" ");
    for (int i = 0; i < 2 * r - 1; i++) {
        printf("* ");
    }
}

int main() {
    int rows = 5;
    for (int r = rows; r >= 1; r--) {
        print_spaces(r, rows);
        print_stars(r);
        printf("\n");
    }
    return 0;
}
