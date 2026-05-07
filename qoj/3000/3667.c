#include <stdio.h>

int t, p;
double fuck;

int main() {
    scanf("%d %d", &t, &p);
    if (p >=  20) {
        fuck = t / (100.0 - p);
        printf("%lf", (p + 20) * fuck);
    } else {
        fuck = t / (80.0 + 2.0 * (20.0 - p));
        printf("%lf", p * 2 * fuck);
    }
}   