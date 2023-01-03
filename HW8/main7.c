#include <stdio.h>

int main() {
    int a = -999;
    int b = 999;
    int sum = 0;

    for (int i = a; i <= b; i++) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
