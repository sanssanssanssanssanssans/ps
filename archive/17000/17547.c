#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define abs(x) ((x) < 0 ? -(x) : (x))

char s[1010], table[5][5005];
int n, row, col;

int main() {
    scanf("%s", s);
    n = strlen(s), row = 5, col = 4 * n + 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++) table[i][j] = '.';
        table[i][col] = '\0';
    }
    for(int i = 0; i < n; i++) {
        table[2][i * 4 + 2] = s[i];
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                if(abs(j - 2) + abs(k - 2) == 2) {
                    int c = i * 4 + k;
                    if (i % 3 == 2) table[j][c] = '*';
                    else if (table[j][c] == '.') table[j][c] = '#';
                }
            }
        }
    }
    for(int i = 0; i < 5; i++) printf("%s\n", table[i]);
}