#include <stdio.h>
typedef long long ll;

int n, m, freq[1010][27];
char s[1010];

int mapping(char ch) {
    if (ch == 'a') return 0;
    if (ch == 'b') return 1;
    if (ch == 'c') return 2;
    if (ch == 'd') return 3;
    if (ch == 'e') return 4;
    if (ch == 'f') return 5;
    if (ch == 'g') return 6;
    if (ch == 'h') return 7;
    if (ch == 'i') return 8;
    if (ch == 'j') return 9;
    if (ch == 'k') return 10;
    if (ch == 'l') return 11;
    if (ch == 'm') return 12;
    if (ch == 'n') return 13;
    if (ch == 'o') return 14;
    if (ch == 'p') return 15;
    if (ch == 'q') return 16;
    if (ch == 'r') return 17;
    if (ch == 's') return 18;
    if (ch == 't') return 19;
    if (ch == 'u') return 20;
    if (ch == 'v') return 21;
    if (ch == 'w') return 22;
    if (ch == 'x') return 23;
    if (ch == 'y') return 24;
    if (ch == 'z') return 25;
}

char mapping2(int x) {
    if (x == 0) return 'a';
    if (x == 1) return 'b';
    if (x == 2) return 'c';
    if (x == 3) return 'd';
    if (x == 4) return 'e';
    if (x == 5) return 'f';
    if (x == 6) return 'g';
    if (x == 7) return 'h';
    if (x == 8) return 'i';
    if (x == 9) return 'j';
    if (x == 10) return 'k';
    if (x == 11) return 'l';
    if (x == 12) return 'm';
    if (x == 13) return 'n';
    if (x == 14) return 'o';
    if (x == 15) return 'p';
    if (x == 16) return 'q';
    if (x == 17) return 'r';
    if (x == 18) return 's';
    if (x == 19) return 't';
    if (x == 20) return 'u';
    if (x == 21) return 'v';
    if (x == 22) return 'w';
    if (x == 23) return 'x';
    if (x == 24) return 'y';
    if (x == 25) return 'z';
}

int get_max_idx(int j) {
    // 짜피 배열의 길이는 25임
    int mx = -1234567890, idx = 0;
    for (int i = 0; i <= 25; i++){
        if (mx < freq[j][i]) {
            mx = freq[j][i];
            idx = i;
        }
    }
    return idx;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        for (int j = 0; j < m; j++) {
            freq[j][mapping(s[j])]++;
        }
    }
    for (int i = 0; i < m; i++) {
        int current_max = get_max_idx(i);
        printf("%c", mapping2(current_max));
    }
}