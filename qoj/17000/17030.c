#include <stdio.h>

int n, m, a, b, c;

int main() {
    scanf("%d %d", &n, &m);
    a = n / 100, b = (n / 10) % 10, c = n % 10;
    n = 100 * c + 10 * b + a;
    a = m / 100, b = (m / 10) % 10, c = m % 10;
    m = 100 * c + 10 * b + a;
    n > m ? printf("%d", n) : printf("%d", m);
}