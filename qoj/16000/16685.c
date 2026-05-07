#include <stdio.h>

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int n, m, arr[101], result = 0;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] <= m) {
                    result = max(result, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }
    printf("%d", result);
}   