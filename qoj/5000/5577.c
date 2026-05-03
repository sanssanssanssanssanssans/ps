#include <stdio.h>
typedef long long ll;

const int INFINITY = 987654321;
int n, dp[102][102][102];
char s[102];

int size(char *string) {
    int len = 0;
    while (string[len] != '\0') len++;
    return len;
}

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    scanf("%s", s);
    n = size(s);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            dp[i][j][0] = 0;
            dp[i][j][1] = 0;
        }
    }

    for (int len = 2; len <= n; len++) {
        for (int l = 0; l + len - 1 < n; l++) {
            int r = l + len - 1;
            for (int ch = 0; ch < 2; ch++) {
                int result = INFINITY;
                
                if (l + 2 <= r - 2) result = dp[l + 2][r - 2][0] + 2;
                else result = 2;

                if (ch || s[l] != s[r]) {
                    int value;
                    if (l + 1 <= r - 1) value = dp[l + 1][r - 1][1] + 1;
                    else value = 1;
                    result = min(result, value);
                }

                if ((ch && s[l] != s[r]) || (!ch && s[l] == s[r])) {
                    int value;
                    if (l + 1 <= r - 1) value = dp[l + 1][r - 1][0];
                    else value = 0;
                    result = min(result, value);
                }

                dp[l][r][ch] = result;
            }
        }
    }

    int result;
    if (n == 0) result = 0;
    else result = dp[0][n - 1][0];
    printf("%d", result);
}