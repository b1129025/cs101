*******************************************************************************/
#include <stdio.h>

void print_top() {
    printf("   *   \n");
    printf("  ***  \n");
    printf(" ***** \n");
}
void print_trunk() {
    printf("   |   \n");
    printf("   |   \n");
    printf("   |   \n");
}
void print_spaces(int n) {
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
}
void print_star() {
    printf("*");
}
int main() {
    print_top();
    print_spaces(3);
    print_trunk();
    return 0;
}
