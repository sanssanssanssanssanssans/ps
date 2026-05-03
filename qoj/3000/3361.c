#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, answer;
        scanf("%d %d", &a, &b);
        answer = a / b;
        if (a % b != 0) answer++;
        printf("%d\n", answer);
    }
}