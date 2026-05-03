#include <stdio.h>

int n, result = 0;

int main() {
    scanf("%d", &n);
    while (n > 0) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    printf("%d", result);
}