#include <stdio.h>

int cti(char ch) {
    return ch - 'a';
}

int vis[6974];
char s[10101];

int get_sz() {
    int fuck = 0;
    for (int i = 0; i < 6974; i++) fuck += vis[i];
    return fuck;
}

int size(char *s) {
    int result = 0;
    while (s[result] != '\0') result++;
    return result;
}

int main() {
    scanf("%s", s);
    
    for (int i = 0; i < size(s); i++) {
        if (vis[cti(s[i])] == 1) continue;
        vis[cti(s[i])] = 1;
    }

    if (size(s) == get_sz()) printf("1");
    else printf("0");
}