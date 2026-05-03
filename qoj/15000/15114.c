#include <stdio.h>
typedef long long ll;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (2 * a <= b) printf("double it");
    else printf("take it");
}