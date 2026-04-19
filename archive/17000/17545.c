#include <stdio.h>
#include <stdlib.h>

int x, chk[43];
const int mod = 42;

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x);
        chk[x % mod] = 1;
    }
    int sum = 0;
    for (int i = 0; i < 42; i ++) if (chk[i]) sum++;
    printf("%d", sum);
}