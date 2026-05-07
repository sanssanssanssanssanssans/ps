#include <stdio.h>

char a[5050], b[5050], c[5050];

int main() {
    scanf("%s", a);
    scanf("%s", b);
    int la = 0, lb = 0;
    while (a[la]) la++;
    while (b[lb]) lb++;
    int i = la - 1, j = lb - 1, k = 0, t = 0;
    while (i >= 0 || j >= 0 || t) {
        if (i >= 0) t += a[i--] - '0';
        if (j >= 0) t += b[j--] - '0';
        c[k++] = t % 10 + '0';
        t /= 10;
    }
    while (k --) putchar(c[k]);
}