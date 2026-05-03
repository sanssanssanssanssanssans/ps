#include <stdio.h>

int n, count = 0;
char a[101010], b[101010];

int main() {
    scanf("%d", &n);
    scanf("%s", a);
    scanf("%s", b);
    for (int i = 0; i < n; i++) if (a[i] == b[i]) count++;
    printf("%d", count);
}