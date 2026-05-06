#include <stdio.h>

int abs(int x) {
    if (x < 0) return -x;
    return x;
}

int min(int x, int y) {
    if (x > y) return y;
    return x;
}

int n, t, sum = 0, mn = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        sum += t;
        mn = min(sum, mn);
    }
    printf("%d", abs(mn));
}