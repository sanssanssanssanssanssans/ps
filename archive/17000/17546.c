#include <stdio.h>
#include <stdlib.h>

double n;
const double pi = 3.14159265358978;

int main() {
    scanf("%lf", &n);
    printf("%.6lf\n%.6lf", n * n * pi, n * n * 2);
}