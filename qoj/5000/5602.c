#include <stdio.h>

int a, b, c, d, ca, cb;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ca = b - a, cb = d - c;
    for (int i = 1; i <= 101010; i++) {
        ca--, cb--;
        if (ca == 0 && cb == 0) {
            printf("%d", i);
            return 0;
        }
        if (ca == 0) ca = b;
        if (cb == 0) cb = d;
    }
}