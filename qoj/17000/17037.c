#include <stdio.h>

int n;

int power(int n, int e) {
    int result = 1;
    for (int i = 0; i < e; i++) result *= n;
    return result;
}

int main() {
    scanf("%d", &n);
    printf("%d", power(power(2, n) + 1, 2));
}