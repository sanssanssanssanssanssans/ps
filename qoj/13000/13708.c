#include <stdio.h>
typedef long long ll;

int x, n, p[101];

int main() {
    scanf("%d", &x);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        answer += x;
        answer -= p[i];
    }
    printf("%d", answer + x);
}