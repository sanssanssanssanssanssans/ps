#include <stdio.h>

int c, k;

int main() {
    scanf("%d %d", &c, &k);
    int d = 1;
    for (int i = 0; i < k; i++) d *= 10;
    int f = c / d, r = c % d;
    r * 2 < d ? printf("%d", f * d) : printf("%d", (f + 1) * d);
}