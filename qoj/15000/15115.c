#include <stdio.h>
typedef long long ll;

#define YES 1
#define NO 0;

const int MAX = 1000000;
int sieve[1010101];

void init(){
    for (int i = 2; i <= MAX; i++) sieve[i] = 1;
    for (int i = 2; i * i <= MAX; i++) if (sieve[i]) for (int j = i * i; j <= MAX; j += i) sieve[j] = 0;
}

int is_prime(int n) {
    if (n < 2) return NO;
    return sieve[n] ? YES : NO;
}

int main() {
    init();
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (is_prime(a) && is_prime(b) && a + 2 == b) printf("Y\n");
        else printf("N\n"); 
    }
}