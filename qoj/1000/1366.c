#include <stdio.h>

int n, k, cnt = 0, template = 987654321, answer = -1234567890;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int max(int a, int b) {
    if (a > b)  return a;
    return b;
}

char board[10101][10101];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%s", board[i]);
    for (int i = 0; i < (1LL << k); i++) {
        template = k;
        for (int j = 1; j <= n; j++) {
            cnt = 0; 
            for (int x = 0; x< k; x++) {   
                if ((i>>x) % 2 == 1 && board[j][x] == 'T') cnt++;
                else if ((i >> x) % 2 == 0 && board[j][x] == 'F') cnt++;
            }
            template = min(template, cnt);
        }
        answer = max(answer, template);
    }
    printf("%d", answer);
}