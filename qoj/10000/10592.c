#include <stdio.h>

int n, a, b, fizzbuzz = 0, fizz = 0, buzz = 0;

int main() {
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b == 0) fizzbuzz++;
        else if (i % a == 0) fizz++;
        else if (i % b == 0) buzz++;
    }
    printf("%d %d %d", fizz, buzz, fizzbuzz);
}