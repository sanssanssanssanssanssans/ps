#include <stdio.h>

int t, n;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n % 2 == 1) printf("0\n");
        else printf("%lld\n", 1LL * n * (n / 2 - 1));
    }
}