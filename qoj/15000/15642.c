#include <stdio.h>
typedef long long ll;

typedef struct {
    int first;
    int second;
} pair;

int n, m, result = 0;

int main() {
    scanf("%d %d", &n, &m);
    pair min;
    min.first = 1000000000;
    min.second = 1;
    for (int i = 1; i <= n; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        pair compare;
        compare.first = m - a;
        compare.second = b;
        if (compare.first * min.second < min.first * compare.second) {
            min.first = compare.first;
            min.second = compare.second;
            result = i;
        }
    }
    printf("%d", result);
}