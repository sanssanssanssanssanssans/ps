#include <stdio.h>

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int n, a, b, answer = -987654321;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        answer = max(answer, a * b);
    }
    printf("%d", answer);
}