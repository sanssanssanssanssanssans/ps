#include <stdio.h>

#define YES 1
#define NO 0

char s[12], result[202][69];

int size(char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int is_same(char* a, char* b) {
    int sz = size(a); // 어짜피 길이 같아야함
    if (sz != size(b)) return NO;
    int check = YES;
    for (int i = 0; i < sz; i++) {
        if (a[i] != b[i]){
            check = NO;
            break;
        }
    }
    return check;
}

char r[10];

void init_etc() {
    r[0] = 'P';
    r[1] = 'r';
    r[2] = 'e';
    r[3] = 's';
    r[4] = 'e';
    r[5] = 'n';
    r[6] = 't';
    r[7] = '!';
    r[8] = '\0';
}

int n;

int main() {
    init_etc();

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        for (int x = 0; x < size(s); x++) result[i][x] = s[x];
        if (is_same(r, s)) {
            result[i - 1][0] = '\0';
            result[i][0] = '\0';
        }
    }

    // 일단 다 result[i][0] == '\0'인지 ㄱㄱ
    int chk = YES;
    for (int i = 0; i < n; i++) {
        if (result[i][0] != '\0') {
            chk = NO;
            break;
        }
    }

    if (chk == YES) {
        printf("No Absences");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (result[i][0] == '\0') continue;
        printf("%s\n", result[i]);
    }
}   