#include <stdio.h>
typedef long long ll;
#define YES 1
#define NO 0

int recursion(char*s, int l, int r) {
    if (l >= r) return YES;
    if (s[l] != s[r]) return NO;
    return recursion(s, l + 1, r - 1);
}

int size(char*s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int is_palindrome(char*s) {
    return recursion(s, 0, size(s) - 1);
}

int has_palindrome(char*s, int len) {
    for (int i = 0; i < len - 1; i++) if (s[i] == s[i + 1]) return YES;
    for (int i = 0; i < len - 2; i++) if (s[i] == s[i + 2]) return YES;
    return NO;
}

char conv(char c) {
    if (c == 'i' || c == 'j') return 'i';
    if (c == 'p' || c == 'b' || c == 'd') return 'p';
    return c;
}

int n, answer = 0, answer2 = 0;
char s[10101];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (has_palindrome(s, size(s))) answer++;
        for (int i = 0; i < size(s); i++) s[i] = conv(s[i]);
        if (has_palindrome(s, size(s))) answer2++;
    }
    printf("%d\n%d", answer, answer2);
}