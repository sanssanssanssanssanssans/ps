#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b) {
        long long template = a % b;
        a = b;
        b = template;
    }
    return a;
}

long long n;

int main() {
    scanf("%lld", &n);
    for (long long i = 2; i < n; i++) {
        if (gcd(n, i) == 1) {
            printf("%lld", i);
            return 0;
        }
    }
}