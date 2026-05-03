#include <stdio.h>
typedef long long ll;

int y, m, d;

int main() {
    scanf("%d-%02d-%02d", &y, &m, &d);
    if (m < 9 || (m == 9 && d <= 16)) printf("GOOD");
    else printf("TOO LATE");
}