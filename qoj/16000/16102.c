#include <stdio.h>

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int t, n, m;

int main() {
    scanf("%d", &t);
    for (int s = 0; s < t; s++) {
        scanf("%d %d", &n, &m);
        if (n == 2) {
            if (m % 2 == 1) printf("2 1\n");
            else printf("1 2\n");
            continue;
        }
        m = min(m, n - 1);
        for (int i = 1; i <= m; i++) printf("%d ", n - i + 1);
        for (int i = 1; i <= n - m; i++) printf("%d ", i);
        printf("\n");
    }
}