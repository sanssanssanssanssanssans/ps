#include <stdio.h>
typedef long long ll;
#define EPS 1e-7

int a, b, c, d;
double C, D;

int main() {
    scanf("%d %d %lf %lf", &a, &b, &C, &D);
    a--, b--;
    c = (C + EPS) * 100, d = (D + EPS) * 100;
    a * d == b * c ? printf("SAME") : (a * d < b * c ? printf("TAOYUAN") : printf("JAKARTA"));
}