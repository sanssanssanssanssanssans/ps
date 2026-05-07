#include <stdio.h>

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int n, current = 0, x;

int main() {
    scanf("%d", &x);
    current += x;
    scanf("%d", &x);
    current += x;
    scanf("%d", &x);
    current += x;
    scanf("%d", &x);
    current += x;
    scanf("%d", &n);
    printf("%d", max(4 * n - current, 0));
}