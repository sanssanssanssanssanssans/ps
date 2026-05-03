#include <stdio.h>
#include <math.h>
typedef long long ll;

const long double PI = 3.1415926535897932384626433832795;

long double to_rad(long double deg) {
    return deg * PI / 180.0L;
}

long double area(long double x, long double y, long double z) {
    long double s = (x + y + z) / 2.0L;
    long double v = s * (s - x) * (s - y) * (s - z);
    if (v < 0) v = 0;
    return sqrtl(v);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        long double a, b, c, A, B, C;
        scanf("%Lf %Lf %Lf %Lf %Lf %Lf", &a, &b, &c, &A, &B, &C);
        A = to_rad(A), B = to_rad(B), C = to_rad(C);
        long double cosA = cos(A), cosB = cos(B), cosC = cos(C);
        long double sinA = sin(A), sinB = sin(B), sinC = sin(C);
        long double inside = 1.0L + 2.0L * cosA * cosB * cosC - cosA * cosA - cosB * cosB - cosC * cosC;
        long double V = a * b * c * sqrt(fmax(0.0L, inside)) / 6.0L;
        long double AB = sqrt(a * a + b * b - 2.0L * a * b * cosC);
        long double BC = sqrt(b * b + c * c - 2.0L * b * c * cosA);
        long double CA = sqrt(c * c + a * a - 2.0L * c * a * cosB);
        long double s1 = 0.5L * b * c * sinA;
        long double s2 = 0.5L * c * a * sinB;
        long double s3 = 0.5L * a * b * sinC;
        long double s4 = area(AB, BC, CA);
        long double s = s1 + s2 + s3 + s4;
        long double r = 3.0L * V / s;
        printf("%.6Lf\n", r);
    }
}