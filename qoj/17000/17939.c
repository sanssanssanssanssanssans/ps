#include <stdio.h>

int size(char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int t;

int main() {
    scanf("%d", &t);
    while (t--) {
        char s[999];
        int result = 0;
        scanf("%s", s);
        int len = size(s);
        if (s[len - 1] == '!') result = 1;
        else result = s[len - 1] - '0';
        int i = 0;
        while (s[i] == '!') i++, result ^= 1;
        printf("%d\n", result);
    }
}