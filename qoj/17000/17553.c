#include <stdio.h>
#include <string.h>

void string_rev(char *s, int n) {
    for(int i = 0; i < n / 2; i++) {
        char tmp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
}

int n1, n2, t, len;
char s[2020], s1[1010], s2[1010];

int main() {
    scanf("%d %d", &n1, &n2);
    scanf("%s %s", s1, s2);
    scanf("%d", &t);
    len = n1 + n2;
    for (int i = 0; i < n1; i++) s[i] = 'L';
    for (int i = n1; i < len; i++) s[i] = 'R';
    for (int x = 0; x < t; x++) {
        for (int i = 0; i + 1 < len; i++) {
            if (s[i] =='L' && s[i + 1] == 'R') {
                char tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                i++;
            }
        }
    }
    string_rev(s1, n1);
    int c1 = 0, c2 = 0;
    char ret[2020];
    for(int i = 0; i < len; i++) {
        if (s[i] == 'L') ret[i] = s1[c1++];
        else ret[i] = s2[c2++];
    }
    ret[len] = '\0';
    printf("%s", ret);
}