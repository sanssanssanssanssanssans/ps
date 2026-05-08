#include <stdio.h>
#define true 1
#define false 0

char *ten[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
char *one[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

int size(char *string) {
    int length = 0;
    while (string[length] != '\0') length++;
    return length;
}

void ctrlcv(char* s1, char* s2) {
    int sz = size(s2);
    for (int i = 0; i <= sz; i++) s1[i] = s2[i];
}

int eq(char* a, char* b) {
    int sz = size(a), chk = true;
    if (sz != size(b)) return false;
    for (int i = 0; i < sz; i++) {
        if (a[i] != b[i]) {
            chk = false;
            break;
        }
    }
    return chk;
}

void sort(char *s) {
    int n = size(s);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                char template = s[i];
                s[i] = s[j];
                s[j] = template;
            }
        }
    }
}

void solve(int n, char* result) {
    int poi = 0;
    char* a = (char*)ten[n / 10];
    char* b = (char*)one[n % 10];
    for (int i = 0; i < size(a); i++) result[poi++] = a[i];
    for (int i = 0; i < size(b); i++) result[poi++] = b[i];
    result[poi] = 0;
}

char s[32];

int main() {
    scanf("%s", s);
    sort(s);
    for (int i = 1; i < 100; i++) {
        char r[32], t[32];
        solve(i, r), ctrlcv(t, r), sort(t);
        if (eq(s, t)) {
            printf("%s\n", r);
            break;
        }
    }
}