#include <stdio.h>

int get_digit(int n) {
    
}

int main() {
    int n = 1234;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum * 10 + digit;
        n /= 10;
    }
    printf("sum = %d\n", sum);
    return 0;
}
