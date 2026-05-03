#include <stdio.h>
typedef long long ll;

int power(int a, int b) {
    int result = 1;
    a %= 10;
    while (b > 0) {
        if (b % 2) result = (result * a) % 10;
        a = (a * a) % 10;
        b /= 2;
    }
    return result;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
}