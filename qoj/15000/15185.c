#include <stdio.h>
// typedef long long ll;
typedef unsigned long long ull;
typedef unsigned __int128 u128;

ull a, b, mod;

static inline ull mulmod(ull x, ull y) {return (ull)((u128)x * y % mod);}
static inline ull submod(ull x, ull y) {return (ull)(((u128)x + mod - y) % mod);}

typedef struct {
    ull x; // s_n
    ull y; // s_n+1
} node;

node sol(ull n) {
    if (n == 0) {
        node result;
        result.x = 2  % mod;
        result.y = a % mod;
        return result;
    }
    node half = sol(n >> 1);
    ull xn = half.x, xn1 = half.y;
    ull x2n = submod(mulmod(xn, xn), 2 % mod), x2n1 = submod(mulmod(xn, xn1), a % mod);
    if (n % 2ULL == 0) {
        node result;
        result.x = x2n;
        result.y = x2n1;
        return result;
    } else {
        node result;
        result.x = submod(mulmod(a % mod, x2n), x2n1);
        result.y = x2n;
        return result;
    }
}

int main() {
    scanf("%llu %llu %llu", &a, &b, &mod);
    if (mod == 1) {
        puts("0");
        return 0;
    }
    node result = sol(b);
    printf("%llu", result.x % mod);
}