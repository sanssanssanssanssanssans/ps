#include <stdio.h>
typedef long long ll;
typedef long double ld;

ld a, b;

int main() {
    scanf("%lf %lf", &a, &b);
    ll x = (1LL << 50) * b;
    for (int i = 0; i < 50; i++) printf("%d", (x >> i & 1) + 1);
}