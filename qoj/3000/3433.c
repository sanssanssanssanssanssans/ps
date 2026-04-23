#include <stdio.h>
#include <math.h>

long long basis[60];
int sz = 0;

void add(long long x) {
    for(int i = 0; i < sz; i++) if ((x ^ basis[i]) < x) x ^= basis[i];
    if (x != 0) basis[sz++] = x;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        add(x);
    }

    for(int i = 0; i < sz; i++) {
        for(int j = i + 1; j < sz; j++) {
            if (basis[i] < basis[j]) {
                long long tmp = basis[i];
                basis[i] = basis[j];
                basis[j] = tmp;
            }
        }
    }

    long long res = 0;
    for(int i = 0; i < sz; i++) if ((res ^ basis[i]) > res) res ^= basis[i];
    printf("%lld", res);
}