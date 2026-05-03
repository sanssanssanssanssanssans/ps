#include <stdio.h>
typedef long long ll;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max(b - a, c- b) - 1);
}