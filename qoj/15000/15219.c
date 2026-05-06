#include <stdio.h>

int min(int x, int y) {
    if (x > y) return y;
    return x;
}

int size(char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

static inline int char_to_int(char ch) {
    if ('a' <= ch && ch <= 'z') return ch - 'a';
    return ch - 'A';
}

char s[10101];
int cnt[256], result = 0;

int main() {
    scanf("%s", s);
    int sz = size(s);
    for (int i = 0; i < sz; i++) if (s[i] != 'i') cnt[char_to_int(s[i])]++;
    for (int i = 0; i <= 25; i++) result += min(1, cnt[i]);
    printf("%d", result);
}