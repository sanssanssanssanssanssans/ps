#include <stdio.h>
typedef long long ll;

char s[105], t[105];

int size(char*string) {
    int len = 0;
    while (string[len] != '\0') len++;
    return len;
}

int main() {
    scanf("%s", s);
    int len = size(s), pad = (3 - len % 3) % 3;
    int idx = 0;
    for (int i = 0; i < pad; i++) t[idx++] = '0';
    for (int i = 0; i < len; i++) t[idx++] = s[i];
    t[idx] = '\0';
    for (int i = 0; i < idx; i += 3) {
        int x = (t[i] - '0') * 4 + (t[i + 1] - '0') * 2 + (t[i + 2] - '0');
        printf("%d", x);
    }
}