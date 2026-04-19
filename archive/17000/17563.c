#include <stdio.h>
#include <math.h>

int n;
double w, h, x, line;

int main() {
    scanf("%d %lf %lf", &n, &w, &h);
    line = sqrt(w * w + h * h);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        if (x <= line) printf("DA\n");
        else printf("NE\n");
    }
}