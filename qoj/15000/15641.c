#include <stdio.h>

int t, n, answer = 0;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        answer += n;
    }
    printf("%d", answer);
}